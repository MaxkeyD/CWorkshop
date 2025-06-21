#include<stdio.h>

void main(){
int num ; 
float unit ;
float u1 =5, u2 =4.5,u3=4;

    printf("---------------------------------\n");
    printf("Program Pay Electric\n");

    printf("---------------------------------\n");
    printf("Enter home number : ");
    scanf("%d",&num);
    printf("Enter unit of electric : ");
    scanf("%f",&unit);
    printf("---------------------------------\n");
    if(unit <=20){
        printf("Pay for electic is : %.2f",u1);
    }else if (unit<50){
        printf("Pay for electic is : %.2f",u2);
    }
        else{ printf("Pay for electic is : %.2f",u3);
        }
        printf("\n---------------------------------\n");
    }
    
