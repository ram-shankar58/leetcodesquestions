/*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.

Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.

Example 3:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= num <= 3999*/

char * intToRoman(int num){
    char *string = (char *)calloc(20, sizeof(char));
    int k = 0;
    while (num > 0) {
        while (num >= 1000) {
            string[k] = 'M';
            num -= 1000;
            k++;
        }
        if (num >= 900) {
            string[k] = 'C'; string[k + 1] = 'M';
            k += 2;
            num -= 900;
        }
        while (num >= 500) {
            string[k] = 'D';
            num -= 500;
            k++;
        }
        if (num >= 400) {
            string[k] = 'C'; string[k + 1] = 'D';
            k += 2;
            num -= 400;
        }
        while (num >= 100) {
            string[k] = 'C';
            num -= 100;
            k++;
        }
        if (num >= 90) {
            string[k] = 'X'; string[k + 1] = 'C';
            k += 2;
            num -= 90;
        }
        while (num >= 50) {
            string[k] = 'L';
            num -= 50;
            k++;
        }
        if (num >= 40) {
            string[k] = 'X'; string[k + 1] = 'L';
            k += 2;
            num -= 40;
        }
        while (num >= 10) {
            string[k] = 'X';
            num -= 10;
            k++;
        }
        if (num >= 9) {
            string[k] = 'I'; string[k + 1] = 'X';
            k += 2;
            num -= 9;
        }
        while (num >= 5) {
            string[k] = 'V';
            num -= 5;
            k++;
        }
        if (num >= 4) {
            string[k] = 'I'; string[k + 1] = 'V';
            k += 2;
            num -= 4;
        }
        while (num >= 1) {
            string[k] = 'I';
            num -= 1;
            k++;
        }
    }
    return string;
    }
