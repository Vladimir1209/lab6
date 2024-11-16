#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void Sort(std::list<int>& nums) {
    nums.sort(std::greater<int>());
}

int main() {
    std::list<int> nums = {1, 5, 4, -3};
    Sort(nums);
    for (const auto& num : nums) {
        std::cout << num << " ";
    }

}
