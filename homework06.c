/// เขียนโปรแกรม คำนวณค่าเช่าห้องของบ้านเช่าแห่งหนึ่งซึ่งมี 10 ห้อง โดยในการคิดคำนวณค่าเช่าแต่ละห้องให้ป้อนชื่อผู้เช่า ค่าเช่าห้อง หน่วยน้่ำที่ใช้ หน่วยไฟฟ้าที่ใช้ ทางแป้นพิมพ์ แล้วแสดงผลค่าเช่าห้องของห้องเช่าแต่ละห้องทางหน้าจอ ทั้งนี้ห้องไหนยังไม่มีคนเช่าให้ป้อนชื่อผู้เช่าเป็น x และข้ามไปยังห้องต่อไปเลย โดยกำหนดให้ค่าน้ำคิดหน่วยละ 12.50 บาท ค่าไฟฟ้าคิดหน่วยละ 8.00บาท ///
#include <string.h>

#include <stdio.h>
void main(){

printf("++++++++++++++++++++++++++++\n");
printf("   Program Rent Room   \n");
printf("++++++++++++++++++++++++++++\n");

int room = 10;
int i ;
char name[100];
float rent ;
float water_rate = 12.50;
float elec_rate = 8.00; 
float water_units,elec_units;
float water_cost,elec_cost;
float total ; 
char x ; 

for( i=1;i<=room;i++){
    
    printf("Room %d\n",i);
    printf("Enter name : (x) for skip : ");
    scanf("%s",&name);
          if (strcmp(name, "x") == 0 || strcmp(name, "X") == 0) {
            printf("This room is vacant\n\n");
            continue;

        }

    printf("Enter rent per room : ");
    scanf("%f",&rent);
    printf("Enter unit water use : " );
    scanf("%f",&water_units);
    printf("Enter unit electric use : ");
    scanf("%f",&elec_units); 

    water_cost = water_units * water_rate;
    elec_cost = elec_units * elec_rate;
    
    total = rent + water_cost + elec_cost;
    
    printf("Pay money total for rent room : %.2f\n",total);
    
    
}
    printf("++++++++++++++++++++++++++++\n");
}