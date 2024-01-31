
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n-1,0);

    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }

    int x=0;
    for(int i=0;i<n-1;i++)
    {
        x^=v[i]^(i+1);

    }

    cout<<(x^n)<<endl;




    return 0;
}

// Time limit: 1.00 s
// Memory limit: 512 MB



// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints

// 2 \le n \le 2 \cdot 10^5

// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4


