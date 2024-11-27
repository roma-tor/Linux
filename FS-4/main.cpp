#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

using namespace std;

void initialize(int argc, char** argv)
{
	if (argc < 2) 
	{
		printf("need more arguments\n");
		exit(1);
	}

	int c = close(0);
	if (c == -1) 
	{
		printf("Can't close stdout\n");
		exit(errno);
	}

	int f = open(argv[1], O_RDONLY);
	if (f == -1) 
	{
		printf("opening wrong\n");
		exit(errno);
	}
}

int main(int argc, char** argv)
{
	initialize(argc, argv);

	string input;
	cin >> input;

	string reversed(input.rbegin(), input.rend());
	
	cout << reversed << endl;
	return 0;
}

