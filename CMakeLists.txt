cmake_minimum_required( VERSION 2.9...3.22 )

project( OpenGL-test )

link_directories("/mingw64/lib")
find_library(GLUT_LIBRARY
         NAMES
            libfreeglut
)
find_library(OPENGL_LIBRARY NAMES libopengl32)
set( CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build )
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR} )
set( LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR} )
set( SOURCE main.cpp )

add_executable( ${PROJECT_NAME} ${SOURCE} )
target_link_libraries( ${PROJECT_NAME} ${GLUT_LIBRARY} ${OPENGL_LIBRARY} )
