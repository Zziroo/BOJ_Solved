// 2577_숫자의 개수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A;
int B;
int C;
int arr[10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A;
	cin >> B;
	cin >> C;

	int multiplication = A * B * C;

	while (true)
	{
		int temp = multiplication % 10;

		for (int i = 0; i < 10; ++i)
		{
			if (i == temp)
			{
				++arr[i];
				break;
			}
		}

		if (multiplication < 10)
		{
			break;
		}

		multiplication /= 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << "\n";
	}
}
