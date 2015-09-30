cmake_minimum_required(VERSION 2.8.11)

project(Wizard)

find_package(Qt5Widgets)

## #################################################################
## Compilation options
## #################################################################

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

if(APPLE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -I/usr/lib/c++/v1")
endif(APPLE)

if(NOT APPLE AND NOT MSVC)
  include(CheckCXXCompilerFlag)
  CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
  CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
  if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wno-unknown-pragmas")
  elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -Wno-unknown-pragmas")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-pragmas")
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
  endif()
else(NOT APPLE AND NOT MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif(NOT APPLE AND NOT MSVC)


## #################################################################
## Sources
## #################################################################

set(${PROJECT_NAME}_UI
  introPage.ui
  generalPage.ui
  inOutPage.ui
  nodepage.ui
  iolinewidget.ui
)

qt5_wrap_ui(${PROJECT_NAME}_UI_HEADERS ${${PROJECT_NAME}_UI})

set(${PROJECT_NAME}_HEADERS
  generator.h
  inOutPage.h
  iolinewidget.h
  nodepage.h
  generalPage.h
  iowidget.h
  wizard.h
  introPage.h
)

set(${PROJECT_NAME}_SOURCES
  iolinewidget.cpp
  introPage.cpp
  generalPage.cpp
  wizard.cpp
  nodepage.cpp
  generator.cpp
  main.cpp
  inOutPage.cpp
  iowidget.cpp
)

set(${PROJECT_NAME}_RESOURCES
  templates.qrc)
  


## #################################################################
## Build rules
## #################################################################

qt5_add_RESOURCES(${PROJECT_NAME}_SOURCES_QRC ${${PROJECT_NAME}_RESOURCES})

add_executable(${PROJECT_NAME}
  ${${PROJECT_NAME}_UI_HEADERS}
  ${${PROJECT_NAME}_SOURCES_QRC}
  ${${PROJECT_NAME}_SOURCES}
  ${${PROJECT_NAME}_HEADERS})

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

