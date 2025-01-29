set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

find_package(Qt6 REQUIRED COMPONENTS 
	Core Widgets Gui PrintSupport
)

include(FetchContent)
FetchContent_Declare(
    calgo QUIET
    GIT_REPOSITORY https://github.com/Dolfost/calgo.git
    GIT_TAG 1a1c76fc3e783b2238eafab8caac7043b9399d7b
)
FetchContent_MakeAvailable(calgo)
include(FetchContent)
FetchContent_Declare(
    qcustomplot QUIET
    GIT_REPOSITORY https://github.com/legerch/QCustomPlot-library
    GIT_TAG 2.1.1.1
)
FetchContent_MakeAvailable(qcustomplot)
include(FetchContent)
FetchContent_Declare(
    exprtk QUIET
    GIT_REPOSITORY https://github.com/ArashPartow/exprtk
    GIT_TAG 0.0.3-cmake
)
FetchContent_MakeAvailable(exprtk)

qt_standard_project_setup()

qt_add_executable(lab
	main.cpp
	mainWindow.cpp
)

target_link_libraries(lab PRIVATE
	Qt6::Core Qt6::Widgets Qt6::Gui Qt6::PrintSupport
	ca::numeric ca::interpolation
	exprtk::exprtk qcustomplot
)
