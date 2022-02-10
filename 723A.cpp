/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	vector <int> v(3);
	for ( int i =0; i < 3; i++)
	cin >> v[i];
	sort(v.begin(),v.end());
	int total = v[1] - v[0];
	total += v[2] - v[1];
	cout << total;
	
	
	return 0;
}
