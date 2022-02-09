/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int tt;
	cin >> tt;
	vector <int> v(tt);
	for ( int i = 0; i < tt; i++)
	cin >> v[i];
	int s = 0, d = 0,flag = 1;
	while( !v.empty())
	{
		if (flag == 1)
		{
			if ( v[0] > v.back() )
			{
				s += v[0];
				v.erase( v.begin() );
			}
			else
				{
					s += v.back();
					v.pop_back();
				}
				flag = 2;
			}
			
			else
			{
				if ( v[0] > v.back())
				{
					d += v[0];
					v.erase(v.begin());
				}
				else 
				{
					d += v.back();
					v.pop_back();
				}
				flag = 2;
			}
		}
	
	
	
	return 0;
}
