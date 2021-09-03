#include <iostream>

using namespace std;


int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int count =0;
        if(a+b<=d && c<=e) count++;
        else if(b+c<=d && a<=e) count++;
             else if(a+c<=d && b<=e) count++;
        if(count==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
             
    }

    return 0;
}
