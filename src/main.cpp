#include <iostream>
#include <cmath>

class Trigonometry{
    
    cos();
    sin();
    tan();

};




int addition(int a, int b){
    return a+b;
}

int subtraction(int a, int b){
    return a-b;
}

void divison(int a,int b){

   int quotient = a/b;
   int remainder = {};

   if (a%b != 0)
   {
       remainder = a%b;
   }
   
   std::cout<<quotient<< std::endl;
   std::cout<<remainder<< std::endl;
}

float multiplication(float a, float b){


   float product = a*b;
   
   return product;
}



// main() is where program execution begins.
int main(){
    int a,b;
    std::string func;
    
    std::cout << "Enter function: add, sub, multi, Div - ";
    getline(std::cin, func);
    std::cout << "Enter num1 - "; // prints Hello World
    std::cin >> a;
    std::cout << "Enter num2 - ";
    std::cin >> b;

    if(func=="addition"){
	std::cout << addition(a,b) << std::endl;
    }
    else if(func=="subtraction"){
	std::cout << subtraction(a,b) << std::endl;
    }
    else if (func=="divison"){
      divison(a,b);
    }
    else if (func == "multiplication"){

       std::cout<<multiplication(a,b);
    }
    else{ std::cout << "Not working"; } 

    return 0;
}
