/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Example 1:

Input:
N = 10
Output: 12
Explanation: 10th ugly number is 12.
Example 2:

Input:
N = 4
Output: 4
Explanation: 4th ugly number is 4.
Your Task:
You don't need to read input or print anything. Your task is to complete the function getNthUglyNo() which takes an integer n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 104

*/




// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull list[n+1];
	    list[1] =1;
	    
	    int p2=1, p3=1, p5=1;
	    
	    for(int i=2; i<=n; i++) {
	        ull fact1 = 2 * list[p2];
	        ull fact2 = 3 * list[p3];
	        ull fact3 = 5 * list[p5];
	        
	        ull minm = min(fact1, min(fact2, fact3));
	        
	        list[i] = minm;
	        
	        if(minm == fact1) {
	            p2++;
	        }
	        if(minm == fact2) {
	            p3++;
	        }
	        if(minm == fact3) {
	            p5++;
	        }
	    }
    return list[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
