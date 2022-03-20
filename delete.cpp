#include<bits/stdc++.h>

using namespace std;

int main()
{
	int size,x;
	cin >> size;
	priority_queue<int> q,q2;
	while (size--)
	{
		cin >> x;
		q.push(-x);
	}
	
	int tmp1,tmp2;
	int ans = 0;
	for ( int i = 0; q.size() != 0;i++)
	{
		tmp1 = q.top();
		cout << "TMP1 = " << tmp1 << endl;
		q.pop();
		tmp2 = q.top();
		cout << "TMP2 = " << tmp2 << endl;
		q.pop();
		q2.push(tmp1 + tmp2);
	}
	while ( !q.empty())
	{
		cout << q2.top() << endl;
		q.pop();
	}
	
	
	
}
