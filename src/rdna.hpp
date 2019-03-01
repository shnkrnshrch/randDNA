#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed, string letters, int len)
{
	
	mt19937 eng1(seed);
	
	
	string rand = "";
	
	int min(0);
	int max = letters.length() -1;
	
	uniform_int_distribution<> uniform(min, max);
	

	for(int i = 0; i < len; i++)
		rand = rand + letters.at(uniform(eng1));
		
	if(letters == "")
	{
		rand= "";
	}
		
	return rand;
	
}
