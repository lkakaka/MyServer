
set(CMAKE_DEBUG_POSTFIX "_d")

add_definitions(-DSERVER_EXPORT -DOPEN_PROFILE_TRACK)

gnu_setting(false)

include_directories(${LOG4CPP_ROOT}/include ${Boost_INCLUDE_DIRS} ${PYTHON_ROOT}/include ${LOG4CPP_ROOT})
link_directories(${LOG4CPP_ROOT} ${Boost_LIBRARY_DIRS} ${PYTHON_ROOT}/libs ${LOG4CPP_ROOT})

file(GLOB_RECURSE CURRENT_HEADERS *.h *.hpp)
file(GLOB_RECURSE CURRENT_SRC *.cpp *cc)
add_library(HttpServer SHARED ${CURRENT_HEADERS} ${CURRENT_SRC} ${COMMON_SRC})
#add_executable(HttpServer ${CURRENT_HEADERS} ${CURRENT_SRC})
target_link_libraries(HttpServer log4cpp)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
