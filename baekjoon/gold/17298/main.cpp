#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int	n, i, num;
	stack <int> st, rt, p;

	cin >> n;
	for (int i= 0;i < n; i++)
	{
		cin >> num;
		p.push(num);
	}
	while(!p.empty())
	{
		while (!st.empty() && st.top() <= p.top())
			st.pop();
		if (st.empty())
			rt.push(-1);
		else
			rt.push(st.top());
		st.push(arr[i--]);
	}
	for (int i= 0;i < n; i++)
	{
		cout << rt.top() << ' ';
		rt.pop();
	}
	return (0);
}
