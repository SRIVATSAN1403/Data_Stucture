#include<stdio.h>
#define I 999
int main(){
    int a[10][10],d[10],v[10]={0},n,s,i,j,u,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){scanf("%d",&a[i][j]);if(!a[i][j])a[i][j]=I;}
    scanf("%d",&s);
    for(i=0;i<n;i++)d[i]=a[s][i];
    d[s]=0;
    for(i=0;i<n;i++){
        m=I;
        for(j=0;j<n;j++)if(!v[j]&&d[j]<m)m=d[j],u=j;
        v[u]=1;
        for(j=0;j<n;j++)if(d[j]>d[u]+a[u][j])d[j]=d[u]+a[u][j];
    }
    for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);
}
