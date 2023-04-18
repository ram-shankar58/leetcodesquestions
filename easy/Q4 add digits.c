/*Question:
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
*/
//answer:
int addDigits(int num){
    int sum = -99;
    int x = num;
    if (num == 0) return 0;

    while (sum / 10 != 0) {
        sum = 0;
        while (x != 0) {
            sum += x % 10;
            x /= 10;
        }
        x = sum;
    }

    return sum;
   
}
