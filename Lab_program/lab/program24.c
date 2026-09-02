#include<stdio.h>
#define I 999
int main(){
    int a[10][10],v[10]={0},n,i,j,x,y,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)for(j=0;j<n;j++){scanf("%d",&a[i][j]);if(!a[i][j])a[i][j]=I;}
    v[0]=1;
    for(i=1;i<n;i++){
        m=I;
        for(x=0;x<n;x++)if(v[x])
            for(y=0;y<n;y++)if(!v[y]&&a[x][y]<m)m=a[x][y],j=x,c= y;
        printf("%d-%d=%d\n",j,c,m);
        v[c]=1;
    }
}
