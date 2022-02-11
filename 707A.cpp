/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	
	int row,col;
	cin >> row >> col;
	char arr[row][col];
	int flag = 0;
	for ( int i = 0; i < row; i++)
		for ( int j = 0; j < col;j++)
			cin >> arr[i][j];
	for (int i = 0; i < row; i++){
		for ( int j = 0; j <col; j++){
			if ( arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
			{
				flag = 1;
				break;
			}
		}
	}
			
		if (flag == 1)
		cout << "#Color";
		else 
		cout << "#Black&White";
	
	
	return 0;
}
