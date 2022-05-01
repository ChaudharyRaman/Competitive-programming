// THIS IS THE CODEFORCES QUESTION ROAD TO ZERO>>>>

#include<bits/stdc++.h>
using namespace std;

void Solve(){
    long long int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(x>y){
        swap(x,y);  //making sure y will always the greatest number..
    }
    long long int ans1 = (x+y) * a; // answer1 is when we use only m1 to reach the zero position..
    long long int ans2 = (y-x) * a + x*b;// we move y to x pos and then move bothh...

    cout<<min(ans1,ans2)<<endl;// here we have to check which is best way i.e. min cost...
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