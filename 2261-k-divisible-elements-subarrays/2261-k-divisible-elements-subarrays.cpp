class Solution {
public:
    struct trie{unordered_map<int, trie*> child;}; 
    int countDistinct(vector<int>& nums, int k, int p) {
        trie *root = new trie, *current = root;
        int n = nums.size(), subs = 0, count = 0;
        
        for (int i = 0; i<n; i++){
            current = root;
            count = 0;
            for(int j = i; j<n; j++){
                count += !(nums[j] % p);
                if (current->child.contains(nums[j])){
                    current = current->child[nums[j]];
                } else if (count <= k){
                    trie *new_child = new trie; 
                    current->child[nums[j]] = new_child;
                    current = current->child[nums[j]];
                    subs++;
                }
            }
        }
        return subs;
    }
    
    int count_divisible(int n, int p, int t){
     if (!(n % p)){
         t++;
        }
     return t;
 }
};
    
    
