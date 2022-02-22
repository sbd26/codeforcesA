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
	int tt; cin >> tt;
	while (tt--)
	{
		string s;
		int door = 0, key = 0;
		cin >> s;
		if ( s[0] == 'R' || s[0] == 'G' || s[0] == 'B')
			cout << "NO" << endl;
		else
			{
				for  ( int i = 0; i < s.size(); i++)
				{
					if ( s[i] == 'r'){
						for ( int j = i + 1; j < s.size(); j++)
							if ( s[j] == 'R')
								key++;
							}
					else if ( s[i] == 'g') {
						for ( int k = i + 1; k < s.size(); k++)
							if ( s[k] == 'G')
								key++;
							}
					else if ( s[i] == 'b'){
						for ( int l = i + 1; l < s.size(); l++)
							if ( s[l] == 'B')
								key++;
					}
					else
						door++;
					}
					if ( door - key == 0 )
						cout << "YES" << endl;
					else 
					cout << "NO" << endl;
					
				}
			}
		
	
	
	
	
	return 0;
}
