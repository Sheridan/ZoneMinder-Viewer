project (zmviewer)

SET(QT_MIN_VERSION "4.4.0")

cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package ( Qt4 REQUIRED )
find_package ( LIBVLC REQUIRED )
 
include ( ${QT_USE_FILE} )
 
include_directories ( QT_INCLUDE_DIR ) 

#compiler flags.
SET(CMAKE_CXX_FLAGS "-Wall")
SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
SET(CMAKE_CXX_FLAGS_RELEASE "-O2 -s -flto -std=c++0x")
SET(CMAKE_CXX_FLAGS_DEBUG  "-O1 -g -std=c++0x -Wno-variadic-macros -Wuninitialized -Wcast-align -Wredundant-decls -Wno-unknown-pragmas -fdata-sections -ffunction-sections -pedantic -Wextra -Wno-long-long -Wstrict-overflow -Woverloaded-virtual -Wsign-promo -Wabi -Wall -Werror -isystem /opt/qt-4-debug/include")

if(NOT CMAKE_BUILD_TYPE MATCHES "^[Dd][Ee][Bb][Uu][Gg]")
    set (ZMVIEWERDEF -DQT_NO_DEBUG_OUTPUT )
endif()

set(ZMVIEWER_INSTALL_DIR  ${CMAKE_INSTALL_PREFIX} )
set(ZMVIEWER_BIN_DIR      ${ZMVIEWER_INSTALL_DIR}/bin )
set(ZMVIEWER_DATA_DIR     ${ZMVIEWER_INSTALL_DIR}/share/zmviewer )
set(ZMVIEWER_STYLE_DIR    ${ZMVIEWER_DATA_DIR}/styles )

if(CMAKE_HOST_WIN32)
	set(ZMVIEWER_LIB_DIR      ${ZMVIEWER_INSTALL_DIR}/bin )
else(CMAKE_HOST_WIN32)
	set(ZMVIEWER_LIB_DIR      ${ZMVIEWER_INSTALL_DIR}/lib )
endif(CMAKE_HOST_WIN32)

configure_file(
   ${CMAKE_CURRENT_SOURCE_DIR}/config-zmviewer.h.cmake
   ${CMAKE_CURRENT_BINARY_DIR}/config-zmviewer.h
)
 
add_definitions(${QT_DEFINITIONS} ${ZMVIEWERDEF}  )

add_subdirectory ( src )
