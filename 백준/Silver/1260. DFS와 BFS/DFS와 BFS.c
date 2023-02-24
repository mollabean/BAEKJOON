#include <stdio.h>
int graph[1001][1001] = {0};
int DFS[1001] = {0};
int BFS[1001] = {0};
int queue[1001];

void dfs(int V, int N){
    DFS[V] = 1;
    printf("%d ", V);
    for(int i = 1; i <= N; i++){
        if(graph[V][i] == 1 && DFS[i] == 0){
            dfs(i,N);
        }
    }
}

void bfs(int V, int N){
    int front = 0, rear = 0, pop;
    printf("%d ", V);
    queue[0] = V;
    rear++;
    BFS[V] = 1;
    
    while(front<rear){
        pop = queue[front];
        front++;
        
        for(int i = 1; i<=N; i++){
            if(graph[pop][i] == 1 && BFS[i] == 0){
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                BFS[i] = 1;
            }
        }
    }
}

int main(){
    int N, M, V;
    int x,y;
    scanf("%d %d %d", &N, &M, &V);
    
    for(int i = 1; i<=M; i++){
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    
    dfs(V, N);
    printf("\n");
    bfs(V, N);
    
    return 0;
}