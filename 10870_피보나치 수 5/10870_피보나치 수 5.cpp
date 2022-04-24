// 10870_피보나치 수 5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int Fibonacci(int num)
{
	if (0 == num)
	{
		return 0;
	}

	if (1 == num)
	{
		return 1;
	}

	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	cout << Fibonacci(N);
}
