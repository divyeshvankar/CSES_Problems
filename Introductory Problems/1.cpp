#include<bits/stdc++.h>
using namespace std;


// Time limit: 1.00 s
// Memory limit: 512 MB



// Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
// $$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$
// Your task is to simulate the execution of the algorithm for a given value of n.
// Input
// The only input line contains an integer n.
// Output
// Print a line that contains all values of n during the algorithm.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 3 10 5 16 8 4 2 1

// 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 
// 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 
int main()
{
    long long n;cin>>n;

    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n +1;
        }
    }
    cout<<n;

    return 0;
}