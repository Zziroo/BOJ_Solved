// 2775_부녀회장이 될테야.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;
int k;
int n;
int arr[15][15];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 15; ++i)
	{
		arr[0][i] = i + 1;
	}

	for (int i = 0; i < 15; ++i)
	{
		arr[i][0] = 1;
	}

	for (int i = 1; i < 15; ++i)
	{
		for (int j = 1; j < 15; ++j)
		{
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> k;
		cin >> n;

		cout << arr[k][n - 1] << "\n";
	}
}
