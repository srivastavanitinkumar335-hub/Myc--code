#include <iostream>
#include <cstdlib>
using namespace std;

int* twosum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return nullptr;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* nums = (int*)malloc(n * sizeof(int));

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int returnSize;
    int* result = twosum(nums, n, target, &returnSize);

    if(result != nullptr) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    free(nums);     // free input array
    free(result);   // free result array
    return 0;
}
