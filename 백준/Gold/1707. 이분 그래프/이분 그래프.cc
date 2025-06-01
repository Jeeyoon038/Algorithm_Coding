#include <iostream>
#include <vector>
using namespace std;

int V, E;
vector<int> graph[20001];
int colored[20001] = { 0 };

bool DFS(int v,int color) {
	colored[v] = color; //현재 정점 v를 color (1) 로 칠해준다
	
	for (int next : graph[v]) {//v의 이웃들을 다 돌면서
		if (colored[next] == 0) {//아직 색칠 안되어있을 때,

			//v는 color(1)이라면, color (-1)을 v의 이웃에 칠해준다.
			if (!DFS(next, -color)) 
				
				//DFS(next,-color)가 false이면,
				//if(!false)는 if(true)가 된다.
				return false;
		}
		else if (colored[next] == color) {//이웃이랑 같은 색이면?
			return false; //이분 그래프 아님! return false
		}
			
	}
	return true;
	
}
int main() {
	
	int K;
	cin >> K;

	while (K--) {
		cin >> V >> E;

		//초기화
		for (int i = 1;i <=V;i++) {
			graph[i].clear();
			colored[i] = 0;
		}

		for (int i = 0; i < E; i++) {
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}

		bool isBipartite = true;
		for (int i = 1;i <= V;i++) {
			if (colored[i] == 0) {
				if (!DFS(i, 1)) {
					isBipartite = false;
					break;
				}
			}
		}

		if (isBipartite) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}

	return 0;
}