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
	int tt;
	cin >> tt; 
	while (tt--)
	{
		int n,x;
		cin >> n >> x;
		int floor = 2, counter = 1;
		while ( floor < n)
		{
			floor += x;
			counter++;
		}
		cout << counter << endl;
			
	}
	
	
	
	return 0;
}
