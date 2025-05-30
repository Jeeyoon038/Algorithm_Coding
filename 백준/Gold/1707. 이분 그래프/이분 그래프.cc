#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

vector<int> graph[20001]; //크기 때문에 인접 리스트 사용
int visited[20001] = { 0 };
int color[20001] = { 0 };
int V, E;
//최초 탐색 시작할 정점의 색상을 빨간색으로 칠한다(숫자 1로 표현)
//최초 정점의 인접 정점의 색상을 파란색으로 칠한다(숫자 -1로 표현)
//해당 인접 정점들을 차례로 탐색을 시작하며 자신과 인접한 정점을 빨간색으로 칠한다(숫자 1로 표현)
//이와 같은 방식으로 탐색을 지속하며 반복하여 2개의 색상으로 모두 칠한다.
//색상을 칠하다가 이웃 정점이 같은 색으로 칠해져 있다면 이분 그래프가 될 수 없다.

bool BFS(int n) {
	queue<int> q;
	q.push(n);
	color[n] = 1;

	while (!q.empty()) {
		int next = q.front();
		visited[next] = 1;
		q.pop();
		for (int i = 0;i < graph[next].size();i++) {
			int neighbor = graph[next][i];
			if (visited[neighbor] == 0) {
				q.push(neighbor);
				visited[neighbor] = 1;
				
				if (color[next] == 1 && color[neighbor] == 0) {
					color[neighbor] = -1;
				}
				else if (color[next] == -1 && color[neighbor] == 0) {
					color[neighbor] = 1;
				}
				
			}
			else if (visited[neighbor] == 1) {
				if (color[next] == color[neighbor]) {
					return false;
				}
			}
		}
	}
	return true;
}

int main() {
	int K;
	cin >> K;

	

	for (int j = 0;j < K;j++) {
		
		cin >> V >> E;
		
		int max_node = 0;//최대 정점 번호 기록

		// 초기화
		for (int i = 1; i <= 20000; i++) {
			graph[i].clear();
			visited[i] = 0;
			color[i] = 0;
		}

		for (int i = 0;i < E;i++) {
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);

			max_node = max(max_node, max(u, v));
		}

		bool check = true;
		for (int i = 1;i <= V;i++) { //각 정점마다 BFS를 다 실행해줘야함
			if (!visited[i]) {//방문하지 않은 정점에서만 BFS 실행
				if (!BFS(i)) {
					check = false;
					break;
				}
			}
			
		}
		
		cout << (check ? "YES" : "NO") << endl;
	}

	return 0;
}