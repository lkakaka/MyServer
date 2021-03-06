cmake_minimum_required(VERSION 3.0)
project(MyServer)

macro(gnu_setting pthread)
	if (CMAKE_COMPILER_IS_GNUCXX)
 		set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
		if (${pthread})
 			set(CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")
		 	#MESSAGE(STATUS "set pthread")
		endif()
	 	#MESSAGE(STATUS ${CMAKE_CXX_FLAGS})
		SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb -D _DEBUG")
		#SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
	endif (CMAKE_COMPILER_IS_GNUCXX)
endmacro()

macro(source_group_by_dir source_files)
    if(MSVC)
        set(sgbd_cur_dir ${CMAKE_CURRENT_SOURCE_DIR})
        foreach(sgbd_file ${${source_files}})
            string(REGEX REPLACE ${sgbd_cur_dir}/\(.*\) \\1 sgbd_fpath ${sgbd_file})
            string(REGEX REPLACE "\(.*\)/.*" \\1 sgbd_group_name ${sgbd_fpath})
            string(COMPARE EQUAL ${sgbd_fpath} ${sgbd_group_name} sgbd_nogroup)
            string(REPLACE "/" "\\" sgbd_group_name ${sgbd_group_name})
            if(sgbd_nogroup)
                set(sgbd_group_name "\\")
            endif(sgbd_nogroup)
            #message(STATUS ${sgbd_fpath})

            string(REGEX MATCH ".*(\\.h|\\.hpp)$" header_file ${sgbd_file})
            if(header_file)
                #message(STATUS ${header_file})
                source_group("${sgbd_group_name}\\Header Files" FILES ${sgbd_file})
            else()
                string(REGEX MATCH ".*(\\.c|\\.cpp|\\.cc)$" source_file ${sgbd_file})
                if(source_file)
                    #message(STATUS ${source_file})
                    source_group("${sgbd_group_name}\\Source Files" FILES ${sgbd_file})
                else()
                    source_group(${sgbd_group_name} FILES ${sgbd_file})
                endif(source_file)
            endif(header_file)
            
        endforeach(sgbd_file)
    endif(MSVC)
endmacro(source_group_by_dir)

message(STATUS ${PROJECT_SOURCE_DIR})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(DEPENDS_ROOT ${PROJECT_SOURCE_DIR}/Depends)
set(LOG4CPP_ROOT ${PROJECT_SOURCE_DIR}/log4cpp)
set(ZMQ_ROOT ${DEPENDS_ROOT}/zmq)
set(PYTHON_ROOT ${DEPENDS_ROOT}/Python38)
set(GAMEUTIL_ROOT ${PROJECT_SOURCE_DIR}/GameUtil)
set(PROTO_ROOT ${PROJECT_SOURCE_DIR}/ProtoBuffer)
set(REDIS_ROOT ${DEPENDS_ROOT}/hiredis)
set(DBPLUGIN_ROOT ${PROJECT_SOURCE_DIR}/DBPlugin)
set(MYSQL_ROOT ${DEPENDS_ROOT}/mysql)
set(MONGO_ROOT ${DEPENDS_ROOT}/mongo-c-driver)
set(SCENE_ROOT ${PROJECT_SOURCE_DIR}/SceneServer)
set(HTTP_SERVER_ROOT ${PROJECT_SOURCE_DIR}/HttpServer)
set(GATEWAY_ROOT ${PROJECT_SOURCE_DIR}/Gateway)

set(BOOST_ROOT ../../boost_1_70_0)
#set(PROTOBUFF_ROOT ../../protobuf-3.9.0)
set(PROTOBUFF_ROOT ${DEPENDS_ROOT}/protobuf-3.9.0)
find_package(Boost REQUIRED)

message(STATUS ${Boost_INCLUDE_DIRS})

file(GLOB_RECURSE PROTO_SRC ${PROTO_ROOT}/*.cpp ${PROTO_ROOT}/*.cc ${PROTO_ROOT}/*.h ${PROTO_ROOT}/*.hpp)
file(GLOB_RECURSE COMMON_SRC Common/*.cpp Common/*.h)

#message(STATUS ${PROTO_SRC})

add_subdirectory(Math)
add_subdirectory(Detour)
add_subdirectory(DetourCrowd)
add_subdirectory(log4cpp)
add_subdirectory(GameUtil)
add_subdirectory(DBPlugin)
#add_subdirectory(proto)
add_subdirectory(Gateway)
add_subdirectory(SceneServer)
add_subdirectory(GameServer)
add_subdirectory(HttpServer)

add_subdirectory(TestZmq)
add_subdirectory(TestRedis)
add_subdirectory(Test)


include(install.cmake)


# if (NOT WIN32)
# 	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-pthread")
# 	MESSAGE(STATUS ${CMAKE_CXX_FLAGS})
# endif (NOT WIN32)

# if (MSVC)
#     foreach(flag_var
#         CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
#         CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
#       if(${flag_var} MATCHES "/MD")
#         string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
#       endif(${flag_var} MATCHES "/MD")
#     endforeach(flag_var)
#  endif (MSVC)
