#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>



int main(){
    int h, m, s;

    printf("Set the time: ");
    scanf("%d %d %d", &h, &m, &s);

    if(h<24 && m<60 && s<60){
        while (1)
        {   
            s++;
            if(s>59){
                m++;
                s = 0;
            }if(m>59){
                h++;
                m = 0;
            }if(h>23){
                h = 0;
                m = 0;
                s = 0;
                }
            printf("%02d:%02d:%02d\n", h, m, s);
            sleep(1);
            system("clear");
            
            
        }
        
    }
}