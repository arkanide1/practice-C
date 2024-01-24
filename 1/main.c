#include <stdio.h>

int main() {
    int i;
    int T[10],m1,m2;
    for (i=0;i<10;i++){
        printf("T[%d]:",i);
        scanf("%d", &T[i]);
    }
    m1=T[0];
    m2=T[0];
    for(i=0;i<5;i++){
        if (m1 <= T[i] ){
            m1=T[i];
        }
        if ( m2<=T[i] && T[i]<m1){
            m2=T[i];
        }
    }


        printf("max1 =%d max2 = %d ",m1,m2);

    return 0;
}
