
#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,a,b,count =0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]== '0'){
                count = count + a;
            }
            else if(s[i]== '1'){
                count = count + b;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
