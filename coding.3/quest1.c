#include <unistd.h>
#include <stdio.h>

int main()
{
        int x = 10;
        int y = fork();
        x = x + y;
        printf("%d", x);
        printf("%d", y);
}
