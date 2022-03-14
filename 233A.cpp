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
	if ( tt % 2)
		cout << -1 << endl;
	else {
		cout << 2 << " " << 1 << " ";
		for ( int i = 3; i < tt; i+=2)
			cout << i + 1 << " " << i << " ";
		} 
	
	
	
	return 0;
}
