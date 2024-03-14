CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(RPG)
ADD_SUBDIRECTORY(googletest)

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

ADD_EXECUTABLE(charactertest
    test/charactertest.cpp
)

TARGET_LINK_LIBRARIES(charactertest gtest)
TARGET_COMPILE_DEFINITIONS(charactertest PRIVATE gtest_disable_pthreads=ON)