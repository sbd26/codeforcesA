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
	string s;
	cin >> s;
	string tmp;
	int size = s.size();
	for ( int i = 0; i < size; i++)
		if ( i % 2 == 0)
			tmp.push_back(s[i]);
	sort(tmp.begin(),tmp.end());
	cout << tmp[0];
	for ( int i = 1; i < tmp.size(); i++)
	cout << "+" << tmp[i];
	
	return 0;
}
