import requests
import os
import csv
import sys

# Change these constants
COURSE_ID = 50056

# HWPROJ_TOKEN must contain only a key!
HEADERS = {"Authorization": f"Bearer {os.environ['HWPROJ_TOKEN']}"}

TASKS_URL = f"https://hwproj.ru/api/Courses/{COURSE_ID}"
STATS_URL = f"https://hwproj.ru/api/Statistics/{COURSE_ID}"

course = requests.get(TASKS_URL, headers=HEADERS).json()
stats = requests.get(STATS_URL, headers=HEADERS).json()

homeworks = course["homeworks"]

homeworks_header = []
controls_header = []
for homework in homeworks:
    tasks = []
    for task in homework["tasks"]:
        tasks.append(task["title"])
    if "Контрольная работа" in homework["tags"]:
        controls_header += tasks
    else:
        homeworks_header += tasks
header = ["ФИО"] + homeworks_header + controls_header

table = [header]

# Due to HwProj quirks, we do not need to filter students and/or tasks,
# they are filtered on backend based on your token.
for student in stats:
    homework_ratings = []
    control_ratings = []

    for homework in student["homeworks"]:
        hw_descr = next(filter(lambda hw: hw["id"] == homework["id"], homeworks))
        ratings = []

        for task in homework["tasks"]:
            task_descr = next(
                filter(lambda t: t["id"] == task["id"], hw_descr["tasks"])
            )
            if len(task["solution"]) == 0:
                ratings.append("0")
                continue
            ratings.append(f"{task['solution'][-1]['rating']}")

        if "Контрольная работа" in hw_descr["tags"]:
            control_ratings += ratings
        else:
            homework_ratings += ratings

    row = (
        [f"{student['surname']} {student['name']}"] + homework_ratings + control_ratings
    )
    table.append(row)

writer = csv.writer(sys.stdout)
writer.writerows(table)
