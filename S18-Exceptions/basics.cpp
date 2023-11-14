

#include <iostream>
#include <string>

int somefunction(int val) {
	if (val == 0) throw 0; // Though normal throw an object instead of primative
	if (val == 1) throw std::string{"hello"}; // Though normal throw an object instead of primative
	return val;
}


int main () {

    // Example of basic throw/catch code
    int total {2};
    try {
        if (total == 0) {
            throw 3;
        }
        std::cout << "this wont print if total == 0" << std::endl;
    } 
    catch(int &ex) {
        std::cout << "caught it" << std::endl;
    }
    std::cout << "got to the end" << std::endl;


    // Example of catching a exception thrown by a function
    try {
        somefunction(1);
    }
    catch(int &ex) {
        std::cout << "somefunction did not work" << std::endl;
    }
    catch(std::string &ex) {
        std::cout << "Caught exception " << ex << std::endl;
    }


    return 0;
}


