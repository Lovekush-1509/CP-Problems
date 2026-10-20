class Solution {
    // soln
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            bool valid = true;
            int prevMax = INT_MIN;

            for (int s = 0; s < n; s += k) {
                int mn = nums[s];
                int mx = nums[s];
                int drops = 0;

                // Check whether this block can be sorted
                // using cyclic rotations.
                for (int i = 0; i < k; i++) {
                    int cur = nums[s + i];
                    int next = nums[s + (i + 1) % k];

                    mn = min(mn, cur);
                    mx = max(mx, cur);

                    if (cur > next) {
                        drops++;
                    }
                }

                // A cyclically sorted block has at most
                // one descending pair, including last -> first.
                if (drops > 1 || prevMax > mn) {
                    valid = false;
                    break;
                }

                prevMax = mx;
            }

            if (valid) {
                ans += k;
            }
        }

        return ans;
    }
};