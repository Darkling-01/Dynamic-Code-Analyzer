#include <iostream>


void choices(){
    int choices{0};
    bool result;

    do{
        std::cout << "Dynamic Code Analyzer Project" << std::endl;
        std::cout << "-----------------------------" << std::endl;

        std::cout << "Pick a test:" << std::endl;
        std::cout << "1 - Analyzer" << std::endl;
        std::cout << "2 - Matrices" << std::endl;
        std::cin >> choices;

        if(choices == 1 || choices == 2)
             result = false;
        else
            result = true;

    }while(result == true);

    switch (choices) {
        case 1:
            // code here
            break;
        case 2:
            // code here
            break;
        default:
            break;
    }
}

int main() {
    choices();

    return 0;
}
