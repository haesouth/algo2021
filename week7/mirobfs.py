from collections import deque

n, m = map(int, input().split())

graph = []

for i in range(n):
    graph.append(list(map(int, input())))

# 좌, 우, 상, 하
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def bfs(x, y):
    queue = deque()  # 큐 구현을 위해 deque 라이브러리 사용
    queue.append((x, y))
    
    #queue가 빌 때까지 반복
    while queue:
        x, y = queue.popleft()  # 기존값 초기화
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            #  미로 찾기 공간을 벗어난 경우 무시 - 범위체크하기
            if nx < 0 or ny < 0 or nx >= n or ny >= m:
                continue
            
            # 움직일 수 없는 공간(벽)일 경우 무시 -벽 체크하기
            if graph[nx][ny] == 0:
                continue
            
            # 노드를 처음 방문하는 경우(최단거리 기록)
            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y] + 1
                # 기존 좌표(노드)의 값에 +1 한 값을 움직인 좌표(노드)에 추가
                queue.append((nx, ny))

    return graph[n - 1][m - 1]


print(bfs(0, 0))