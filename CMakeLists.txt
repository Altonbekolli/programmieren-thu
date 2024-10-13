# Mindestversion von CMake festlegen
cmake_minimum_required(VERSION 3.29)

# Projekt definieren
project(ProgrammierenTHU VERSION 1.0 LANGUAGES CXX)

# Setze den Standard für C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Füge die ausführbare Datei und alle Quellcode-Dateien hinzu
add_executable(programmieren-thu
        main.cpp
        alton_bekolli.cpp
        jeremy_diem.cpp
        gabriel_penkert.cpp
        serhat_guerel.cpp
        valentin_talmon.cpp
        Analyze.cpp
        Schein1_Aufgaben.cpp
)

# Füge die Header-Dateien als Include-Direktory hinzu
target_include_directories(programmieren-thu PRIVATE ${CMAKE_SOURCE_DIR})
