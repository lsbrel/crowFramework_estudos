#include <crow.h>
// #include "controllers/home_controller.cpp"
#include "./routes.cpp"

int main(){

    // instanciando o a api
    crow::SimpleApp app;

    // Chamando o arquivo com as rotas
    routes(app);

    
    app.port(18080).run();

    return 0;
}