//
// (C) 2021, Lothar Narins
// part1: Part 1 of Homework 1, in which the sum of the first N non-negative
// 		integers is computed.
// usage:
// 	part1 [N]
//
// Based on chrono_timer by E. Wes Bethel
//

#include <iostream>
#include <chrono>
#include <unistd.h>

int main(int ArgCount, char *Args[])
{
	std::cout << "Computing the sum of the first " << PROBLEM_SIZE << " non-negative integers..." << std::endl;
	
	std::chrono::time_point<std::chrono::high_resolution_clock> StartTime = std::chrono::high_resolution_clock::now();
	
	uint64_t Sum = 0;
	for (uint64_t Value = 0; Value < PROBLEM_SIZE; ++Value)
	{
		Sum += Value;
	}
	
	std::chrono::time_point<std::chrono::high_resolution_clock> EndTime = std::chrono::high_resolution_clock::now();
	
	std::chrono::duration<double> Elapsed = EndTime - StartTime;
	
	std::cout << "The sum is : " << Sum << std::endl;
	std::cout << " Elapsed time for ProblemSize " << PROBLEM_SIZE << " is : " << Elapsed.count() << " " << std::endl;
	
	return 0;
}
