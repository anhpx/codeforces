#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	long long n, h, i;
	long long total = 0;
	long long *arr;
	cin >> n >> h;
	arr = new long long[n];

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (i = 0; i < n; i++)
	{
		total += arr[i] * h;

		if (h > 1)
		{
			h--;
		}
	}

	cout << total;
	return 0;
}