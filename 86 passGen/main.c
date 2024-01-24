#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *passGenerator(int len);

int main() {
    int N;
    char *password;

    do {
        printf("Enter the length of the password (min=8): ");
        scanf("%d", &N);
    } while (N < 8);

    srand(time(NULL));
    password = passGenerator(N);
    puts(password);
    free(password);

    return 0;
}



char *passGenerator(int len) {
    char digits[] = "123456789";
    char lows[] = "abcdefghigklmnopqrstuvwxyz";
    char ups[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char syms[] = "!@#$*()-+{}[]";

    char *pass = (char *)malloc((len + 1) * sizeof(char));
    int i, tmp;


    for (i = 0; i < len; i++) {
        tmp = rand() % 4;
        switch (tmp) {
            case 0:
                pass[i] = digits[rand() % strlen(digits)];
                break;
            case 1:
                pass[i] = lows[rand() % strlen(lows)];
                break;
            case 2:
                pass[i] = ups[rand() % strlen(ups)];
                break;
            case 3:
                pass[i] = syms[rand() % strlen(syms)];
                break;
        }
    }
    pass[i] = '\0';

    return pass;
}
