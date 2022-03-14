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
	int arr[5][5];
	int row, col;
	for ( int i = 0; i < 5; i++)
		for ( int j = 0; j < 5; j++){
			cin >> arr[i][j];
			if ( arr[i][j] == 1){
				row = i;
				col = j;
			}
		}
		
		
		cout << (abs( 2 - row) + abs ( 2 - col)) ;
	
	
	
	return 0;
}
