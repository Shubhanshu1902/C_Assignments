/*Author:-Shubhanshu Agrawal IMT2020078*/
/*problem2:-You are given three floats a b c as inputs which represent the length, the breadth of a rectangle and the radius of a circle, respectively. Write a program which gives the output: area of the rectangle, perimeter of the rectangle, area of the circle and circumference of the circle, respectively. (Make sure that output sequence is as mentioned above). (Assume π = 3.14) (Give output up to 2 decimal places)*/





#include <stdio.h>
int main(){
	float l,b,r,a_r,p_r,a_c,p_c;
	scanf("%f%f%f",&l,&b,&r);
	a_r=l*b;  //area of rectangle
	p_r=2*(l+b); //perimeter of rectangle
	a_c=3.14*r*r; //area of circle
	p_c=2*3.14*r; //circumference of circle
	printf("%0.2f %0.2f %0.2f %0.2f",a_r,p_r,a_c,p_c);
	return 0;
}


