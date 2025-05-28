#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int arr[1001][1001]; //인접행렬
int visited[1001]; //방문기록
int N, M, V;

//DFS - stack 사용
void DFS(int V) {

	visited[V] = 1; //시작점 방문기록
	cout << V << " "; //방문한 노드 출력

	for (int i = 0;i <= N;i++) {
		if (arr[V][i] == 1 && visited[i] == 0)
		{
			DFS(i); //스택에 i를 넣는 것과 같음
		}
		if (i == N)
			return;
	}
}

void BFS(int V) {

	queue<int>q;
	q.push(V);

	while (!q.empty()) {
		int next = q.front();//큐 맨 앞에 값을 방문
		visited[next] = 1;//방문기록
		cout << next << " ";
		q.pop();//큐에서 뺌

		for (int i = 0;i <= N;i++) {
			if (arr[next][i] == 1 && visited[i] == 0) {
				q.push(i);
				visited[i] = 1;
			}
		}
	}
}


int main() {

	int u, v;
	cin >> N >> M >> V;

	for (int i = 0;i < M;i++) {
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}

	DFS(V);

	cout << "\n";
	memset(visited, 0, sizeof(visited)); //방문기록 visited 초기화

	BFS(V);

}