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
	
	string s;
	cin >> s;
	string tmp;
	for(int i = 0; i < s.size();i++)
	{
		if ( s[i] == '-' && s[i+1] == '-'){
		tmp += '2';
		i += 1;
		
	}
		else if ( s[i] == '-' && s[i+1] == '.'){
		tmp += '1';
		i++;
	}
		
		else if ( s[i] == '.')
		tmp += '0';
		
	}
	cout << tmp;
	
	return 0;
}
