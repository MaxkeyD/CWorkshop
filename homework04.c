#include<stdio.h>

void main(){
    char name[100000];
    int tel;
    int num; 
    int p1 = 300, p2= 250 , p3 = 210,p4 =150;


    printf("+++++++++++++++++++++++++++++++++\n");
    printf("Program Package Tour\n");
    printf("+++++++++++++++++++++++++++++++++\n");

    printf("Enter name of head group : ");
    scanf("%s",&name);
    //ทำไมเว้นวรรคแล้วโปรแกรม Error
    printf("Enter telephone of head group : ");
    scanf("%d",&tel);
    
    printf("Enter number of group : ");
    scanf("%d",&num);
    
    printf("+++++++++++++++++++++++++++++++++\n");

    if (num<=2)
    {
        printf("Pay for package tour is : %d",p1);    }
        else if (num<=5)
        {printf("Pay for package tour is : %d",p2);    }
        else if (num <=10)

        {printf("Pay for package tour is : %d",p3);    }
        else {
            printf("Pay for package tour is : %d",p4);    }
            
        
        printf("\n+++++++++++++++++++++++++++++++++\n");
        
 
        
        
    

        }