#include<stdio.h>
#include<stdlib.h>

int main(){
    int month,date;
    scanf("%d %d",&month,&date);
    if(month==1 && date<=20)
        printf("Capricorn\n");
    else if(month==1 && date>20)
        printf("Aquarius\n");
    else if(month==2 && date<=18)
        printf("Aquarius\n");
    else if(month==2 && date>18)
        printf("Pisces\n");
    else if(month==3 && date<=20)
        printf("Pisces\n");
    else if(month==3 && date>20)
        printf("Aries\n");
    else if(month==4 && date<=20)
        printf("Aries\n");
    else if(month==4 && date>20)
        printf("Taurus\n");
    else if(month==5 && date<=21)
        printf("Taurus\n");
    else if(month==5 && date>21)
        printf("Gemini\n");
    else if(month==6 && date<=21)
        printf("Gemini\n");
    else if(month==6 && date>21)
        printf("Cancer\n");
    else if(month==7 && date<=22)
        printf("Cancer\n");
    else if(month==7 && date>22)
        printf("Leo\n");
    else if(month==8 && date<=23)
        printf("Leo\n");
    else if(month==8 && date>23)
        printf("Virgo\n");
    else if(month==9 && date<=23)
        printf("Virgo\n");
    else if(month==9 && date>23)
        printf("Libra\n");
    else if(month==10 && date<=23)
        printf("Libra\n");
    else if(month==10 && date>23)
        printf("Scorpio\n");
    else if(month==11 && date<=22)
        printf("Scorpio\n");
    else if(month==11 && date>22)
        printf("Sagittarius\n");
    else if(month==12 && date<=21)
        printf("Sagittarius\n");
    else if(month==12 && date>21)
        printf("Capricorn\n");
}
