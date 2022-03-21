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
	//vector <string> s(tt);
	int teama = 1,teamb = 0;
	
	string tmp1; cin >> tmp1;
	string s,tmp2;
	while (--tt)
	{
		cin >> s;
		if ( s == tmp1)
			teama++;
		else
		{
			tmp2 = s;
			teamb++;
		}
	}
		
		(teama > teamb) ? cout << tmp1 : cout << tmp2;
	
	
	
	
	return 0;
}
