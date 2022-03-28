// 2673_셀프 넘버.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

bool selfNum[10'002];

void IsSelfNum(int num)
{
	if (num > 10'000)
	{
		return;
	}

	if (false == selfNum[num])
	{
		return;
	}

	int N = num;
	int dN = N;

	while (true)
	{
		dN += N % 10;

		if (N < 10)
		{
			break;
		}

		N /= 10;
	}

	IsSelfNum(dN);

	if (dN <= 10'000)
	{
		selfNum[dN] = false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 1; i < 10'001; ++i)
	{
		selfNum[i] = true;
	}

	for (int i = 1; i < 10'001; ++i)
	{
		IsSelfNum(i);
	}

	for (int i = 1; i < 10'001; ++i)
	{
		if (selfNum[i])
		{
			cout << i << "\n";
		}
	}
}
