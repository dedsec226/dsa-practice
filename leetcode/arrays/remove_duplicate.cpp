#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;

    int i = 0;

    for(int j = 1; j < nums.size(); j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int length = removeDuplicates(nums);

    cout << "Unique count: " << length << "\n";
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}