class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int max_area = 0, n = height.size(), first = 0, last = n-1;
        while (first<last){
            max_area = max(max_area, (last-first)* min(height[first],height[last]));
            height[first]<height[last] ? first++ : last--;
        }
        return max_area;
    }
};