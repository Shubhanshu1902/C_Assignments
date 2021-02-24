/*Write a program that takes input integer n and a character c, and prints the
half-diamond pattern of character c which has 2n-1 rows.
Note : The value of n should be positive. When n is not positive, output "Invalid input".*/
#include <stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d ",&n);
    if (n>0){
        scanf("%c",&ch);

        for(int i=1;i<2*n;i++){
            if (i<n+1){                                             //for upper half+mid line               
                for(int j=1;j<=2*i-1;j++) printf("%c ",ch);
            }
            else{
                for(int j=1;j<=2*(2*n-i)-1;j++) printf("%c ",ch);     //for lower half
            }
            printf("\n");
        }
    }
    else printf("Invalid input");
    return 0;
}
