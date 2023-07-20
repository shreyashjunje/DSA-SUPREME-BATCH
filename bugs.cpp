#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>nums) {
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main() {
    vector<int> nums{1, 2, 3, 2, 2, 4, 2};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}