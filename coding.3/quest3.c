#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int x = fork();
	if(x == 0)
	{
		printf("hello");
		return 0;
	}
	wait(NULL);
	printf("goodbye");
}
