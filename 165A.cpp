/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair <int,int>> v(n);
	for ( int i = 0; i < n; i++)
	{ 
		cin >> v[i].first >> v[i].second;
	}
	
	int ans = 0;
	
	
	for ( int j = 0; j<n; j++)
	{
		int  right = 0, left = 0 , lo = 0, up = 0;
		 int x = v[j].first;
		 int y = v[j].second;
		 
		 
		 //cout << x << " " << y << endl;
		for (int i = 0; i<n;i++)
		{
			int a = v[i].first , b = v[i].second;
			
			
			if ( i == j) continue;
			else if ( x > a && y == b) left++;
			 else if ( x < a && y == b) right++;
			 else if ( x == a && y < b) up++;
			 else if ( x == a && y > b) lo++;
			 
			// cout << a << " " << b << endl;
			
			if ( right > 0 && left > 0 && lo > 0 && up > 0){
				if ( (right + left + lo + up) >= 4){					
				++ans;
				break;
			}
		}
		}
	}
	
	cout << ans << endl;
		
	
	
	
	return 0;
}
