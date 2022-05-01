//CODEFORCES PROBLEM MOVE BRACKET... EASY PROBLEM BUT NEW CONEPT OF SUM>>>
// Let's go from left to right over characters of s maintaining the current bracket balance (for the position 
//i the balance is the number of opening brackets on the prefix till the i-th character minus 
//the number of closing brackets on the same prefix).

// If the current balance becomes less than zero, then let's just take some opening bracket after the current posi
//tion (it obviously exists because the number of opening equals the 
//number of closing brackets) and move it to the beginning (so the negative balance becomes zero again and the answer increases by one). Or we can move the current closing bracket to the end of the string because it leads to the same result.


#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            ans++;
        }else{
            ans--;
        }

        if(ans<0){
            ans=0;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}