#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double stdev(double a[], int n);

int main()
{
    double a[]={9.2,1.5,6.7,8.2,5.5,7.1};
    double Dev;
    int len= sizeof(a)/sizeof(a[0]);
    Dev=stdev(a, 6);

    printf("%lf", Dev);

    return 0;
}

double stdev(double a[], int n){
    int mean=0,total=0;
    for (int i=0;i<n;i++)total+=a[i];
    mean=total/n;
    total=0;
    for (int i =0;i<n;i++){
        total += pow(a[i]-mean,2);
    }
    return sqrt(total/n);

}
