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
	
	int a,b,c,ans;
	cin >> a >> b >> c;
	
	cout <<  4 * ( sqrt((a*b)/c) + sqrt((a * c) / b) + sqrt((b*c) / a));
	
	
	
	
	return 0;
}
