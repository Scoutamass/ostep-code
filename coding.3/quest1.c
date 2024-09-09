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
//the value carries over from the parent to the child. The value can sometimes get overwritten and have the wrong value
