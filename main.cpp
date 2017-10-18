#include <bits/stdc++.h>
using namespace std;

int main()
{
   ifstream input("input.txt");
   ofstream output("output.txt");
   int n,node1,node2,adj[7][7]={0},visited[100]={0},d;
   input>>n;

   while(input>>node1>>node2)
   {
       adj[node1][node2]=1;
       adj[node2][node1]=1;
   }
    cin>>d;

  queue<int>q;


   visited[d]=1;
   int e;
   q.push(d);
   while(!q.empty())
   {
       e=q.front();
   q.pop();
   output<<e<<" ";
   for(int i=1;i<=7;i++)
   {
       if(adj[e][i]==1&&visited[i]==0)
       {
           q.push(i);
           visited[i]=1;
       }
   }
   }



}
