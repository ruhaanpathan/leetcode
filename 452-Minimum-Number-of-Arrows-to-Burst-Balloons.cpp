class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int cnt=1;
        int end= points[0][1];
        for(auto i : points){
            
            if(end >= i[0]){ 
                end =min(end,i[1]);
                cout<<end<<endl;
                continue;
            }
            else{
                end=i[1];
                cnt++;
            }
        }
        return cnt;
    }
};