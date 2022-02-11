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
	int ans = 0;
	int flag = 0;
	for(int i = 1; i<=tt; i++)
	{
		ans += i;
		tt -= ans;
		if(tt<0)
		break;
		else
		flag++;
	}
	cout << flag;
		
	
	
	return 0;
}
