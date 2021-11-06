// MAXBRIDGE (November Challenge)
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int i=1;i<3;i++){
        for(int j=i+1;j<=3;j++){
            cout<<i<<" "<<j<<endl;  
        }
    }
    for(int j=3;j<n;j++){
        cout<<j<<" "<<(j+1)<<endl;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m==(n-1)){
            for(int i=1;i<=m;i++){
                cout<<i<<" "<<i+1<<endl;
            }
        }
        else if(m==((n)*(n-1))/2){
            for(int i=1;i<n;i++){
                for(int j=i+1;j<=n;j++){
                    cout<<i<<" "<<j<<endl;
                }
            }
        } 
        else{
            if(m==n){
                solve(n);
            }
            else{
                solve(n);
                int p=0,fact=0;
                for(int i=4;i<=n;i++){
                    for(int j=1;j<i-1;j++){
                        cout<<j<<" "<<i<<endl;
                        ++p;
                        if(p==(m-n)){
                            fact=-1;
                            break;
                        }
                    }
                    if(fact==-1){
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}