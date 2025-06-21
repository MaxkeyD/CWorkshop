#include <stdio.h>


void main (){
    printf("++++++++++++++++++++++++++++++\n ");
    printf("   Program Number   \n");
    printf("++++++++++++++++++++++++++++++\n ");
    
    int num ,value,max,min,sum=0; 
    float average;
    printf("Enter number total : ");
    scanf("%d",&num);
    printf("\n++++++++++++++++++++++++++++++\n");
    
    printf("Number 1 :  ");
    scanf("%d", &value);
    max = min = value;
    sum += value;

    
    for (int i=2 ; i<=num ; i++){
        printf("Number %d :  ",i);
        scanf("%d",&value);
       
        
        if (value > max) {
        max = value;
    }
    if (value < min) {
        min = value;
    }
    sum += value;
   
    }
     average = sum/num;
    

    printf("++++++++++++++++++++++++++++++\n");
    printf("Minimum number is : %d\n",min);
    printf("Maximum number is : %d\n",max);
    printf("Sum number is : %d\n",sum);
    printf("Average number is : %f\n",average);
}