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
//Wait() returns the pid of the process that was waited for, if used when there are no children, it returns -1
