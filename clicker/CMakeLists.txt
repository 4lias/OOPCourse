cmake_minimum_required(VERSION 3.5.0)
project(Clicker VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Clicker main.cpp controller/gameController.cpp view/gameView.cpp model/gameModel.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
