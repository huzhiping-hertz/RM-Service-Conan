set(APP_NAME "UnitTest")
file(GLOB cpp_files "*.cpp")
add_executable(${APP_NAME} ${cpp_files} )
target_link_libraries(${APP_NAME}  CommonUtility DomainModel catch2::catch2_with_main nlohmann_json::nlohmann_json)
