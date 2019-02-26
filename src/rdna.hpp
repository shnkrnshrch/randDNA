#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed, string letters, int length)
{
	std::random_device rd;
	std::mt19937 eng1(rd());
	std::uniform_int_distribution<int> dist(0 ,99);
	
	string rand;


	for(int i=0; i<length; i++)
		cout<<dist(eng1)<<" ";
		
	return rand;
	
}
