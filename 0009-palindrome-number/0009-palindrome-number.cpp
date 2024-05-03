class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0, temp = x; // Initialize variables: y to store reversed number, temp as a copy of x
        if (x < 0)
            return false; // Negative numbers are not palindromes
        
        // Reverse the digits of x and store in y
        while (temp) {
            y = y * 10 + temp % 10; // Append the last digit of temp to y
            temp /= 10; // Remove the last digit from temp
        }
        
        // Check if the reversed number y is equal to the original number x
        if (x == y)
            return true; // x is a palindrome
        else
            return false; // x is not a palindrome
    }
};