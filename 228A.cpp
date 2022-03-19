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
	set <int> s;
	for ( int i = 0; i < 4; i++){
		int tt; cin >> tt;
		s.insert(tt);
	}
	cout << 4 - s.size() << endl;
	
	
	
	
	return 0;
}
