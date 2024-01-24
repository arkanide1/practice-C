#include <stdio.h>

// enum are constants that help as to understant our code better
// we can also use functions with enum
// we can also use typedef with enum example :

typedef enum button { ON , OFF } Button;
//on 0
//off 1



Button press(Button current);
void print_button(Button current);


    enum Day { Monday , Tuesday , Wednesday , Thursday , Friday =20, Saturday , Sunday};


int main(){



    enum Day yesterday = Monday;//0
    enum Day today = Tuesday;//1
    enum Day tomorrow = Wednesday;//2


    printf("yesterday :  %d\n", yesterday);
    printf("today :  %d\n", today);
    printf("tomorrow :  %d\n", tomorrow);
    printf("friday :  %d\n", Friday);

    Button power = ON;


    print_button(power);
    power = press(power);
    power = press(power);
    print_button(power);
    power = press(power);
    print_button(power);



    return 0;
}

Button press(Button current){
     if (current == ON ) return OFF;
    else return ON;
}
void print_button(Button current){
    if (current == ON )printf("ON\n");
    else printf("OFF\n");
}

