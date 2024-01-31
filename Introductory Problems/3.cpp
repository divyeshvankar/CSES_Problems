#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int n=s.size();
    int ans=INT_MIN;
    int i=0;
    while(i<n)
    {
        int j=i;
        int cnt=0;
        while(j<n && s[i]==s[j])
        {
            // cout<<s[j];
            cnt++;
            j++;
        }

        ans=max(cnt,ans);
        i=j;
        

    }
    cout<<ans<<endl;
    return 0;
}



// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3