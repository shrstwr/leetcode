class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        vector<int> v3;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (v1[i] < v2[j]) {
                v3.push_back(v1[i++]);
            } else {
                v3.push_back(v2[j++]);
            }
        }
        while (i < m) {
            v3.push_back(v1[i++]);
        }
        while (j < n) {
            v3.push_back(v2[j++]);
        }
        v1 = v3;
    }
};
