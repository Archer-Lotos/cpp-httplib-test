#include "httplib.h"

int main(void) {
    using namespace httplib;

    Server svr;

    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Test!", "text/plain");
    });

    svr.listen("0.0.0.0", 29080);
}
