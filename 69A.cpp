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
	int x,y,z,xx = 0, yy = 0, zz = 0;
	cin >> tt;
	while (tt--){
		cin >> x >> y >> z;
		xx += x;
		yy += y;
		zz += z;
	}
	 ( xx == 0 && yy == 0 && zz == 0) ? cout << "YES\n" : cout << "NO\n";
	
	
	
	
	return 0;
}
