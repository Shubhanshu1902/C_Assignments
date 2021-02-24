/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Write a program to receive an integer, n and output the count of number of
positive integers less than n that are co-prime to n.
Hint: Two integers are said to be co-prime if their greatest common divisor (GCD) is 1.
Co-prime count for 1 is 1.
The entered input should be a positive integer. In case of zero or a negative integer
received from keyboard, an error message “Invalid input” should be displayed.*/



#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>0){
        int count=0,gcd=0;                  //gcd=greatest common divisor
        for (int i=1;i<=n;i++){             //To calculate gcd              
            for (int j=1;j<=i;j++){
                if (i%j==0 && n%j==0){
                    gcd=j;}} 
                
            if (gcd==1) count++;
            }
                
        
        printf("%d",count);
    }

    else printf("Invalid input");
    return 0;
}