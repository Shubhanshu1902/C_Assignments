/*Author:-Shubhanshu A
grawal IMT2020078*/
/*Write a program that takes as input integer n and prints all the Pythagorean
triplets (where sides belonging to a triplet are printed in increasing order) with the length of
sides less than or equal to n. A Pythagorean triplet is a set of three positive integers a, b
and c such that a 2 + b 2 = c 2 .
Note : Print the sides of all such possible triplets in separate lines, each in increasing order.
The triplets should be further arranged in increasing order of largest side and then second
largest side.
The value of n should be positive. When n is not positive, output "Invalid input".
And when no such triplet exists, output "No triplet".*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    if (n>0){                               //checking n is positive or not 
        for (int i=1;i<=n;i++){             //pythagoras triplet
            for (int j=1;j<n;j++){              
                for (int z=1;z<n;z++){
                    if ((i*i==z*z+j*j)&&(z<j)){
                        printf("%d %d %d\n",z,j,i);
                        count++;
                    }}}}   
        if (count==0) printf("No triplet");      //checking if there exist a pythagoras triplet or not
    }
    else printf("Invalid input");
    return 0;
}