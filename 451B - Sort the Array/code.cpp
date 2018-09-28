#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int n, i, left = -1, right = -1;
	int *arr, *temp;

	cin >> n;
	arr = new int[n];
	temp = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		temp[i] = arr[i];
	}

	sort(temp, temp + n);
	for (i = 0; i < n; i++)
	{
		if (arr[i] != temp[i])
		{
			left = i;
			break;
		}
	}

	if (left == -1)
	{
		cout << "yes\n 1 1";
		return 0;
	}

	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] != temp[i])
		{
			right = i;
			break;
		}
	}

	// reverbs
	for (i = left; i <= left + (right - left) / 2; i++)
	{
		swap(arr[i], arr[left + right - i]);
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] != temp[i])
		{
			cout << "no";
			return 0;
		}
	}

	cout << "yes\n" << left + 1 << " " << right + 1;

	return 0;
}