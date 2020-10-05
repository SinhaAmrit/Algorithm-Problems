/*
* @author : Amrit Sinha
* Date : October 5, 2020
* GitHub : /SinhaAmrit
* CodePen : /SinhaAmrit
* Facebook : /codiizone
* Instagram : /codiizone
* Website : https://codiizone.blogspot.com
* Type : Warmup
* Topic : Given an array of integers, find the sum of its elements.
For example, if the array ar=[1,2,3],1+2+3=6, so return 6.
ar: an array of integers
Input Format:
The first line contains an integer, n, denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.

Constraints
0<n,ar[i]<=1000;
Output Format
Print the sum of the array's elements as a single integer.

Sample Input
6
1 2 3 4 10 11
Sample Output
31
Explanation

We print the sum of the array's elements: 1 + 2 + 3 + 4 + 10 + 11 = 31.
*/
//Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long int N, Sum = 0, i, Num;
    cin>>N;
    for (i = 1 ; i <= N ; i++){
        cin>> Num;
        Sum += Num;
    }
    cout<<Sum<<endl;   
    return 0;
}
