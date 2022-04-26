// 1260_DFS와 BFS.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int N;
int M;
int V;
vector<int> graph[1'001];
bool isVisited[1'001];

void DFS_Recursive(int node)
{
	if (isVisited[node])
	{
		return;
	}

	cout << node << " ";
	isVisited[node] = true;

	for (int e : graph[node])
	{
		DFS_Recursive(e);
	}
}

void DFS_Stack(int node)
{
	stack<int> st;
	st.push(node);

	while (false == st.empty())
	{
		int v = st.top();
		st.pop();

		if (isVisited[v])
		{
			continue;
		}

		cout << v << " ";
		isVisited[v] = true;

		for (int i = graph[v].size() - 1; i >= 0; --i)
		{
			st.push(graph[v][i]);
		}
	}
}

void BFS(int node)
{
	queue<int> q;
	q.push(node);

	while (false == q.empty())
	{
		int v = q.front();
		q.pop();

		if (isVisited[v])
		{
			continue;
		}

		cout << v << " ";
		isVisited[v] = true;

		for (int e : graph[v])
		{
			q.push(e);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M >> V;

	int s = 0;
	int e = 0;

	for (int i = 0; i < M; ++i)
	{
		cin >> s >> e;

		graph[s].push_back(e);
		graph[e].push_back(s);
	}

	for (int i = 0; i <= N; ++i)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	DFS_Recursive(V);
	
	cout << "\n";
	fill_n(isVisited, 1'001, false);

	BFS(V);
}
