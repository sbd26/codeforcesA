/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tt;
	cin >> tt;
	int a; cin >> a;
	int tmp = a,store,min = INT_MAX;
	int first_index, second_index;
	for ( int i = 2; i <= tt; i++)
	{
		int x; cin >> x;
		store = abs (tmp - x);
		tmp = x;
		
		if ( store < min )
		{
			min = store;
			first_index = i - 1;
			second_index = i;
		}
		
		if ( i == tt)
		{
			int store2 = abs ( a - x);
			
			if ( store2 < min )
			{
				first_index = 1;
				second_index = tt;
			}
		}
		
	}
	
	
	
		cout << first_index << " " << second_index;
	
	
	
	return 0;
}
