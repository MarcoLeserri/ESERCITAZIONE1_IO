#include <iostream>
#include <fstream>
#include "funzione.hpp"
int main()
{
    std::ifstream fstr; //("data.txt");
	fstr.open("data.txt");
	if(fstr.fail())
	{
	    std::cerr <<"File not found" << std::endl;
		return 2;
	}
	std::string tmp;
	std::getline(fstr, tmp);
	
	std::cout <<tmp <<std::endl;
	
	unsigned int sum = 0;
	unsigned int val;
	unsigned int n = 0;
	while(fstr>> val)
	{ 
        sum += val * val;
		n++;
	}
	unsigned int S = sum_values(n);
	std::cout << "S="<< S << std::endl;
	std::cout << "sum ="<< sum <<std::endl;
	return 0; 
}

