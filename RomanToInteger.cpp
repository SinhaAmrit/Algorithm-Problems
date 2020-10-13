/*
* @author : Amrit Sinha
* Date : October 13, 2020
* GitHub : /SinhaAmrit
* CodePen : /SinhaAmrit
* Facebook : /codiizone
* Instagram : /codiizone
* Website : https://codiizone.blogspot.com
* Topic : Roman to Integer [13]
* Problem :
_Description_
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
_For example,_ 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

_Example 1:_

Input: s = "III"
Output: 3

_Example 2:_

Input: s = "IV"
Output: 4

_Example 3:_

Input: s = "IX"
Output: 9

_Example 4:_

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

_Example 5:_

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

*Constraints:*

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T = { { 'I' , 1 }, { 'V' , 5 }, { 'X' , 10 }, { 'L' , 50 }, { 'C' , 100 }, { 'D' , 500 }, { 'M' , 1000 } };
        int sum = T[s.back()];
        for(int i = s.length() - 2; i >= 0; --i){
            sum +=  (T[s[i]] < T[s[i+1]] ? -T[s[i]] : T[s[i]]);
        }
        return sum;
    }
};
