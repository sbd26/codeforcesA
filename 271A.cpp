/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	
	int tt;
	cin >> tt;
	int a,b,c,d;
	
		while(1)
		{
			tt++;
		a = (tt % 10000) / 1000;
		b = (tt % 1000) / 100;
		c = (tt % 100) / 10;
		d = tt % 10;
		
		if ( a != b && a != c && a != d && b != c && b != d && c!=d)
		break;
	}
	cout << a << b << c << d;
	
	return 0;
}
