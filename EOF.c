// This program simply executes the program untill it is end of the file

#include<stdio.h>


int main(){

    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

}
