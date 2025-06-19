//ตัวแปร กับ format code 
#include <stdio.h>

void main() {
    //สร้างตัวแปรต้องมี ชนิดข้อมูล ชื่อตัวแปร ;

int aa = 1000000; //(%d) จำนวนเต็มไม่เกินหลักล้าน
float bb = 20.525;  //(%f) ทศนิยมไม่เกิน 6 หลัก
double cc = 215.549794565 ;  //(%f) ทศนิยมเกิน 6 หลัก
char dd = '#'; // (%c) ตัวอักษร Charactor คือ ตัวอักษรตัวเดียว อยู่ใน'?'
char ee[]  = "Hello..... ^_^"; //(%s) ข้อความ String คือ ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป อยู่ใน " "
long ff = 10000000 ; //(%ld)จำนวนเต็มเกินหลักล้านแต่อย่าเกินพันล้าน

printf("AA : %d",aa);
printf("\nBB : %f",bb);
printf("\nCC : %lf",cc);
printf("\nDD : %c",dd);
printf("\nEE : %s",ee);
printf("\nFF : %ld",ff);

}