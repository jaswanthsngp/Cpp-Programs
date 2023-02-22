#include <bits/stdc++.h>
using namespace std;

void countToMakeDiffEqual(int arr[], int n)
{
	 int ma = 0;

	 unordered_map<int, int> m;
	 for (int i = 0; i < n; i++)
 	{

	 m[arr[i]]++;
	 ma = max(ma, m[arr[i]]);
	 }
	 if (n <= 2)
	 cout << 0 << endl;

	 else if (ma == 1)
	 {
	 cout << n - 2 << endl;
	 }
	 else
	 cout << n - ma << endl;
}

signed main()
{
	 int n;
	 cin >> n;
	 int a[n];
	 for (int i = 0; i < n; i++)
	 cin >> a[i];
	countToMakeDiffEqual(a, n);
	 return 0;
}