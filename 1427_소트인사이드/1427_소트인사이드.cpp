// 1427_소트인사이드.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int arr[12];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int modNum = 0;

	while (N > 0)
	{
		modNum = N % 10;

		++arr[modNum];

		N /= 10;
	}

	for (int i = 9; i >= 0; --i)
	{
		while (0 != arr[i])
		{
			cout << i;

			--arr[i];
		}
	}
}
