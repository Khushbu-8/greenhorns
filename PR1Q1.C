#include<stdio.h>
#include<conio.h>

void main(){
float c;
float sum;
	clrscr();
	printf("Convert tempreture from degree Celcius to Fahrenheit..\n\n");

	printf("Enter thr tempretur in celcius..");
	scanf("%f",&c);
	sum=(c*9/5)+32;
	printf("The tempreture in Ferhanheit is %0.1f",sum);


getch();
}