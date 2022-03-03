// 10828_스택.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int arr[10'001];
int index;

bool Empty()
{
	return index == 0;
}

int Pop()
{
	if (Empty())
	{
		return -1;
	}

	int temp = arr[index - 1];
	arr[index - 1] = 0;

	return temp;
}

void Push(int i, int num)
{
	arr[i] = num;
}

int Size()
{
	return index;
}

int Top(int i)
{
	if (Empty())
	{
		return -1;
	}

	return arr[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string str;
		int num = 0;

		cin >> str;

		if (str == "push")
		{
			cin >> num;
			Push(index, num);
			++index;
		}
		else if (str == "pop")
		{
			cout << Pop() << "\n";
			--index;

			if (index < 0)
			{
				index = 0;
			}
		}
		else if (str == "size")
		{
			cout << Size() << "\n";
		}
		else if (str == "empty")
		{
			cout << Empty() << "\n";
		}
		else if (str == "top")
		{
			cout << Top(index - 1) << "\n";
		}
	}
}
