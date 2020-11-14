#include <stdio.h>
#include <stdlib.h>

void other() {
    printf("Cool! You are in the other function, you are a hacker\n");
    fflush(stdout);
    exit(0);
}

void input() {
    char buffer[5];
    printf("You are in the input function\n");
    fflush(stdout);
    gets(buffer);
}

int main()
{
    printf("%p\n", &other);
    input();
    printf("This is a failure\n");
    return 0;
}
