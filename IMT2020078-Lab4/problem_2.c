/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Write a program to receive an integer and find the reverse of the given integer
(ignore the leading zeros in the output).
Note: The entered input should be a non-negative integer. In case of a negative integer
received from keyboard, an error message “Invalid input” should be displayed.*/


#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n<0) printf("Invalid input");
    else{
        int remainder=0;int reverse=0;
        while (n>0){                                  //reverse of a n digit number=remainder of (x/10^(n-1))*10^n+remainder of (x/10^(n-2))*10^)n-1).......
            remainder=n%10;
            reverse=reverse*10+remainder;
            n=n/10;}
        printf("%d",reverse);
        return 0;
        
    }
}


