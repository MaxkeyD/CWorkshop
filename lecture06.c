#include<stdio.h>
//variable ตัวแปร************


void main (){
    int midtermscore = 50;
    int finalscore = 30;
    int quizscore  ;
    int totalscore;
    
    quizscore = 15;
    totalscore = midtermscore + finalscore+quizscore;
    printf("Midtermscore = %d\n",midtermscore);
    printf("Final Score = %d\n",finalscore);
    printf("Total Score = %d\n",totalscore);
}