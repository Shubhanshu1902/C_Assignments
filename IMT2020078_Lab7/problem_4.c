/*Author:-Shubhanshu Agrawal*/
/*There are three pegs labeled A, B and C. Initially there are n disks placed on
peg A. The bottom-most disk is largest, and disks go on decreasing in size with the topmost
disk being smallest. The objective of the game is to move the disks from peg A to peg C,
using peg B as an auxiliary peg. The rules of the game are as follows:

1. Only one disk may be moved at a time, and it must be the top disk on one of the pegs.

2. A larger disk should never be placed on the top of a smaller disk.

Write a (C) program to count the minimum number of steps required to move all disks from
peg A to peg C given the n, the initial number of disks on peg A.
Note: It is guaranteed that 1 ≤ n ≤ 30.
*/

/*Logic:-tasks:-moving (n-1) disks from A to B
		 		moving nth disk to C   	   
		 		moving (n-1) disks from B to C
		 Total_steps=2^n-1 or 2(steps in n-1)+1 */
#include <stdio.h>

int solution(int n)			//To calculate the result of tower of hanoi
{
	if (n==1)
	{
		return 1;
	}
	return 2*solution(n-1)+1;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",solution(n));
	return 0;
}
