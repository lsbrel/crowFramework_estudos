#include <string.h>
#include <crow.h>
#include "./routes/route.cpp"
// #include "./controllers/home_controller.cpp"

int routes(crow::SimpleApp& app){

    Route::get(app, "/user");

    return 0;
}