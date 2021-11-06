// Hill Sequence (Novmember challenge)
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long int n,a;
        cin>>n;
        vector<int> li,arr,pp;
        map<int,int> zp;
        for(int i=0;i<n;i++){
            cin>>a;
            li.push_back(a);
        }
        set<int> v1(li.begin(),li.end());
        if (v1.size()==1){
            cout<<-1<<endl;
        }
        else if(v1.size()==li.size()){
            sort(li.begin(),li.end(),greater<int>());
            for(int i=0;i<n;i++){
                cout<<li[i]<<" ";
            }
            cout<<endl;
        }
        else{
            int fact=0;
            for(int i=0;i<n;i++){
                if(zp.count(li[i])==0){
                    zp[li[i]]=1;
                }
                else{
                    zp[li[i]]+=1;
                    if(zp[li[i]]>2){
                        fact=-1;
                        break;
                    }
                }
            }
            int p=*max_element(li.begin(),li.end());
            map<int,int> :: iterator c;
            if(fact==0 && zp[p]==1){
                for(c=zp.begin();c!=zp.end();c++){
                    if((c->second)>1){
                        arr.push_back(c->first);
                        pp.push_back(c->first);
                    }
                    else if((c->first)!=p){
                        pp.push_back(c->first);
                    }
                }
                sort(arr.begin(),arr.end());
                arr.push_back(p);
                sort(pp.begin(),pp.end(),greater<int>());
                for(int j=0;j<arr.size();j++){
                    cout<<arr[j]<<" ";
                }
                for(int j=0;j<pp.size();j++){
                    cout<<pp[j]<<" ";
                }
                cout<<endl; 
            }
            else if(fact==-1 || zp[p]>1){
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}