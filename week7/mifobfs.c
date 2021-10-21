#include <stdio.h>
#define MAX 101
#define INFI 999999
int Map[MAX][MAX];

typedef struct Queue {
	int x;
	int y;
	int s;
} Queue;

Queue Q[INFI];
int front = -1, rear = -1;

void BFS (int maxY, int maxX) {
	int directX[] = {-1, 1, 0, 0};
	int directY[] = {0, 0, -1, 1};
	
	rear++;
	Q[rear].x = 0;
	Q[rear].y = 0;
	Q[rear].s = 1;
	
	Map[0][0] = 0;
	
	// 너비
	while (front < rear) {
		front++;
		int x = Q[front].x;
		int y = Q[front].y;
		int s = Q[front].s;
		
		// 도착 지점에 온 경우
		if (x == maxX - 1 && y == maxY - 1) {
			printf("%d\n", s);
			return;
		}
		
		// 방향
		for (int i = 0; i < 4; i++) {
			// 이동 좌표 계산
			int nextX = directX[i] + x;
			int nextY = directY[i] + y;
			
			// 이동 좌표 유효성 검사
			if (nextX < 0 || nextX >= maxX || nextY < 0 || nextY >= maxY) {
				continue;
			}
			
			// 현재 맵에서 이동 가능한지 체크
			if (Map[nextY][nextX] == 1) {
				// 큐에 추가
				rear++;
				Q[rear].x = nextX;
				Q[rear].y = nextY;
				Q[rear].s = s + 1;
				
				// 방문 표시
				Map[nextY][nextX] = 0;
			}
		}
	}
}

int main(void) {
	int N = 0, M = 0;
	
	scanf("%d %d", &N, &M);
	
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			scanf("%1d", &Map[y][x]);
		}
	}
	
	if (Map[0][0] == 1) {
		BFS(N, M);
	} else {
		printf("0\n");
	}
	
	return 0;
}