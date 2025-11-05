cmake_minimum_required(VERSION 3.16)
project(StudyAndProjectAssistantQt VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt (Qt6 recommended). If you use Qt5, change to find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME}
  src/main.cpp
  src/MainWindow.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

# Link Qt widgets
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

# Resources (if used)
qt6_add_resources(RESOURCE_ADDED resources/resources.qrc)

# Simple tests target (stub)
add_executable(tests tests/test_main.cpp)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests PRIVATE Qt6::Widgets)
add_test(NAME basic_run COMMAND tests)

enable_testing()
