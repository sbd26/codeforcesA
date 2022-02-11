/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	int tt;
	cin >> tt;
	while (tt--)
	{
		int w,h,n;
		int flag = 1;
		cin >> w >> h >> n;
		if (n==1){
		cout << "Yes"<<endl;
		continue;
	}
		while ( w % 2 == 0 || h % 2 == 0)
		{
			if ( w % 2 == 0)
			{
				flag *= 2;
				w = w/2;
			}
			else if ( h % 2 == 0)
				{
					flag *= 2;
					h /= 2;
				}
			}
			if ( flag >= n)
			cout << "Yes" << endl;
			else
			cout << "No" << endl;
		}
		
	
	
	
	return 0;
}
