#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int x = fork();
	int y = wait(NULL);
	printf(";%d:%d;", x, y);
}
