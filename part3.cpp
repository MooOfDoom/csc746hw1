//
// (C) 2021, Lothar Narins
// part2: Part 3 of Homework 1, in which the sum of N values from an array is
// 		computed in a random order.
// usage:
// 	part3 [N]
// 	part3 [N] [Seed]
//
// Based on chrono_timer by E. Wes Bethel
//

#include <iostream>
#include <chrono>
#include <unistd.h>
#include <stdlib.h>

int main(int ArgCount, char *Args[])
{
	uint64_t ProblemSize = 1000; // Default problem size
	
	if (ArgCount > 1) // If user entered a value after the prog name, parse it
	{
		ProblemSize = std::atoi(Args[1]);
	}
	
	if (ArgCount > 2) // If the user entered a second argument, use it to seed the random number generator
	{
		srand48(std::atoi(Args[2]));
	}
	else // Otherwise, use the clock to seed the RNG
	{
		srand48(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	}
	
	std::cout << "Computing the sum of an array of " << ProblemSize << " non-negative integers..." << std::endl;
	
	// Initialize the array
	uint64_t *Array = new uint64_t[ProblemSize];
	for (uint64_t Index = 0; Index < ProblemSize; ++Index)
	{
		Array[Index] = lrand48() % ProblemSize;
	}
	
	std::chrono::time_point<std::chrono::high_resolution_clock> StartTime = std::chrono::high_resolution_clock::now();
	
	uint64_t Sum = 0;
	uint64_t Index = 0;
	for (uint64_t Count = 0; Count < ProblemSize; ++Count)
	{
		Sum += Array[Index];
		Index = Array[Index];
	}
	
	std::chrono::time_point<std::chrono::high_resolution_clock> EndTime = std::chrono::high_resolution_clock::now();
	
	std::chrono::duration<double> Elapsed = EndTime - StartTime;
	
	std::cout << "The sum is : " << Sum << std::endl;
	std::cout << " Elapsed time for ProblemSize " << ProblemSize << " is : " << Elapsed.count() << " " << std::endl;
	
	delete[] Array;
	
	return 0;
}
