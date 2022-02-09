/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	long long capacity,living,tt;
	cin >> tt;
	int flag = 0;
	while (tt--)
	{
		cin >> living >> capacity;
		if(capacity >= living + 2)
			flag ++;
		}
		cout << flag;
		
	
	
	
	return 0;
}
