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
	int in[tt];
	for ( int i = 0; i < tt; i++)
			cin >> in[i];
	int smin = in[0], smax = in[0],minindex, maxindex;
	int i;
	for  (  i = 1 ; i < tt; i++)
	{
		if ( smax < in[i])
		{
				smax = in[i];
				maxindex = i;
		}
		if ( smin >= in[i])
		{
			
				smin = in[i];
				minindex = i;
			
			
		}
	}
	
	
	if ( maxindex > minindex)
		cout << (maxindex-1)+(tt-minindex)-1;
	else 
		cout << (maxindex-1)+(tt-minindex);
	
	
	return 0;
}
