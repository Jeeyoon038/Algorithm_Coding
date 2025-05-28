#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int arr[1001][1001]; //인접행렬
int visited[1001]; //방문기록
int N, M;

//DFS - stack 사용
void DFS(int V) {

	visited[V] = 1; //시작점 방문기록

	for (int i = 0;i <= N;i++) {
		if (arr[V][i] == 1 && visited[i] == 0)
		{
			DFS(i); //스택에 i를 넣는 것과 같음
		}
		if (i == N)
			return;
	}
}



int main() {

	int u, v;
	cin >> N >> M;

	for (int i = 0;i < M;i++) {
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}

	int cnt = 0;//연결 요소 개수

	for (int i = 1;i <= N;i++) {
		if (visited[i] == 0) {
			DFS(i);
			cnt++;
		}
	}
	
	cout << cnt << endl;
	return 0;
}