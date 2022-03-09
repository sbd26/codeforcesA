#include <bits/stdc++.h>
using namespace std;


bool cmpr(const pair <int ,int> &p1, const pair <int, int> &p2)
{
	if ( p1.first > p2.first ) return true;
	else if ( p1.first == p2.first ) return (p1.second < p2.second);
	else return false;
	
	
	
}


int main()
{
   
	int tt, indx;
	cin >> tt >> indx;
	--indx;
	vector <pair <int, int>> v(tt);
	for ( int i = 0; i < tt; i++)
		cin >> v[i].first >> v[i].second;
	int ans = 0;
	sort(v.begin(),v.end(),cmpr);
	for ( auto u : v)
		if ( u == v[indx] )
			ans++;
			
			
	cout << ans;
		
   
   



return 0;
}
