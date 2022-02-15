/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


#define newline cout << "\n";

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int row,col; cin >> row >> col;
	int flag = 1;
	
	for ( int i = 0; i < row ; i++)
	{
		if ( i % 2 == 0){
		for ( int i = 0; i < col ; i++)
			cout << "#";
			newline
		}
		
		else if ( flag == 0)
		{
			cout << "#";
			for ( int i = 0; i < col - 1; i++)
				cout << ".";
			newline
			flag = 1;
		}
		
		else if ( flag == 1)
		{
			for ( int i = 0 ; i < col - 1; i++)
				cout << ".";
			cout << "#";
			newline
			flag = 0;
		}
		
	}
	
	
	return 0;
}
