cmake_minimum_required(VERSION 3.5)

project(Spider VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Boost)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
endif()

#add_subdirectory("D:\\Projects\\libpqxx-7.10.0" libpqxx-build)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h mainwindow.ui

 #       Libpqxx-build

        Signals/signals.h       Signals/signals.cpp
        SpiderDB/spiderdb.h     SpiderDB/spiderdb.cpp
        HTTPClient/httpclient.h HTTPClient/httpclient.cpp
    )

qt_add_executable(Spider
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )

#target_link_libraries(Spider PRIVATE Qt${QT_VERSION_MAJOR}::Widgets pqxx)
target_link_libraries(Spider PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
