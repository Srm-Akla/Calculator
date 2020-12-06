#include <iostream>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

// main() is where program execution begins.
int main() {
    int a,b;
    std::string func;
    
    std::cout << "Enter function: add, sub, multi, div - ";
    getline(std::cin, func);
    std::cout << "Enter num1 - "; // prints Hello World
    std::cin >> a;
    std::cout << "Enter num2 - ";
    std::cin >> b;

    if(func=="add"){
	std::cout << add(a,b) << std::endl;
    }
    else if(func=="sub"){
	std::cout << sub(a,b) << std::endl;
    }
    else{ std::cout << "Not working"; } 

    return 0;
}
