/*
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""

https://helloacm.com/how-to-compute-the-greatest-common-divisor-of-strings/
*/








//Only Function
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       while (true) {
            if (str1 + str2 != str2 + str1) {
                return "";
            }
            if (str1 == str2) {
                return str1;
            }
            if (str1.size() > str2.size()) {
                str1 = str1.substr(str2.size());
            }
            if (str2.size() > str1.size()) {
                str2 = str2.substr(str1.size());
            }
        }
        return "";
    }
};
