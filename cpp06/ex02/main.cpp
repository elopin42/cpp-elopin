#include "identify.hpp"

int main() {
    srand(time(0));

    Base* obj = generate();
    identify(obj);
    identify(*obj);

    delete obj;
    return 0;
}
