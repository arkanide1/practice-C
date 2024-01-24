#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Nmax 10

typedef struct s_fat_bot{
    char v[Nmax];
}t_fat_boy;

void find_42(t_fat_boy *fat_boy){
    int i;
    i=0;
    while(1){
        if(fat_boy->v[i]==42){
            printf("position is : %d\n", i);
            break;
        }
        i++;
    }
}

int main()
{
    t_fat_boy fat_boy;
    srand(time(NULL));


    int *p;
    char *q;
    float *k;
    double **a;
    short b;
    float *tab[10];
    printf("%d %d %d %d %d %d\n", sizeof(p), sizeof(q), sizeof(k),sizeof(tab), sizeof(a), sizeof(&b));

    fat_boy.v[rand()%Nmax] =42;

    find_42(&fat_boy);

    for(int i = 0;i<Nmax;i++){
        printf("boi[%d] = %c\n",i, fat_boy.v[i]);
    }


    return 0;
}
