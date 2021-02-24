/*Author=Shubhanshu Agrawal IMT2020078*/
/* Given an integer input n (n > 1), write a function to print all
he prime factors of n in non-decreasing order*/

#include <stdio.h>

int primefactorcalculator(int n){    //function to calculate prime factor of a number
    int i=2;
    while (n>1){
        if (n%i==0) {   
            printf("%d ",i);
            n=n/i;
        }
        else i++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    primefactorcalculator(n);

}














