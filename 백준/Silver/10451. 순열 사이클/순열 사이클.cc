#include <iostream>
#include <vector>
#include <cstring> //memset을 사용하려면 선언해야 한다

using namespace std;

int arr[1001];
int visited[1001];

void DFS(int n) {
	visited[n] = 1;
	int next = arr[n]; 
	if (visited[next] != 1) {
		DFS(next);

	}
}

int main() {

	int T;
	cin >> T;

	while (T--) { //T=0이면 false : 반복 종료, 현재 값 사용 후 감소(후위 감소)
		int n;
		cin >> n;
		for (int i = 1;i <= n;i++) {
			cin >> arr[i];
		}

		memset(visited, 0, sizeof(visited));
		
		int cnt = 0;

		for (int i = 1;i <= n;i++) {
			if (visited[i] != 1) {
				DFS(i); //한 번의 탐색으로 전체 연결된 노드를 방문 처리해야 한다. i에서 시작해서 next=arr[i]를 따라가며 방문처리
				//이때 방문한 모든 노드는 같은 사이클에 속한다
				cnt++;
			}
		}
		cout << cnt << "\n";
	}


	return 0;

}