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
	int tt,score,flag=0;
	cin >> tt >> score;
	int arr[tt];
	for ( int i = 0; i < tt; i++)
	cin >> arr[i];
	for ( int i = 0; i < tt; i++)
		if ( arr[i] >= arr[score -1 ] && arr[i] > 0)
			flag++;
			
	cout << flag;
	
	
	return 0;
}
