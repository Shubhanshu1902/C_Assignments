/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Problem 1: (Intersecting Circles) Given two circles with centers at (x1, y1) and (x2, y2) and having radius r1 and r2 respectively, are considered to be intersecting if they have a non-zero common area. If the two circles touch at a point they are considered to be touching. Write a (C) program to input integer values of (x1, y1, r1, x2, y2, r2), output "Intersect" if the circles have a non-zero common area, output "Touch" if the circles touch each other, otherwise output "No Intersection" (without the quotes).
Note: If one of the radius values is negative, output should be "Invalid Input". Radius value of 0 is acceptable.*/


#include <stdio.h>
#include <math.h>
int main(){
  int x1,y1,r1,x2,y2,r2;		//Circle_1:-(x1,y1) radius=r1
  					//Circle 2:-(x2,y2) radius=r2
  float d;				
  scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);		   	
  d=pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);			//d=distance between the centers of Circle_1 and Circle_2
  if (r1<0||r2<0)						//Radius can't be negative
  {
    printf("Invalid Input");
  }
  else if(d==(r1+r2))						//Circle touch if distance between centres of both circle is equal to sum of radius of circle
  {
    printf("Touch"); 
  }
  else if(d>(r1+r2))						//Circle does not intersect if distance between centres of both circle is greater than the sum of radius of circle	
  {
    printf("No Intersection");
  }				
  else 							//Circle intersect if distance between centres of both circle is less than the sum of radius of circle	 
  {
    printf("Intersect");
  }
  return 0;
}
