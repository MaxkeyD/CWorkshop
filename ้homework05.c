//เขียนโปรแกรมตรวจสอบผลการเรียนของนักเรียน โดยป้อนจำนวนนักเรียนที่จะตรวจสอบทางแป้นพิมพ์ และในกางตรวจสอบนักเรียนแต่ละคนให้ป้อน รหัสนักเรียน ชื่อนักเรียน และเกรดเฉลี่ยนักเรียน โดยหากเกรดเฉลี่ยไม่ถึง 2.00 ให้แสดงข้อความทางหน้าจอว่า "สอบไม่ผ่าน"
//หากได้เกรดเฉลี่ยนตั้งแต่ 2.00 ขึ้นไปให้แสดงข้อความทางหน้าจอว่า "สอบผ่าน"

#include <stdio.h>          
void main(){
    int id ;
    char name[50];
    int n ;
    float score ;


    printf("-------------------------------------\n");
    printf("   Program Study Result \n");
    printf("--------------------------------------\n");


    printf("Enter number of student : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter student id : ");
        scanf("%d",&id);
        printf("Enter student name : ");
        scanf("%s",&name);
        printf("Enter student GPA : ");
        scanf("%f",&score);
        if(score<2.00)
        printf("Study Result is : Fail\n");
        else{
            printf("Study Result is : Pass\n");
        }
    }
}
