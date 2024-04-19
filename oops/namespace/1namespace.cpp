#include <iostream>

// Define the first version of show() in the global namespace

    void show() {
        std::cout << "This is the show() method in GlobalNamespace." << std::endl;
    }


// Define a different version of show() in a different namespace
namespace CustomNamespace {
    void show() {
        std::cout << "This is the show() method in CustomNamespace." << std::endl;
    }
}

int main() {
    // Call the show() method from GlobalNamespace
    ::show();

    // Call the show() method from CustomNamespace
    CustomNamespace::show();

    return 0;
}
