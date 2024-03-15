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

ADD_EXECUTABLE(character_test
    test/charactertest.cpp
)

TARGET_LINK_LIBRARIES(character_test gtest)
TARGET_COMPILE_DEFINITIONS(character_test PRIVATE gtest_disable_pthreads=ON)