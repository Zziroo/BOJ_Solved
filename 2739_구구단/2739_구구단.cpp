// 2739_구구단.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	for (int i = 0; i < 9; ++i)
	{
		cout << N << " * " << i + 1 << " = " << N * (i + 1) << "\n";
	}
}
