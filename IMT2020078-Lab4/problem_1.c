/*Author:Shubhanshu Agrawal IMT2020078*/
/*Write a program to find the range of a list of integers entered through the keyboard. Range is the difference between the biggest and the smallest integers in the list.
Note: Read the size of the list followed by the values (both list size and list values are integers). The list size should be validated such that an error message “Invalid input” to
be displayed if the value entered is zero or a negative integer. Both positive and negative integers should be allowed for the list values*/


#include <stdio.h>
    
int main(){
    int n;
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid Input");
    }
    else{
        int a,max,min;
        scanf("%d",&a);
        max=a;
        min=a;                                   
        for (int i=1;i<n;i++){                  

            scanf("%d",&a);                 //taking input a again and again till the length of the list if a is greater than max then substituting as max and if less than min then substituting as 
            if (a>max) max=a;
            if (a<min) min=a;
        }
        int range=max-min;
        printf("%d",range);
}}
