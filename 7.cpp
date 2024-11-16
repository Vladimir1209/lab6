#include <iostream>
#include <list>
using namespace std;
void reverseNum(std::list<int>& nums) {
    auto it = nums.begin();
    while (it != nums.end()) {
        int reverseElement = -(*it);

        it = nums.insert(it, reverseElement);
        ++it;
        ++it;
    }
}

int main() {
    list<int> nums = {1, 5, 4, -3};
    reverseNum(nums);
    for (const auto& num : nums) {
        cout << num << " ";
    }
   

    return 0;
}
