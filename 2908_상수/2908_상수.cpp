// 2908_상수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A;
int B;
int temp[3];

int FlipNumber(int num)
{
	int index = 0;

	while (true)
	{
		temp[index] = num % 10;

		if (num < 10)
		{
			break;
		}

		num /= 10;

		++index;
	}

	return temp[0] * 100 + temp[1] * 10 + temp[2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B;

	A = FlipNumber(A);
	B = FlipNumber(B);

	if (A < B)
	{
		cout << B;
	}
	else
	{
		cout << A;
	}
}