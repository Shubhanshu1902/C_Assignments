/*Author:-Shubhanshu Agrawal*/
/* Rinku and Ravi are playing a game using a bunch of coins n. Rules for the
game are as follows:
1. A player can only make one move at a time.
2. In each move, a player gets to pick t number of coins, where t = 2m, m ≥ 0 i.e. each
player can pick t number of coins from the sequence {1,2,4,8...} while t ≤ n.
3. The player who picks the last coin in their move, wins the game.
Given each player plays optimally, write a (C) program that takes 2 positive integers n,id
as input where n is the total number of coins at the start of the game and id depicts which
player has started the game, output the name of the player would win the game.
Note: Rinku is player1 hence id being 1 depicts Rinku started the game and while id being 2
depicts Ravi started the game. It is guaranteed that, 1 ≤ n ≤ 30 and id ∈ {1, 2}.
*/

/*Logic:-person who start will always win until n is not the multiple of 3.*/
#include <stdio.h>

int game(int n,int id,int id1)
{
	if (n%3==0) return id1;
	else return id;
}

int main()
{
	int n,id;
	scanf("%d%d",&n,&id);
	int id1;
	if (id==1) id1=2;
	else id1=1;
	int winner=game(n,id,id1);
	if (winner==1) printf("Rinku");
	else printf("Ravi");
	return 0;
}
