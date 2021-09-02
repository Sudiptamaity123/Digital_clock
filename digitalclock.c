#include<stdio.h>
#include<stdlib.h>
void main(void){
    int h=0,m=0,s=0;
    
    printf("Enter a time Format HH:MM:SS");
    scanf("%d %d %d",&h,&m,&s);
    start:
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("CLS");
                printf("\n\n\n\t\t\t%d::%d::%d",h,m,s);
                if(h<12)
                printf("AM");
                else
                printf("PM");

                printf("\n\n\n\t\tTuesday, 1 september,2021 ");
                for(int i=0;i<3*50000000;i++){
                    i++;
                    i--;

                }
                
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
    
}