# csc746hw1

To build, start in the directory that contains the .cpp files and the CMakeLists.txt file and enter the following commands:

	mkdir build_O3
	cd build_O3
	cmake ../
	make
	cd ..
	mkdir build_O0
	cd build_O0
	cmake ../ -DCMAKE_CXX_FLAGS_RELEASE="-O0"
	make
	cd ..

To run, enter the desired build directory and enter for instance the command

	./part1 100000

where the first argument 100000 can be replaced with any positive integer and represents the problem size. The programs part2 and part3 are run in a similar fashion. Note that part3 takes an optional second command line argument giving a seed for random number generation. If not given, the program will seed the generator with the current time.

For part1, there are also build targets with hardcoded problem sizes. These don't take command line arguments, so they are simply run with the commands

	./part1_100K
	./part1_500K
	./part1_1M
	./part1_5M
	./part1_10M
	./part1_50M
	./part1_100M
	./part1_500M
