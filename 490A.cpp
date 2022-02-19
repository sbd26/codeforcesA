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
	int counter[4]={0},store[4][50000]={0};
	int tt; cin >> tt;
	for ( int i = 1; i <= tt; i++)
	{
		int a; cin >> a;
		store[a][counter[a]++] = i;
	}
	int ans = min (counter[1] , min ( counter[2],counter[3]));
	cout << ans << endl;
	for ( int i = 0; i < ans; i++)
	cout << store[1][i] << " " << store[2][i] << " " << store[3][i] << endl; 
	return 0;
}
