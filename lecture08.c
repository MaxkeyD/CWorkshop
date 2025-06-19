//output statement คือ คำสั่งที่ใช้ในการแสดงผล
//printf() -> stido.h
//puts() -> stido.h  แสดงข้อความ
//putchar() -> stido.h แสดงตัวอักษรตัวเดียว

#include <stdio.h>

void main(){
    int score1 = 50, score2 = 70;
    char fname[] = "Sombat";
    char flag = 'Y';
 
    printf("ABC....      XYZ 100+200\n\n %d", 555);
    puts("ABC....      XYZ 100+200\n\n");
    printf("\n\nValue = %d", 100+200);
    printf("\n\nHello..... %s  %d  %d", "Sombat", 555,  888);
    putchar('X');
    puts("Hello....");
    printf("\n-------------------------------\n");
    printf("Score 1 = %d\n", score1);
    printf("Score 2 = %d\n", score2);
    printf("First name = %s\n", fname);
    puts(fname);
    putchar(flag);
    printf("Flag is %c\n", flag);
   
}

