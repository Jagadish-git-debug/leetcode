class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0 ;
        int c = capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i] <= c){
                ans++;
                c-=plants[i];
            }
            else{
                ans+= i*2 +1;
                c=capacity;
                c-=plants[i];
            }
            cout << ans << endl;
        }
        return ans;
    }
};