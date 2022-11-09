#include<stdio.h>
#include<stdlib.h>

long int f = 1; // Global Factotial Variable

void fact(int n){ // Factorial Function
    f *= n;
    n--;
    if (n>0)
        fact(n);
    else if (n==0)
        printf("\n%ld", f);
    
}

int main(){
    fact(5);
    return 0;
}
