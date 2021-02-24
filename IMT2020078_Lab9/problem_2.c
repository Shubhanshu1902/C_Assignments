#include <stdio.h>
#define max 20          //declaring name length limit
typedef struct          //Defining struct student
{
    int roll_no;
    char name[20];      
    int s1,s2,s3;
}student;

int main()
{
    int n;
    scanf("%d",&n);
    student students[n];            //defining array of struct of student
    int avg1=0,avg2=0,avg3=0;       //defining averages of marks
    for (int i = 0; i < n; i++)
    {
        students[i].roll_no=i+1;    //setting roll number
        scanf("%s",students[i].name);           //taking name input
        scanf("%d%d%d",&students[i].s1,&students[i].s2,&students[i].s3);    //taking s1,s2,s3 as input 
        avg1+=students[i].s1;
        avg2+=students[i].s2;
        avg3+=students[i].s3;
    }
    avg1/=n;
    avg2/=n;
    avg3/=n;
    for (int i = 0; i < n; i++)
    {
        printf("%04d ",students[i].roll_no);    //printing roll number 
        printf("%s ",students[i].name);         //printing student name
        
        //Checking Grades 
        if (students[i].s1>=avg1)                
            printf("A ");
        else
            printf("B ");
        if (students[i].s2>=avg2)
            printf("A ");
        else
            printf("B ");
        if (students[i].s3>=avg3)
            printf("A ");
        else
            printf("B ");
        printf("\n");
    }
}