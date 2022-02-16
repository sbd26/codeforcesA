/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin >> n >> k;
	int flag = 0;
	while ( n--)
	{
		int a;
		cin >> a;
		if ( a + k <= 5)
		flag++;
	}
	cout << flag / 3;
	
	
	
	return 0;
}
