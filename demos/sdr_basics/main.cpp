
#include <iostream>
#include <sys/time.h> // for gettimeofday
#include "../../src/sdr.h"

using std::cout;
using std::endl;


// function for timing computations
double seconds()
{
	struct timeval tp;
	gettimeofday(&tp, NULL);
	return ((double)tp.tv_sec + (double)tp.tv_usec * 1e-6);
}

int main(int argc, char *argv[])
{
    SDR a;

	return 0;
}

