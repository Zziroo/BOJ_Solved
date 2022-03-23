// 4949_균현잡힌 세상.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>

using namespace std;

char cha[102];
stack<char> bracket;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (true)
	{
		cin.getline(cha, 102, '\n');

		if ('.' == cha[0])
		{
			break;
		}

		bool balance = true;

		for (int i = 0; i < 102; ++i)
		{
			if ('(' == cha[i] || '[' == cha[i])
			{
				bracket.push(cha[i]);
			}
			else if (')' == cha[i])
			{
				if (0 != bracket.size() && '(' == bracket.top())
				{
					bracket.pop();
				}
				else
				{
					balance = false;
					break;
				}
			}
			else if (']' == cha[i])
			{
				if (0 != bracket.size() && '[' == bracket.top())
				{
					bracket.pop();
				}
				else
				{
					balance = false;
					break;
				}
			}
		}

		if (bracket.empty() && balance)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}

		for (int i = 0; i < 102; ++i)
		{
			cha[i] = '\0';
		}

		while (false == bracket.empty())
		{
			bracket.pop();
		}
	}
}