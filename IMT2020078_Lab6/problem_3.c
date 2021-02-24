/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Write a function to compute distance between two points. Use this to write a function to find area of a triangle. Further write a function to
check whether a point lies inside a triangle or not. The program should take 3 points (in (x, y) format) as input (double format) and output the area of
the triangle joining these points. Next, the program should take an integer n  as input. For the next n points, the program should output whether each
point lies inside (print ‘INSIDE’) or outside (print ‘OUTSIDE’) the triangle.
Note: Points on the triangle are also considered to be inside. The program should not use any library functions except for sqrt().*/


#include <stdio.h>
#include <math.h>
double distance_between_points(double x1,double y1,double x2,double y2){        //to calculate the distance between two points
    double distance;
    distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return distance;
}

float area_triangle(double x1,double y1,double x2,double y2,double x3, double y3){  //to calculate area of triangle
    double area,a,b,c,s;
    a=distance_between_points(x1,y1,x2,y2);
    b=distance_between_points(x2,y2,x3,y3);
    c=distance_between_points(x1,y1,x3,y3);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));                                                  //Heron's formula to calculate area
    return area;
}

void inside_outside(double x,double y,double x1,double y1,double x2,double y2,double x3,double y3){   //to check weather the point is inside or not
    if (area_triangle(x,y,x1,y1,x2,y2)+area_triangle(x,y,x2,y2,x3,y3)+area_triangle(x,y,x3,y3,x1,y1)==area_triangle(x1,y1,x2,y2,x3,y3)) printf("INSIDE");
    else printf("OUTSIDE");
}

int main(){
    double x1,y1,x2,y2,x3,y3;int n;
    scanf("%lf%lf%lf%lf%lf%lf%d",&x1,&y1,&x2,&y2,&x3,&y3,&n);
    printf("%lf\n",area_triangle(x1,y1,x2,y2,x3,y3));
    for (int i=0;i<n;i++){
        double x,y;
        scanf("%lf%lf",&x,&y);
        inside_outside(x,y,x1,y1,x2,y2,x3,y3);
        printf("\n");
    }
    return 0;
}
