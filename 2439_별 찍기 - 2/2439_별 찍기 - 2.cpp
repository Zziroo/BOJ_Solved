// 2439_별 찍기 - 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - i - 1; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
