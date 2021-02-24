/* Author :- Shubhanshu Agrawal IMT2020078 */
/* Write a function to compute the binomial coefficient (n choose
r) given two positive integers n and r as input
Note: You need to make sure that the intermediate results arising due to
computation do not overflow the 32 bit integer.
The upper limit of signed int is 2147483647.*/

#include <stdio.h>

int binomial(int n,int r){       //to calculate binomial coefficient
    if (n==r) return 1;
    if (r==0) return 1;
    if (r>n) return 0;
    return binomial(n-1,r)+binomial(n-1,r-1);     //using recursion to calculate binomial_coefficient 
}

int main(){
    int n,r;
    scanf("%d%d",&n,&r);
    int binomial_coefficient=binomial(n,r);      
    printf("%d",binomial_coefficient);
    return 0; 
}
