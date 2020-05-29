#include <iostream>

class dog {
public:
    std::string name;
    dog(std::string name) : name(name) {}
};

int main() {

    dog fido("fido");
    dog& fido_ref = fido;
    dog* fido_ptr = &fido; // address of operator

    std::cout << fido.name << std::endl;
    std::cout << fido_ref.name << std::endl;
    std::cout << fido_ptr->name << std::endl;
    
    return 0;
}
