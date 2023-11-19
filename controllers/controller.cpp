#include <crow.h>

class Controller{

    public: 
        static crow::response apiResponse(int code, std::string mensagem){

            return crow::response(code, mensagem);
        }

};