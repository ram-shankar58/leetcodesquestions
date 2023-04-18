/* question
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105
*/
//answer
#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

int trap(int* height, int heightSize){
    int left_max[heightSize], right_max[heightSize];
    int i, output=0;

    left_max[0] = height[0];
    for(i=1; i<heightSize; i++) {
        left_max[i] = MAX(height[i],left_max[i-1]);
    }
    right_max[heightSize-1] = height[heightSize-1];
    for(i=heightSize-2; i>=0; i--) {
        right_max[i] = MAX(height[i],right_max[i+1]);
    }

    for(i=0; i<heightSize;i++) {
        output = output+ MIN(right_max[i],left_max[i])-height[i];
    }
    return output;
}
