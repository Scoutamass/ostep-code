#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int f = open("file.txt", O_CREAT);
	write(f, "hi", strlen("hi"));
	close(f);
}
