//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        int temp = num;
        string bits = "";
        
        for(int i=0; i<32; i++){
            if(temp%2==1) bits += '1';
            else bits += '0';
            temp /= 2;
        }
        
        
        cout << bits[i-1] << " ";
        if(bits[i-1]=='1') bits[i-1] = '0';
        else bits[i-1] = '1';
        
        temp = 0;
        int pos = 1;
        
        for(int j=0; j<bits.length(); j++){
            if(bits[j]=='1') temp += pos;
            pos *= 2;
        }
        
        if(bits[i-1] == '0') cout << num << " ";
        cout << temp << " ";
        if(bits[i-1] == '1') cout << num;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends