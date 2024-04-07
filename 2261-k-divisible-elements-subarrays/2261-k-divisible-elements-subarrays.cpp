class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        map<vector<int>, int> subs;
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                vector<int> sub = std::vector<int>(nums.begin() + i, nums.begin() + j+1);
                if (subs.contains(sub)) {
                    continue;
                } else if (!(nums[j] % p)) {
                    if (sub.size() > 1) {
                        sub.pop_back();
                        if (subs[sub] + 1 <= k) {
                            int prev = subs[sub];
                            sub.push_back(nums[j]);
                            subs[sub] = prev + 1;
                            n++;
                        } else {
                            break;
                        }
                    } else if (k > 0) {
                        subs[sub] = 1;
                        n++;
                    } else {
                        break;
                    }
                } else {
                    if (sub.size() > 1) {
                        sub.pop_back();
                        if (subs[sub] <= k) {
                            int prev = subs[sub];
                            sub.push_back(nums[j]);
                            subs[sub] = prev;
                            n++;
                        } else {
                            break;
                        }
                    } else {
                        subs[sub] = 0;
                        n++;
                    }
                }
            }
        }
        return n;
    }
};