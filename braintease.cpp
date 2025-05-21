#include <iostream>
#include <cstdlib>
#include <ctime>
#include <experimental/random>


// function prototypes
// TODO: add template function for simple arithmetic brainteasers
int add();

int sub();

int multi();

int div();




int decHandler(int a){

		if (a>4) return 1;

		switch (a){ 
				case 1:
						add();
						break;
				case 2:
						sub();
						break;
				case 3: 
						multi();
						break;
				case 4:
						div();
						break;

				}

		return 0;
}

int add(){

		int result;
		int userIn;

		std::srand(static_cast<unsigned int>(std::time(0)));
		int a = std::experimental::randint(1,10);
		int b = std::experimental::randint(1,10);

		result = a+b;
	
		std::cout<<a << " + " <<b<< " =?"<<std::endl;
		std::cin >>userIn;
		
		if (result == userIn) std::cout<<"Correct!"<<std::endl;
		else std::cout<<"incorrect :("<<std::endl;
		return 0;
}


int sub(){
		
		int result;
		int userIn;

		std::srand(static_cast<unsigned int>(std::time(0)));
		int a = std::experimental::randint(1,10);
		int b = std::experimental::randint(1,10);
		
		result = a-b;

		std::cout<<a << " - " <<b<< " =?"<<std::endl;
		std::cin >>userIn;
		
		if (result == userIn) std::cout<<"Correct!"<<std::endl;
		else std::cout<<"incorrect :("<<std::endl;

		return 0;
}

int multi(){

	
		int result;
		int userIn;

		std::srand(static_cast<unsigned int>(std::time(0)));
		int a = std::experimental::randint(1,10);
		int b = std::experimental::randint(1,10);
		
		result = a*b;

		std::cout<<a << " * " <<b<< " =?"<<std::endl;
		std::cin >>userIn;
		
		if (result == userIn) std::cout<<"Correct!"<<std::endl;
		else std::cout<<"incorrect :("<<std::endl;

		return 0;
}

int div(){ //TODO: use floats

		int result;
		int userIn;

		std::srand(static_cast<unsigned int>(std::time(0)));
		int a = std::experimental::randint(1,10);
		int b = std::experimental::randint(1,10);
		
		result = a/b;

		std::cout<<a << " / " <<b<< " =?"<<std::endl;
		std::cin >>userIn;
		
		if (result == userIn) std::cout<<"Correct!"<<std::endl;
		else std::cout<<"incorrect :("<<std::endl;

		return 0;
}

int main(){


		int in1;

		std::cout<<"welcome to my math brainteaser"<<std::endl;

		std::cout<<"\nwhat would you like to work on today?: \n"<< "1.add  2.sub  3.multi  4.divide"<<std::endl;

		std::cin >>in1;

		decHandler(in1);
		

		return 0;
}
