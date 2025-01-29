cmake_minimum_required(VERSION 3.25)

project(lab)

add_subdirectory(src)
if (EXISTS report)
	add_subdirectory(report)
endif()
