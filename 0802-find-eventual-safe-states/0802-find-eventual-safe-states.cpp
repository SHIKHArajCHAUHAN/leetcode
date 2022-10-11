class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<graph[i].size();j++){
                int nodes=graph[i][j];
                adj[nodes].push_back(i); 
            }
        }
    
	    vector<int>indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    queue<int>topo;
	    vector<int>ans;
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            topo.push(i);
	        }
	    }
	    while(!topo.empty()){
	        ans.push_back(topo.front());
	        for(auto it:adj[topo.front()]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                topo.push(it);
	            }
	        }
	        topo.pop();
	        
	    }
        sort(ans.begin(),ans.end());
	    return ans;
        
    }
};