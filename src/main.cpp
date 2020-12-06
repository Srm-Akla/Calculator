#include <iostream>


void Div(int a,int b){

   int quotient = a/b;
   int remainder = {};

   if (a%b != 0)
   {
       remainder = a%b;
   }
   
   std::cout<<quotient<< std::endl;
   std::cout<<remainder<< std::endl;
}

float multi(float a, float b){


   float product = a*b;
   
   return product;
}


int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
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

    if(func=="add"){
	std::cout << add(a,b) << std::endl;
    }
    else if(func=="sub"){
	std::cout << sub(a,b) << std::endl;
    }
    else if (func=="Div"){
      Div(a,b);
    }
    else if (func == "multi"){

       std::cout<<multi(a,b);
    }
    else{ std::cout << "Not working"; } 

    return 0;
}
