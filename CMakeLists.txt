cmake_minimum_required(VERSION 3.25)
project(FactoryMethod)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactoryMethod main.cpp Heroes/Hero.h Heroes/Elf.h Heroes/Monster.h Creators/Creator.h Creators/ElfCreator.h Creators/MonsterCreator.h Game.h GameHelper.h Heroes/Ghost.h Creators/GhostCreator.h Builder.h Types.h)
