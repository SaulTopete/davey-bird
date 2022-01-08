cmake_minimum_required(VERSION 3.20)
project(CS8FinalProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(CS8FinalProject main.cpp Fonts.cpp Fonts.h Game.cpp Game.h MouseEvents.h Bird.cpp Bird.h Pipes.cpp Pipes.h Textures.cpp Textures.h DropdownMenu.cpp DropdownMenu.h InputBox.cpp InputBox.h Item.cpp Item.h ItemList.cpp ItemList.h Typing.cpp Typing.h TypingBackground.cpp TypingBackground.h EndScreen.cpp EndScreen.h FileItem.cpp FileItem.h FileNode.cpp FileNode.h FileTree.cpp FileTree.h GUIComponent.h)

target_link_libraries(CS8FinalProject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
