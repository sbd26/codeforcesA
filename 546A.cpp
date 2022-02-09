/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int sum = 0;
	for ( int i = 1; i <=c; i++)
		sum += a*i;
		
	if ( sum <= b)
			cout << 0;
	
	else cout << sum - b;
	
	
	
	return 0;
}
