CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_EXECUTABLE(start_game
    main.cpp
    src/interaction.cpp
    src/character.cpp
    src/human.cpp
    src/elf.cpp
    src/dragonborn.cpp
    src/dwarf.cpp
    src/enemy.cpp
)

ADD_SUBDIRECTORY(googletest)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)