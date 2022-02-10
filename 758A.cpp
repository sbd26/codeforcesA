/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int tt;
	cin >> tt;
	vector <int> v(tt);
	int total = 0;
	for ( int i = 0; i < tt; i++)
	cin >> v[i];
	sort(v.begin(),v.end());
	int maxn = v[tt-1];
	int maxindex = (v.begin(),v.end()) - v.begin();
	for ( int i = 0; i < maxindex; i++)
		total += (maxn - v[i]); 
	cout << total;
	
	return 0;
}
