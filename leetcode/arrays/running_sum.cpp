#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> ans(nums.size());
    ans[0] = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = runningSum(nums);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}