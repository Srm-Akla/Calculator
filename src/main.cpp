#include <iostream>


int Div(int a,int b){

   a = {};
   b = {};
   

   std::cout<< "Enter Dividend";
   std::cin >> a;

   std::cout<< "Enter Divisor";
   std::cin >> b;

   float quotient = a/b;
   std::cout<< "Your answer is:";
   std::cout<< quotient;

   if (a%b != 0)
   {
      float remainder = a%b;
      std::cout << "With a reminder of: ";
      std::cout << remainder;
   }
   
   return quotient;
}

float mult(float a, float b){

   a={};
   b={};
   std::cout<< "Enter Factor";
   std::cin >> a;

   std::cout<< "Enter Factor";
   std::cin >> b;

   float product = a*b;
   std::cout<< product;
   
   return product;
}

// main() is where program execution begins.
int main() {
   
   Div(3,4);
   mult(22,32);
   return 0;
}
