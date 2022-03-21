/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	
	
	int arr[tt][2];
	cin >> arr[0][0] >> arr[0][1];
	int max = arr[0][1],sum = arr[0][1];
	for ( int i = 1; i < tt; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
		 sum -= (arr[i][0] - arr[i][1]);
		if ( sum > max)
			max = sum;
		}
		cout << max;
	
	
	return 0;
}
