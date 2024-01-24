#include <stdio.h>
#include <stdlib.h>

int main()
{
    //system fuction allows c programs to run shell commands
    // defined in stdlib

    system("ls");// list files and dirs

    sytem("echo 'hello world' > test.txt ");
    system("cat test.txt");



    return 0;
}
