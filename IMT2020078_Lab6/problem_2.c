/*Author:-Shubhanshu Agrawal IMT2020078*/
/*The expansion for sin(x) 
Write a function that takes x as input (use double) and computes sin(x)
approximated to power of 11. You must write two functions, one to compute
the factorial of an integer and another to compute the power of a number
(output in double format). Use these to compute sin(x).*/

#include <stdio.h>
double factorial(double x){              //for factorial of number
    if (x==1) return 1;
    return x*factorial(x-1);
}
double power(double base,double p){      //for calculating base to the power of p
    if (p==0) return 1;
    return base*power(base,p-1);
}
double sin(double x){          //to calculate sinx
    double sum;                 //sum us the value of sinx
    for (int i=1;i<12;i=i+2){
        if (i%4==3) sum-=power(x,i)/factorial(i);
        else sum+=power(x,i)/factorial(i);
    }
    return sum;
    
}
int main(){
    double x,sinx;
    scanf("%lf",&x);
    sinx=sin(x);
    printf("%f",sinx);
    return 0;
}

