
#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int s; cin>>s;
        int diff=0;
        for(int i=0;i<=n ;i++){
            if(s - i<=n){
                int newdiff = (s - i) - i;
                diff = max(diff, newdiff);
            }
            
        }
        cout<<diff<<endl;
        
    }

    return 0;
}
