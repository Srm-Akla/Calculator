#include <iostream>
#include <cmath>
#include <cstdlib>

float addition(float *a, float *b){
    return (*a)+(*b);
}
float subtraction(float *a, float *b){
    return (*a)-(*b);
}
float multiplication(float *a, float *b){
    return (*a)*(*b);
}
float division(float *a, float *b){
    return (*a)/(*b);
}

int main(int argc, char* argv[]){
    float a{0}, b{0};
    char symbol;

    while(true){
        std::cout << "Enter function: (3 + 2) -> ";
        std::cin >> a >> symbol >> b;

        switch (symbol) {
            case '+':
                std::cout << addition(&a,&b) << '\n';
                break;
            case '-':
                std::cout << subtraction(&a,&b) << '\n';
                break;
            case '*':
                std::cout << multiplication(&a,&b) << '\n';
                break;
            case '/':
                std::cout << division(&a,&b) << '\n';
                break;
            default:
                std::cout << "Cant find symbol" << "\n";
                std::cout << "Example eqaution:" << "\n";
                std::cout << "3+2, 2-6, 10*4, 134/23" << "\n";
                break;
        }
    }

    return 0;
}
