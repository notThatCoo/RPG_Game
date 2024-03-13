CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(RPG)

ADD_EXECUTABLE(start_game
    src/main.cpp
    src/interaction.cpp
    src/character.cpp
    src/human.cpp
    src/elf.cpp
    src/dragonborn.cpp
    src/dwarf.cpp
    src/enemy.cpp
)