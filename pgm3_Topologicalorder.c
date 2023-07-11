#include<stdio.h>
  void dfs(int i);
  int a[10][10],n,Exp[10],vis[10],j=0;
  void main()
  {
      int m,u,v;
       printf("enter the number of vertices");
       scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<=n;j++)
           {
               a[i][j]=0;
           }
       }
       printf("enter no of edges");
       scanf("%d",&m);
       for(int i=1;i<=m;i++)
       {
           printf("enter  edge");
           scanf("%d %d",&u,&v);
           a[u][v]=1;
       }
       for(int i=1;i<=n;i++)
        vis[i]=0;
       for(int i=1;i<=n;i++)
       {
           if(vis [i]==0)
            dfs(i);
       }
       printf("topological index");
       for(int i=n-1;i>=0;i--)
        printf("%d\t",Exp[i]);
       getch();

  }
  void dfs(int v)
  {
      int i;
      vis[v]=1;
      for(int i=1;i<=n;i++)
      {
          if(a[v][i]==1 && vis[i]==0)
          {
              dfs(i);
          }
      }
      Exp[j++]=v;
  }
