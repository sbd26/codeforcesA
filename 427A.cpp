/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >>n;
	int sum = 0,nsum = 0;
	
	for ( int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if ( a > 0)
			sum += a;
		else{
			if ( sum > 0)
				--sum;
			else
			 --nsum;
		}
	}
		cout << abs(nsum);
		
		
	
	
	
	return 0;
}
