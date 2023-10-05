#include <vector>
#include <iostream>
int searchInsert(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left; // Если элемент не найден, возвращаем позицию, куда он должен быть вставлен
}
using namespace std;
int main() {
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    int result1 = searchInsert(nums1, target1); // Ожидаемый результат: 2
    cout<<result1<<"\n";
    
    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    int result2 = searchInsert(nums2, target2); // Ожидаемый результат: 1
    cout<<result2<<"\n";
    
    vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    int result3 = searchInsert(nums3, target3); // Ожидаемый результат: 4
    cout<<result3<<"\n";

    return 0;
}
