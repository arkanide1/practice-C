#include <stdlib.h>
#include <unistd.h>
int main()
{

    char *args[] = { "ps", NULL };

    if (execv("/bin/ps", args) == -1) {
        perror("execv");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}