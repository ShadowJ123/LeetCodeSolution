int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>um;
        for(int i=0;i<edges.size();i++){
            um[edges[i][0]]++;
            um[edges[i][1]]++;
        }
        for(auto x:um){
            if(x.second>=edges.size())
                return x.first;
            //cout<<" a "<<x.first<<" "<<x.second<<" b"<<endl;
        }
        //cout<<edges.size()<<" here";
        return 0;
    }