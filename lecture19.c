//Control Statement (Loop) คือ การทำงานเดิมๆ ซ้ำ 
//มีคำสั่งที่ใช้อยู่ 3 คำสั่ง คือ while ,do while, for 
//โปรแกรมแสดงข้อความ Hello..... ทางหน้าจอ 5 ข้อความ

#include <stdio.h>
void main(){
    //printf("Hello ......\n");
    //printf("Hello ......\n");
    //printf("Hello ......\n");
    //printf("Hello ......\n");
    //printf("Hello ......\n");
    int x ;
    x = 1;
    while (x <= 5){
        printf("Hello ......\n");
        x = x + 1;
    }
    
    int y;
    y = 1;
    do{
        printf("Hello ......\n");
        y = y + 1;
    }while (y <= 5);

    printf("==============================\n");
    int i ;

    for ( i = 0; i< 5; i++)
    {
        printf("Hello ......\n");
        /* code */
    }
    


}