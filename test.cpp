/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector <int> v(5);
	for ( int i = 0; i < 5 ; i++)
	cin >> v[i];
	vector <int> :: iterator aa = v.begin();
	printf("%x",aa);
	vector <int> :: iterator bb = (v.begin() + 1);
	printf("\n%x",bb);
	vector <int> :: iterator cc = (v.begin()+2);
	printf("\n%x",cc);
	
	
	
	return 0;
}
