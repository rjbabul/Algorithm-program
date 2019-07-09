#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
int visited[100];
int main()
{
   // freopen("input.txt","r", stdin);
    queue<int > q;
    int nod[100][100];
    int vertix, edge,nod1, nod2,cost;
    cin>>vertix>>edge;
    while(vertix--){
        cin>>nod1>>nod2>>cost;
       nod[nod1][nod2]=cost;
    }
     int s;
     q.push(1);
     while(!q.empty()){
        s=q.front();
       cout<<s<<" ";
        q.pop();
        for(int i=1;i<=edge;i++){
            if(nod[s][i]>0 && visited[i]!=1){
                visited[i]=1;
               // cout<<nod[s][i]<<"  ";
                q.push(i);
            }
        }
     }
    return 0;
}
