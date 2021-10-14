#include <stdio.h>

int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
int visit[9];
int queue[9];

void BFS(int start) {
    int rear, front = 0;
    printf("%d", start);
    visit[start] = 1;
    queue[rear++] = start;
    while (front < rear){
        start = queue[front++];
        for (int i = 1; i <= 8; i++) {
            if (graph[start][i] == 1 && !visit[i]) {
                printf("%d ", i);
                visit[i] = 1;
                queue[rear++] = i;}
        }
        
    }
    
}
int main() {
    BFS(1);
    return 0;
}