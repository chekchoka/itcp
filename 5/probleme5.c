#include<stdio.h>
#include<math.h>
int main(){
float x1,x2,y1,y2,d;
printf("donner la position de P1 \t");
scanf("%f %f",&x1,&y1);
printf("donner la position de P2 \t");
scanf("%f %f",&x2,&y2);
d=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
printf("la distance between te two points is %f",d);
return(0);
}