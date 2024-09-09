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
