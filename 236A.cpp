/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	string s;
	cin >> s;
	int counter = 0;
	sort(s.begin(),s.end());
	for ( int i = 0; s[i] != '\0'; i++)
			if ( s[i] != s[i+1])
				counter++;
	
		
		
		
	
	if ( counter % 2)
	cout<<"IGNORE HIM!";
	else
	cout << "CHAT WITH HER!";

				
	
	
	return 0;
}
