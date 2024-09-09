#include <stdio.h>
#include <unistd.h>

int main()
{
	int x = fork();
	if(x == 0)
	{
		char *args[] = {"bin/ls", NULL};
		execvp("bin/ls", args);
	}
}
//Because there are many situations that could call for slightly different ways to execute a program
