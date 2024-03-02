#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>


int main(int argc , char *argv[]){
    if (mkfifo("myfifo1", 0777) ==-1){
        if ( errno != EEXIST){
            printf("could not create fifo file\n");
            return 1 ;
        }
    }
    printf("opening...\n");
    int fd  = open("myfifo1" , O_WRONLY);// the fifo blocks on writting until an other process opens on reading
    //int fd  = open("myfifo1" , O_RDWR); // for read and write

    printf("opened\n");

    int x = 'Z';
    printf("%d" , x);
    if (write(fd ,&x, sizeof(int) ) == -1){
        return 2;
    }
    printf("written\n");
    close(fd);
    printf("closed\n");
    
    
    return 0;
}