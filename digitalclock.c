#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main(void){
    //j represent date, k represent index of month,i represent index of bar;
    int h=0,m=0,s=0,i=3,j=8,k=8,year=2021;
char *day[7]={"Sunday","Monday","Tuesday", "Wednesday","Thursday","Friday","Saturday"};
char *month[12]={"Januay","February","March","April","May","June","July","August","September","october","November","December"};
    printf("Enter a time Format HH:MM:SS:- ");
    scanf("%d %d %d",&h,&m,&s);
    while(1){
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("CLS");
                printf("\t<<<<<<<<<<::Welcome to Digital Clock::>>>>>>>>>>");
                printf("\n\n\n\t\t\t%d::%d::%d",h,m,s);
                if(h<12)
                printf("AM");
                else
                printf("PM");

                printf("\n\n\n\t\t%s, %d %s,%d ",day[i],j,month[k],year);

                if(i>6)
                    i=0;

                if(k>11){
                    k=0;
                    ++year;}
                    Beep(100,1000);
                sleep(1);


            }
            s=0;
        }
        m=0;
    }
    if(h==24){
            if(j>29)
            j=1;
            else
            j++;
            k++;
        i++;}
    h=0;


    }

}
