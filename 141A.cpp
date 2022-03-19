/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2,s3,tmp;
	cin >> s1 >> s2 >> s3;
	tmp = s1 + s2;
	int flag = 0;
	sort(tmp.begin(),tmp.end());
	sort(s3.begin(),s3.end());
	//cout << tmp.size() << " " << s3.size() << endl;
	if ( tmp.size() > s3.size())
	{
		cout << "NO"<<endl;
		return 0;
	}
	
	for ( int i = 0; s3[i] != '\0'; i++){
		if ( tmp[i] == s3[i])
			flag = 1;
		else {
			flag = 0;
			break;
		}
	}
	
	(flag == 1) ? cout << "YES" : cout << "NO";
	
	
	return 0;
}
