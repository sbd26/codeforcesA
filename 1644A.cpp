/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	while (tt--)
	{
		string s;
		cin >> s;
		int r = 0, g = 0, b = 0,counter = 0; 
		for ( int i = 0; s[i] != '\0'; i++)
		{
			if ( s[i] == 'r') r++;
			 else if ( s[i] == 'g') g++;
			 else if ( s[i] == 'b') b++;
			 else if ( s[i] == 'R')
			{
				if (r > 0)
					counter++;
					else 
						break;
				}
			 else if ( s[i] == 'G'){
				if ( g > 0)
					counter++;
				else 
					break;
				}
					
			
			 else if ( s[i] == 'B')
			{
				if ( b > 0)
					counter++;
				else break;
				
				
				}
				
			
			
			}
			if ( counter == 3)
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;
		
		
	}
		
	
	
	
	
	return 0;
}
