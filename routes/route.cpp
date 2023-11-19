#include <crow.h>
#include <iostream>
#include <strings.h>
#include "../controllers/controller.cpp"

class Route{
    private:

    public:
        static void get(crow::SimpleApp& api, std::string url){
            
            api.route_dynamic(std::move(url))([](
                const crow::request& request
            ){
                // crow::json::wvalue data({request.body});
                return crow::response(request.body);
            });

        }
};

