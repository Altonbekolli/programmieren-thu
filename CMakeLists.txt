add_executable(programmieren-thu "main.cpp" "alton_bekolli.h" "alton_bekolli.cpp"
        main.cpp
        main.cpp
        alton_bekolli.cpp)


if (CMAKE_VERSION VERSION_GREATER 3.12)
set_property(TARGET programmieren-thu PROPERTY CXX_STANDARD 20)
endif()

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
