/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Write a program to receive an integer and find the octal equivalent of the given integer.
Note: The entered input should be a non-negative integer. In case of a negative integer
received from keyboard, an error message “Invalid input” should be displayed.*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<0) printf("Invalid input");
    
    else{
        int octal=0,remainder,multiplier=1;
        while (n>0){                                    //to calculate octal number
            remainder=n%8;
            octal+=remainder*multiplier;
            multiplier*=10;
            n=n/8;
        }
        
        printf("%d",octal);
        return 0;}

}