// 1753_최단경로.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#include <vector>

#define INF 987654321

using namespace std;

int V;
int E;
int K;
vector<pair<int, int>> graph[20'001];
vector<int> dist(20'001, INF);

void Dijkstra(int start)
{
	dist[start] = 0;

	priority_queue<pair<int, int>> pq;
	pq.emplace(0, start);

	while (false == pq.empty())
	{
		int w = -pq.top().first;
		int v = pq.top().second;
		pq.pop();

		for (int i = 0; i < graph[v].size(); ++i)
		{
			int nR = graph[v][i].first;
			int nW = graph[v][i].second;

			if (dist[nR] > w + nW)
			{
				dist[nR] = w + nW;
				pq.emplace(-dist[nR], nR);
			}
		}
	}

	for (int i = 1; i <= V; ++i)
	{
		if (INF == dist[i])
		{
			cout << "INF\n";
		}
		else
		{
			cout << dist[i] << "\n";
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> V >> E;
	cin >> K;

	int u = 0;
	int v = 0;
	int w = 0;

	for (int i = 0; i < E; ++i)
	{
		cin >> u >> v >> w;

		graph[u].push_back(make_pair(v, w));
	}

	Dijkstra(K);
}
