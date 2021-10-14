#include <stdio.h>
#define N 9
 
int graph[9][3]=
{
    {}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}
    
};
int visited[9];

void dfs(int start) {
    visited[start] = 1;
    printf("%d ", start);
    for (int next = 0; next < N; next++) 
        if (graph[start][next] == 1 && !visited[next]== 1)

        dfs(next);
}
int main() {
    dfs(0);
}