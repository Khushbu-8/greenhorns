#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;
	clrscr();
     printf("Find the third angle of Triangle..\n\n");

     printf("Enter value of First Angle :");
     scanf("%d",&a);
     printf("Enter value of Second Angle :");
     scanf("%d",&b);
     c=180-(a+b);

     printf("The value of third Angle is :%d",c);

getch();
}