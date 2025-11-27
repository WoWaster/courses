import json
import sys


if __name__ == "__main__":
    json_file = sys.argv[1]
    with open(json_file, mode="r", encoding="utf-8") as f:
        hwproj = json.load(f)

    homeworks = hwproj["homeworks"]

    for homework in homeworks:
        print(f"# {homework['title']}")
        print("")
        print(homework["description"])
        print("")
        tasks = homework["tasks"]
        for task in tasks:
            print(f"## {task['title']}")
            print("")
            print(f"_Балл за задачу: {task['maxRating']}_")
            print("")
            print(task["description"])
            print("")
        print("")
