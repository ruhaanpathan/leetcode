class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq_map;
        for(int x : arr) { // n
            freq_map[x]++;
        }
        unordered_set<int> freq_set;

        // unordered_map<int, int> map2;
        for(pair<int, int> p: freq_map) { // m
            if (freq_set.find(p.second) != freq_set.end()) {
                return false;
            }
            freq_set.insert(p.second);
        //     map2[p.second]++;
        //     if (map2[p.second] > 1) { return false; }
        }
        return true;
        // return freq_map.size()==freq_set.size();

        // for(pair<int, int> p: freq_map) {
        //     int freq = p.second, count = 0;
        //     for(pair<int, int> p2: freq_map) {
        //         if (p2.second == freq) { count++; }
        //     }
        //     if (count != 1) { return false; }
        // }
        // return true;
    }
};