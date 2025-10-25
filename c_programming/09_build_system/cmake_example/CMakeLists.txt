# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем названием проекта и используемый язык(и)
project(example C)

# Перечисляем библиотеки
add_library(Input Input.c)
add_library(Logic Logic.c)
add_library(Output Output.c)
# Связывает Logic с Output
target_link_libraries(Logic PUBLIC Output)

# Указываем исполняемый файл
add_executable(main main.c)
# Связываемся с библиотеками, Output доступен из-за Logic
target_link_libraries(main PRIVATE Input)
target_link_libraries(main PRIVATE Logic)
