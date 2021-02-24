/*Author:-Shubhanshu Agrawal IMT2020078*/
/*problem1:-Write a program that takes a temperature reading in the centigrade scale and outputs its equivalent value in the fahrenheit scale (give output up to 2 decimal places).*/




#include <stdio.h>
int main(){
	float cent,fahr;
	scanf("%f",&cent);  
	fahr=cent*9/5+32;  //formula
	printf("%0.2f",fahr); 
	return 0;

}
