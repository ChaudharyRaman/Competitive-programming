// this is the question on codechef name --- buying sweets.
//starters 36...
#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int n, money;
    cin>>n>>money;
    int ans = 0;
    vector<int>a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int e_cost = a[i]-b[i];
        v.push_back({e_cost,a[i]});
    }
    // we have a vector containing its effective cost...
    sort(v.begin(),v.end());

    for(auto cur:v){
        int e_cost = cur.first, o_cost = cur.second;
        int cb_cost = o_cost - e_cost;
        
        if(money<o_cost){
            continue;
        }
        // concept is simple is that we will decrease the original cost one time and
        // rest we will use effective cost to eleminate the use of cash back...
        // and add cash back in the end...
        // and then move onn to the next.. item..
        money-=o_cost;
        ans++;

        ans+=money/e_cost;

        money = money%e_cost;
        money+=cb_cost;
        //cout<<money;
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