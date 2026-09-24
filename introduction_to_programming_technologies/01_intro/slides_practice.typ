#import "@preview/touying:0.7.4": *
#import themes.dewdrop: *

#import "@preview/datify:1.3.0": *
#import "@preview/zeitline:0.1.1": timeline

#set text(lang: "ru")

#show: dewdrop-theme.with(
  aspect-ratio: "16-9",
  footer: self => self.info.institution,
  navigation: "none",
  config-info(
    title: [Практическая работа],
    author: [Н.А. Пономарев],
    date: [#display-date(datetime(day: 18, month: 9, year: 2026), pattern: "long")],
    institution: [СПбГУ],
    contact: [n.ponomarev\@spbu.ru],
  ),
  config-common(horizontal-line-to-pagebreak: false),
)

#set text(font: "Fira Sans", size: 20pt)
#show math.equation: set text(font: "Fira Math")
#set strong(delta: 100)
#set par(justify: true)

#title-slide()

== Летучка

- Маленькая контрольная работа
- На листочке ручкой
- Пишите разборчиво
- Любые источники информации, кроме головы, *ЗАПРЕЩЕНЫ*
- На всё *15* минут
- Если условия задания непонятны, *нужно* задать вопрос

== Практическая работа

- За пару необходимо выполнить Практическую работу
- Условия на HwProj
- Самое время задавать вопросы преподавателям!
- Для получения баллов:
  + Залить артефакты на HwProj
  + Показать преподавателю _лично_ результат выполнения
