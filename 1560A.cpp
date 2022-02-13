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
	while(tt--)
	{
		int a;
		cin >> a;
		for(int i = 1;;i++)
		{
			if ( i % 3 == 0 || i % 10 == 3)
			continue;
			else
			{
				--a;
				if ( a == 0){
				cout << i << endl;
				break;
			}
			}
		}
	}
	
				 
	
	
	return 0;
}
