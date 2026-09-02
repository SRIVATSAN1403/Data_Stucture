#include<stdio.h>
int a[10][10],v[10],n;

void dfs(int x){
    int i;
    v[x]=1;
    printf("%d ",x);
    for(i=0;i<n;i++)
        if(a[x][i]&&!v[i]) dfs(i);
}

int main(){
    int i,j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    scanf("%d",&s);
    dfs(s);
    return 0;
}
