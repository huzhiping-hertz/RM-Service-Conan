set(APP_NAME "WebApi")
file(GLOB_RECURSE cpp_files "*.cpp")
ADD_EXECUTABLE(${APP_NAME} ${cpp_files})
target_link_libraries(${APP_NAME} Poco::Poco Poco::Foundation Poco::Util  gflags::gflags nlohmann_json::nlohmann_json crow::crow CommonUtility DomainModel)
