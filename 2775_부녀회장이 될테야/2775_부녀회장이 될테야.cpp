// 2775_부녀회장이 될테야.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;
int k;
int n;

int SumNum(int k, int n)
{
	if (1 == n)
	{
		return 1;
	}

	if (0 == k)
	{
		return n;
	}

	return SumNum(k, n - 1) + SumNum(k - 1, n);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> k;
		cin >> n;

		int count = SumNum(k, n);

		cout << count << "\n";
	}
}
