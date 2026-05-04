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
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twosum(nums, 4, target, &returnSize);

    if(result != nullptr) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    free(result); // good practice
    return 0;
}
