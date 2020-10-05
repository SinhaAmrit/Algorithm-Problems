/*
* @author : Amrit Sinha
* Date : October 5, 2020
* GitHub : /SinhaAmrit
* CodePen : /SinhaAmrit
* Facebook : /codiizone
* Instagram : /codiizone
* Website : https://codiizone.blogspot.com
* Type : Warmup
* Topic : Complete the function solveMeFirst to compute the sum of two integers.
Function prototype:
int solveMeFirst(int a, int b);
where,
a is the first integer input.
b is the second integer input
Return values
sum of the above two integers

Sample Input
a = 2
b = 3
Sample Output
5
Explanation

The sum of the two integers  and  is computed as: 2+3=5.
*/

//Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
