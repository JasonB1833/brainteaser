
#include <cstdlib>
#include <ctime>
#include <experimental/random>
#include "generateNum.h"



/* generates random int between 1-10 currently
   
TODO: add varying difficulty levels? possibly gen more than two nums if needed
*/



int generateNums() {

		std::cout<<"generating numbers..."<<std::endl;

		
		std::srand(static_cast<unsigned int>(std::time(0)));
		int a = std::experimental::randint(1,10);
		int b = std::experimental::randint(1,10);


		return a, b;

}

