/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;



int d2b(int N)
{
 
    // To store the binary number
    int B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,b; cin >> a >> b;
	int decA , decB;
	decA = stoi(a, 0, 2);
	decB = stoi(b, 0, 2);
	int x = decA ^ decB;
	cout << d2b(x);
	
	
	return 0;
}
