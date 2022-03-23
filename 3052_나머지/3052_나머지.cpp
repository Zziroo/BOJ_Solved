// 3052_나머지.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int arr[10];
int modulo[42];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 10; ++i)
	{
		int mod = 0;

		cin >> arr[i];

		mod = arr[i] % 42;

		++modulo[mod];
	}

	int count = 0;

	for (int i = 0; i < 42; ++i)
	{
		if (0 != modulo[i])
		{
			++count;
		}
	}

	cout << count;
}
