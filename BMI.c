#include <stdio.h>
#include <stdlib.h>

int main(void){
 int w,h,b,lowerweight;
 double goalweight;

 //標準入力
 printf("現在の体重[kg]を入力>");
 scanf("%d",&w);
 printf("現在の身長[cm]を入力>");
 scanf("%d",&h);
 printf("目標BMIを入力>");
 scanf("%d",&b);

 //目標計算
 goalweight=(b*(h*h))/10000;	//理想体重計算
 lowerweight=w-goalweight;	//減らすべき体重

 //出力
 if(lowerweight<=0)
 {
	 printf("あと00kg減らしましょう。目標BMI以下です！\n");
 }
 else if(lowerweight>0)
 {
	 printf("あと%dkg減らしましょう。頑張ってください！\n",lowerweight);
 }
 else
 {
	 printf("error\n");
 }

 return 0;

}

