class Solution {
public:
    void rotate(vector<int>& v, int k) {
        vector<int> arr(v);
        for(int i=0;i<v.size();i++){
            arr[(i+k)%v.size()]=v[i];

        }
        for(int i=0;i<v.size();i++){
            v[i]=arr[i];
        }

    }
};