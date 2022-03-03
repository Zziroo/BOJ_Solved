// 10773_제로.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>

using namespace std;

int K;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> cog;

	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		int temp = 0;

		cin >> temp;

		if (temp != 0)
		{
			cog.push(temp);
		}
		else
		{
			cog.pop();
		}
	}

	int sum = 0;
	while (false == cog.empty())
	{
		sum += cog.top();
		cog.pop();
	}

	cout << sum;
}
