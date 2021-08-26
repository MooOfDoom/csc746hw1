//
// (C) 2021, Lothar Narins
// part2: Part 2 of Homework 1, in which the sum of N values in an array is
// 		computed.
// usage:
// 	part2 [N]
//
// Based on chrono_timer by E. Wes Bethel
//

#include <iostream>
#include <chrono>
#include <unistd.h>

int main(int ArgCount, char *Args[])
{
	uint64_t ProblemSize = 1000; // Default problem size
	
	if (ArgCount > 1) // If user entered a value after the prog name, parse it
	{
		ProblemSize = std::atoi(Args[1]);
	}
	
	std::cout << "Computing the sum of an array of " << ProblemSize << " non-negative integers..." << std::endl;
	
	// Initialize the array
	uint64_t *Array = new uint64_t[ProblemSize];
	for (uint64_t Index = 0; Index < ProblemSize; ++Index)
	{
		Array[Index] = Index;
	}
	
	std::chrono::time_point<std::chrono::high_resolution_clock> StartTime = std::chrono::high_resolution_clock::now();
	
	uint64_t Sum = 0;
	for (uint64_t Index = 0; Index < ProblemSize; ++Index)
	{
		Sum += Array[Index];
	}
	
	std::chrono::time_point<std::chrono::high_resolution_clock> EndTime = std::chrono::high_resolution_clock::now();
	
	std::chrono::duration<double> Elapsed = EndTime - StartTime;
	
	std::cout << "The sum is : " << Sum << std::endl;
	std::cout << " Elapsed time for ProblemSize " << ProblemSize << " is : " << Elapsed.count() << " " << std::endl;
	
	delete[] Array;
	
	return 0;
}
