/*Name:-Shubhanshu Agrawal IMT2020078*/
/*Write a program to find the grace marks for a student using switch. The
program will take char c and integer n as input, where c is class obtained by the student and
n is the number of subjects he/she has failed in. Use the following logic:
- If the student gets f class and the number of subjects he/she failed in is greater than 3,
then he/she does not get any grace. Otherwise the grace is of 5 marks per subject.
- If the student gets s class and the number of subjects he/she failed in is greater than 2,
then he/she does not get any grace. Otherwise the grace is of 4 marks per subject.
- If the student gets t class and the number of subjects he/she failed in is greater than 1,
then he/she does not get any grace. Otherwise the grace is of 5 marks.*/


#include <stdio.h>
int main(){
    char c;             //c=class
    int n;              //n=number of subject he/she failed
    scanf ("%c %d",&c,&n);
    if (n<0){
        printf("Invalid input");
        return 0;
    }
    int grace=0;
    switch(c){                  //using switch to check the class and if-else for number of subjects he/she failed
        case 'f': 
            if (n<=3) grace=5*n;
            break;
        case 's':
            if (n<=2) grace=4*n;
            break;
        case 't':
            if (n<=1) grace=1*n;
            break;
    }
    printf("%d",grace);
    return 0;
}