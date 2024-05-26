#include <bits/stdc++.h>
#define startt ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
using namespace std;
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007 //1e9+7
#define MOD2 998244353
#define MX 1000000000 //1e9
#define MXL 1000000000000000000
#define PI (ld)2*acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define inte long long
#define ld long doublelu


pair<int,int> minimum_steps_to_cover_all_nodes(vector<vector<int>>& tree, int start,vector<bool>&visited) {
    visited[start]=true;
     int a=0,b=0;
     int x=1;
    for(auto it: tree[start]){
        if(!visited[it]){
            pair<int,int> p=dfs2(tree,it,visited);
            a=max(a,p.first);
            
            b+=((p.second)+1);
            b+=(p.first);
            x=0;
        }
    }
      
     
    return {a+1,b-a};
     
}

bool minimum_distance_path_between_two_nodes_in_tree(vector<vector<int>>& tree,int current,int target, vector<int>& path,vector<bool>& visited){
  visited[current] = true;
    // Add the current node to the path
    path.push_back(current);

    // If the current node is the target node, return true
    if (current == target) return true;

    // Recur for all the vertices adjacent to this vertex
    for (int neighbor : tree[current]) {
        if (!visited[neighbor]) {
            if (dfs(tree, neighbor, target, path, visited)) {
                return true;
            }
        }
    }

    // If target node is not reachable from this node, remove it from path and return false
    path.pop_back();
    return false;
}




int main()
{
startt
int t;
cin>>t;
while(t--)
{
     
}
return 0;
}
