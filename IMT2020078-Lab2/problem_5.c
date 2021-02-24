/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Problem 5: Write a program to input Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, θ). (θ in radians.)
Note: Output up to two decimal places.
Hint: r =(x^2+y^2)^0.5 and theta=arctan(y/x)*/
#include <stdio.h>
#include <math.h>
int main(){
	float x,y,r,theta; //here r=[x^2+y^2]^0.5 and theta=arctan(y/x)
	scanf("%f%f",&x,&y);
	r=pow(pow(x,2)+pow(y,2),0.5);
	theta=atan(y/x);
	printf("%0.2f %1.2f",r,theta);
	return 0;
}
