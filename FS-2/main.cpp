#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFF_SIZE 4096

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("need more arguments\n");
		exit(1);
	}

	int fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		printf("error opening file.\n");
		exit(errno);
	}

	int fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fd2 == -1) 
	{
		printf("error opening file.\n");
		exit(errno);
	}

	char* buff = (char*)malloc(BUFF_SIZE);
	long allBytes = 0;
	long readBytes = 0;
	while (true)
	{
		readBytes = read(fd1, buff, BUFF_SIZE);

		if (readBytes == -1) 
		{
			exit(errno);
		}

		if (readBytes == 0)
			break;

		allBytes += readBytes;

		long writeBytes = write(fd2, buff, (size_t)readBytes);

		if (writeBytes == -1) 
		{
			printf("no writen bytes\n");
			exit(errno);
		}

	}

	close(fd1);
	close(fd2);
	free(buff);
	printf("Written bytes: %ld\n", allBytes);

	return 0;
}
