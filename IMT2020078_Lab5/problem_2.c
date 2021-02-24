/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Armstrong number is a number that is equal to the sum of cubes of its digits. Write a program that takes non-negative integers a and b as input and prints Armstrong
numbers in the range [a,b] (both a and b are included in given range).
Note : Print Armstrong numbers in increasing order and in separate lines. In case of negative value of a or b, output "Invalid input".
In case no Armstrong number exists in given range, output "No Armstrong Number".*/




#include <stdio.h>

int main(){
    int a,b;
    int sum_of_cube,rem,count=0;
    scanf("%i%i",&a,&b);
    if (a<0||b<0) printf("Invalid input");   //checking if number is negative 
    else{
        for (int i=a;i<=b;i++){             
            int j=i;
            sum_of_cube=0;
            rem=0;
            while (j>0){                    //using while loop to calculate sum of cube of each digit of number
                rem=j%10;
                j=j/10;
                sum_of_cube+=rem*rem*rem;
            }
            if (sum_of_cube==i){            
                printf("%d \n",sum_of_cube);
                count+=1;}                  //checking if there is any number
            
                        
        }
        if (count==0) printf("No Armstrong Number");}
    return 0;
}