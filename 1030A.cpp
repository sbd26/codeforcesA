/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	int flag = 0;
	while(tt--)
	{
		int a; cin >> a;
		if ( a == 1)
			flag = 1;
	}
	if (flag)
		cout << "HARD";
	else 
		cout << "EASY";
	
	
	
	return 0;
}
