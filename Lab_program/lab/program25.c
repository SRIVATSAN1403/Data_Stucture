#include<stdio.h>
int p[10];
int f(int x){return p[x]==x?x:p[x]=f(p[x]);}

int main(){
    int a[20][3],n,e,i,j,x,y,t,c=0;
    scanf("%d%d",&n,&e);
    for(i=0;i<e;i++)scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    for(i=0;i<n;i++)p[i]=i;
    for(i=0;i<e;i++)for(j=i+1;j<e;j++)
        if(a[i][2]>a[j][2]){
            t=a[i][0];a[i][0]=a[j][0];a[j][0]=t;
            t=a[i][1];a[i][1]=a[j][1];a[j][1]=t;
            t=a[i][2];a[i][2]=a[j][2];a[j][2]=t;
        }
    for(i=0;i<e&&c<n-1;i++){
        x=f(a[i][0]);y=f(a[i][1]);
        if(x!=y)p[x]=y,printf("%d-%d=%d\n",a[i][0],a[i][1],a[i][2]),c++;
    }
}
