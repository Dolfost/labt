cmake_minimum_required(VERSION 3.25)

project(lab)

if (EXISTS "${CMAKE_CURRENT_LIST_DIR}/src/CMakeLists.txt")
add_subdirectory(src)
endif()
if (IS_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/report")
	add_subdirectory(report)
endif()

add_custom_target(degit
	${CMAKE_COMMAND} -E rm -rf 
		${CMAKE_CURRENT_LIST_DIR}/.git 
		${CMAKE_CURRENT_LIST_DIR}/report/.git
)
