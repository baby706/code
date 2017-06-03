#include<stdio.h>
void dfs(int i,int m);
char zs[100][100];
int n,m;
int p=0;
int main()
{
    scanf("%d %d",&n,&m);
    int l=0;
    for(int i=0;i<n;i++)
 {
     for(int f=0;f<m;f++)
     {
         scanf("%c",&zs[i][f]);
     }
 }
 for(int i=0;i<n;i++)
 {
     for(int f=0;f<m;f++)
     {
         if(zs[i][f]=='W')
         {
             dfs(i,f);
             l++;
         }
     }
 }
 printf("%d\n",l);
 return 0;
}
void dfs(int i,int m)
{
    p++;
    zs[i][m]='.';
    for(int y=i-1;y<=i+1;y++)
    {
        for(int x=m-1;x<=m+1;x++)
        {
            if(y>0&&x>0&&y<n&&x<m&&zs[y][x]=='W')
            {
                dfs(y,x);
            }
        }
    }
}