/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Problem 3: Write a program that inputs coefficients a, b, c (use double variables) and outputs the roots of the quadratic equation of the form ax2 +bx + c = 0. If a is 0, output "Invalid input", otherwise, in every other case,print both the roots, even if they are equal or imaginary.
Note: If the roots are equal, print the same on two separate lines. If the roots are real, they must be printed in increasing order on separate lines. Outputs should be up to 2 decimal places. For imaginary roots of the form (α ± iβ), print α, β followed by α, −β on the next line.*/



//quadratic formula =[b^2+(-)(b^2-4ac)^0.5]/2a
#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,y1,y2,d,i1,i2;  /*ere y1=real part of root 1
					    y2=real part of root 2
					    d=discriminant of quadratic equation
					    i1=imaginary part of root 1
					    i2=imaginary part of root 2*/
	scanf("%lf%lf%lf",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if (a==0){
		printf("Invalid input");}
	else if(d>0){    			//if d>0 real roots,i.e,i1=i2=0
		y1=(-1*b+pow(d,0.5))/(2*a);
		y2=(-1*b-pow(d,0.5))/(2*a);
		printf("%0.2lf\n%0.2lf",y1,y2);
	}
	else if(d==0){				//if d=0 real equal roots
		y1=(-1*b)/(2*a);
		y2=y1;
		printf("%0.2lf\n%0.2lf",y1,y2);}
	else{					//if d<0 imaginary root i1=-i2!=0
		y1=(-1*b)/(2*a);
		y2=y1;
		i1=pow(-1*d,0.5)/(2*a);
		i2=-1*i1;
		printf("%0.2lf,%0.2lf\n%0.2lf,%0.2lf",y1,i1,y2,i2);
	}
	return 0;
}
