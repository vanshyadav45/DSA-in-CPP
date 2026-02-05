class Solution {
public:
    int binarySearch(vector<int>& nums, int left, int right, int target, int &ans) {
        if (left > right) return ans;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            ans = mid;
            return ans;
        }
        else if (target < nums[mid])
            return binarySearch(nums, left, mid - 1, target, ans);
        else
            return binarySearch(nums, mid + 1, right, target, ans);
    }

    int search(vector<int>& nums, int target) {
        int ans = -1;
        binarySearch(nums, 0, nums.size() - 1, target, ans);
        return ans;
    }
};
