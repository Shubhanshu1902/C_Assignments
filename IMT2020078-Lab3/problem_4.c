/*Author:-Shubhanshu Agrawal IMT2020078
/*Three vertices of a triangle (x1, y1),(x2, y2),(x3, y3) are given. Write a (C)
program that takes integer inputs (x1, y1, x2, y2, x3, y3) and outputs whether the given triangle
is "Equilateral","Isosceles" or "Scalene" (without the quotes).
Note: If the given vertices do not make a triangle, output "Not Triangle".



Fun Fact: An equilateral triangle can’t have all the coordinates of it’s vertices rational at the
same time.*/
#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    float a,b,c;                //a,b,c are the sides of the triangle
    a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    if (a+b<=c||b+c<=a||b+a<=c) printf("Not Triangle");
    else if (a==b && b==c && c==a) printf("Equilateral");
    else if (a!=b && b!=c && c!=a) printf("Scalene");
    else printf("Isosceles");
    return 0;

}