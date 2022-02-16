/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;

int aa (int a,int b)
{
	int ct = 0;
	if ( a == 1 || b == 1)
	return 1;
	cout << a << b << endl;
	return aa(a-1,b) + aa ( a,b-1);
	
	
}


int main()
{
	cout << "Hello world";
	
	return 0;
}
