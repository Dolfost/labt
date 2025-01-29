cmake_minimum_required(VERSION 3.25)

project(lab)

add_subdirectory(src)
if (IS_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/report")
	add_subdirectory(report)
endif()
