// 1874_스택 수열.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;
stack<int> sequence;
vector<char> result;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int count = 1;

	for (int i = 0; i < N; ++i)
	{
		int num = 0;

		cin >> num;

		while (count <= num)
		{
			sequence.push(count);

			++count;

			result.push_back('+');
		}

		if (num == sequence.top())
		{
			sequence.pop();

			result.push_back('-');
		}
		else
		{
			cout << "NO";

			return 0;
		}
	}

	for (size_t i = 0; i < result.size(); ++i)
	{
		cout << result[i] << "\n";
	}
}
