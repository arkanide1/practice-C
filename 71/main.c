#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char sem[5];
    char id[10];
    int age;
    int grades[5];
} Student;

typedef struct{
    int x;
    int y;
}Point;


typedef struct{
    int *array;
}Data;

void printStd(Student s);
void printPts(Point points[], int n);

int main()
{

    Student hafusa;
    hafusa.age= 22;
    strcpy(hafusa.sem, "S3");
    printStd(hafusa);
    Point p1={1,2} ,p2={.x=5,.y=4},points[10];

    for (int i=0;i<10;i++){
        points[i].x=i+1;
        points[i].y=10-i;
    }
    printPts(points , 10);


    Data x;
    Data y;

    x.array = malloc(sizeof(int)*5);

    x.array[0]=1;
    x.array[1]=2;
    x.array[2]=3;
    x.array[3]=4;
    x.array[4]=5;

    y.array[0]=9;
    y.array[1]=9;
    y.array[2]=9;
    y.array[3]=9;
    y.array[4]=9;

    return 0;
}

void printStd(Student s){
    printf ("%d \n" , s.age);
    puts(s.sem);

}
void printPts(Point points[], int n){
    for (int i = 0 ;i <n;i++){
        printf("points[%d]={ %d , %d }\n",i,points[i].x, points[i].y);
    }
}
