//Control Statement : if-els-if พิสูจน์ตรวจสอบหลายครั้ง โดยเป็นการพิสูจน์ว่าเท่ากันหรือไม่เท่านั้น และพิสูจน์ได้เฉพาะตัวเลขและตัวอักษร
 //โปรแกรมตรวจสอบสายรถเมล์ จากการป้อนข้อมูลสายรถเมล์จากผู้ใช้งานและแสดงออกมา
 // กรณี ผู้ใช้งานป้อนสาย 3 แสดงข้อความ Go to Sanamlung
 // กรณีผู้ใช้งานป้อนสาย 123 แสดงข้อความ Go to Pinkloa
 // กรณีผู้ใช้งานป้อนสาย 84 แสดงข้อความ Go to Wat Rai King
 // กรณีผู้ใช้งานป้อนสาย 81 แสดงข้อความ Go to Oam Noi
 // กรณีผู้ใช้งานป้อนสายอื่นๆ แสดงข้อความ Don't have data of BUS Number

#include  <stdio.h>

void main(){
    int busNo;

    printf("Input bus Number : ");
    scanf("%d",&busNo);
    printf("==========================\n");
    
    if (busNo == 3)
    { 
        printf("Go to Sanamlung\n");
    }
    else if (busNo == 123){
        printf("Go to Pinkloa\n");
    }
    else if (busNo == 84){
        printf("Go to Wat Rai King\n");
    }
    else if (busNo == 81){
        printf("Go to Oam Noi \n");
    }
    else printf("Don't have data of BUS Number\n");
    {
        
    }
}

