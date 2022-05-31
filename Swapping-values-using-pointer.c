//swaping using pointer

#include<stdio.h>

void swap(int *a, int *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

int main(){
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("%d %d", a, b);
}
 
