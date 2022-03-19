/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	 int n, m, last;
    double t, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
	
}
