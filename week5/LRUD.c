#include <stdio.h>

int n=0;
int x = 1, y = 1;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};
char str[100];
char plans[100];

int main(void) {
    scanf("%d", &n);
    int count=0, cnt=0;
    scanf("%[^n]s", str);
    
    while (1){
        count++;
        if(str[count] == '\n' || '\0') break;
        if(str[count] == ' ') continue;
        plans[cnt] = str[count];
        char plan = plans[cnt];
        
        int nx= -1, ny=-1;
        for (int j = 0; j < 4; j++) {
            if (plan == moveTypes[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
            
        }
        if (nx < 1 || ny < 1 || nx > n || ny > n) continue;
        
        x = nx;
        y = ny;
        cnt++;
        
    }
    printf("%d %d\n", x, y);
    return 0;
}