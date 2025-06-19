#include<stdio.h>
#define LINE printf("++++++++");

double vat = 0.7;
void calAndShowVat(int price){

    printf("Vat of %.2f is %.2f\n",price,price*vat);
}


void main() {
    
    LINE
    printf("Hello.....");
    LINE
    calAndShowVat(100);
    LINE
    


}

void showH1(){
    printf("Hi......");
}
