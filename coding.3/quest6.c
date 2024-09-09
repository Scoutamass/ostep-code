#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int x = fork();
	int y;
	if(x > 0) waitpid(x, &y, WNOHANG);
	printf("%d", x);
}
//there is seemingly no reason to have waitpid, since the same thing can be accomplished with wait()
