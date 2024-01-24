#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    FILE *fh_output;

    //fh_output=fopen("io.txt" , "a");
    // w write and erase ;; a append to  existing content
    fh_output=fopen("io.txt" , "w");



    int n=3;
    //fputs("hello world\n" , fh_output);
    //fprintf(fh_output, "number %d" ,n );

    //for(int i =0;i<10;i++){
    //   fprintf(fh_output, "%d\n" ,i );
    //}
    int input;
    while(true){
        printf("enter a number :");
        scanf("%d", &input);
        if (input == -1) break;
        else fprintf(fh_output,"%d\n", input);
    }


    fclose(fh_output);

    FILE *fh_input;
    fh_input=fopen("io.txt" , "r");

    int finput=0;
    int lines=0;
    int numbers[100];

    while(fscanf(fh_input , "%d" , &finput ) != EOF)
    {
        numbers[lines]= finput;
        lines++;
        printf("line %d number : %d\n" ,lines, finput);
    }
    int total=0;
    for(int i =0;i<lines;i++)
        total += numbers[i];
    printf("the average is : %d ", total/lines);


    fclose(fh_input);

    fh_input= fopen("in.txt", "r");

    char buffer[256];

    fgets(buffer, 256 , fh_input);
    printf("\nbuffer:%s\n", buffer);

    fclose(fh_input);









    return 0;
}
