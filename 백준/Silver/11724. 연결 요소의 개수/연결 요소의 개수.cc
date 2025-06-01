#include <iostream>
#include <vector>

using namespace std;
int N, M;
int arr[1001][1001];
int visited[1001];

void DFS(int n) {
	visited[n] = 1;
	for (int i = 0;i <= N;i++) {
		if (arr[n][i] == 1 && visited[i] != 1) {
			DFS(i);
		}
		if (i == N)
			return;
	}
}
int main() {
	cin >> N >> M;

	for (int i = 0;i < M;i++) {
		int u, v;
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}

	int cnt = 0;

	for (int i = 1;i <= N;i++) {
		if (visited[i] != 1) {
			DFS(i);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}