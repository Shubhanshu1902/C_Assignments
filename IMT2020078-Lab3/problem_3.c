/*Author:-Shubhanshu Agrawal IMT2020078
/*A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:

I. Grade is 10 if all three conditions are met.
II. Grade is 9 if conditions (i) and (ii) are met.
III. Grade is 8 if conditions (ii) and (iii) are met.
IV. Grade is 7 if conditions (i) and (iii) are met.
V. Grade is 6 if only one condition is met.
VI. Grade is 5 if none of the conditions are met.


Write a program, which will require the user to give the values of hardness(as integer), carbon
content(as float) and tensile strength(as integer) of the steel under consideration and output
the grade of the steel(as integer).*/

#include <stdio.h>
int main(){
    int h,ts,g;        //h=hardness
                       //ts=tensile strength
                       //g=grade

    float cc;          //cc=carbon content
    scanf("%d%f%d",&h,&cc,&ts);                 
    if(h>50&&cc<0.7&&ts>5600) g=10;
    else if(h>50&&cc<0.7) g=9;
    else if(cc<0.7 && ts>5600) g=8;
    else if(h>50 && ts>5600) g=7;
    else if(h>50||cc<0.7||ts>5600) g=6;
    else g=5;
    printf("%d",g);
    return 0;

}