#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}

int main() {
	
	string s = "xnx";
	
		cout<<("%s", isPalindrome(s, 0, s.length() -1) ? "true" : "false");
	
	return 0;
}

vector<int> leader(int arr[], int n){
       vector<int>v;
       int curr_leader=arr[n-1];
       v.push_back(arr[n-1]);
       for(int i=n-2;i>=0;i--){
            if(arr[i]>=curr_leader){
                curr_leader=arr[i];
                v.push_back(curr_leader);
            }
       }
           reverse(v.begin(),v.end());
           return v;
      
        
    }
