//Control Statement : IF ตรวจสอบครั้งเดียวจริงทำเท็จไม่ทัน

//พิสูจน์ตัวเลขที่รับมาจากผู้ใช้งานมากกว่า 0 หรือไม่ หากมากกว่า 0 ให้แสดงข้อความ "Positive number"
 //หากตั้งแต่ 0 ลงมา ให้แสดงข้อความ " Negative number "

 #include <stdio.h>

void main(){

int number ; 

printf("Enter your number : ");
scanf("%d",&number);
if (number > 0){
    printf("Positive number");
}
else {
    printf("Negative number ");
    }
}