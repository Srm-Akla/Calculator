#include <iostream>
#include <cmath>
#include <cstdlib>

int add_sub;
int multi_divi = 1;

int addition(int a){
    add_sub += a;
    return add_sub;
}

int subtraction(int a){
    add_sub -= a ;
    return add_sub;
}

int multiplication(int a){
    multi_divi *= a;
   return multi_divi;
}

int divison(int a){

    multi_divi = a/multi_divi; 
   /*int remainder = {};

   if (fmod(a,b) != 0)
   {
       remainder = fmod(a,b);
   }*/
   
   return multi_divi;
}



// main() is where program execution begins.
int main(int argc, char* argv[]){
    int final_result = 0;

    std::string func;
    std::cout << "Enter function: +, -, *, /  --> ";
    getline(std::cin, func);

    for(int i=1;i < argc; i++){
	//printf("%d ", std::atoi(argv[i]));

	if(func=="+"){
	    final_result = addition(std::atoi(argv[i])); 
	    printf("%d ", final_result);
	}
	else if(func=="-"){
	    final_result = subtraction(std::atoi(argv[i])); 
	    printf("%d ", final_result);
	}
	else if (func=="*"){
	    final_result = multiplication(std::atoi(argv[i])); 
	    //printf("%d ", final_result);
	}
	else if (func == "/"){
	    final_result = divison(std::atoi(argv[i])); 
	    //printf("%d ", final_result);
	}
	else{ std::cout << "Not working"; } 

    }

    //printf("Answer: %d", final_result);

    return 0;
}
