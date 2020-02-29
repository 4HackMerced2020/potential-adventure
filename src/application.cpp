#include <string>
#include <fstream>
#include <iostream>
#include <server.h>

using namespace ucm;

int main(int argc, char** argv){

    Server server(argc, argv);

    server.renderHTML("/", "index.html");

    server.route("/auth", [&](const request& req, response& res){
        if (req.has_params({"username", "password"})){

        std::string username = req.url_params.get("username");
        std::string password = req.url_params.get("password");

        if (username == "user1" && password == "abc123") {
            res.sendHTML("Success");
        }
        else {
            res.sendHTML("Failure");
        }
    }
        else{
            res.sendError400();
        }
    });

    server.run();
}
