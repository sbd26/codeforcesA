/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include<string>
using namespace std;


int main()
{
	
	string s;
	cin >> s;
	int counter = 0;
	for ( int i = 0; s[i] != '\0'; i++)
		for ( int j = i+1; s[j] != '\0'; j++)
			if ( s[i] == s[j])
				counter++;
	
		
		
		
	int size = s.size() - counter;
	if ( size % 2)
	cout<<"IGNORE HIM!";
	else
	cout << "CHAT WITH HER!";

				
	
	
	return 0;
}
