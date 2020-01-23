set(CurrentDirectory ${CMAKE_CURRENT_LIST_DIR})

add_executable(Project "")

include(${CMAKE_CURRENT_LIST_DIR}/CMakeFiles.cmake)

target_include_directories(Project 
    PUBLIC
    ${CurrentDirectory}
)
Set_Common_TargetCompileOptions(Project)
target_link_libraries(Project
                      PUBLIC
)

