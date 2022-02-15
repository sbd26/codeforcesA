/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	int tt;
	cin >> tt;
	int mishaka = 0, chris = 0;
	while (tt--)
	{
		int a,b;
		cin >> a >> b;
		if ( a > b )
		mishaka++;
		else if ( b > a)
		chris++;
	}
	if ( mishaka > chris)
	cout << "Mishka";
	else if ( mishaka < chris)
	cout << "Chris";
	else
	cout << "Friendship is magic!^^";
	
	return 0;
}
