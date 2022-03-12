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
	while (tt--){
		int a;
		cin >> a;
		if ( a == 1)
			cout << 1 << endl;
		else
			cout << ( 1 << a) - 1 << endl;
	}
		
	
	
	
	return 0;
}
