/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21

Constraints:

-2^31 <= x <= 2^31 - 1*/

int reverse(long int x){
    long int temp;
    int a;
    long int r=0;
    int sign;
    temp=x;
    if (x>=0){
        sign=1;
        temp*=sign;
    }
    else{
        sign=-1;
        temp*=sign;
    }
    while (temp>0){
        a=temp%10;
        temp/=10;
        r=r*10+a;
    }
    r*=sign;
    if (r>=-2147483648 && r<=2147483647){
        return r;
    }
    else{
        return 0;
    }

}
