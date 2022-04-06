/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


bool integer(float x)
{
	if ( x == (int) x)
		return true;
	
	else 
	return false; 


}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tt;
	cin >> tt; 
	int arr[tt];
	for ( int i = 0; i < tt; i++)
		cin >> arr[i];
	for ( int i = 0; i < tt; i++)
		cout << arr[i] << " ";
	
	
	
	return 0;
}
