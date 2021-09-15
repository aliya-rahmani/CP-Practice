#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    const char *arr[4]={"North","East","South","West"};
    while(t--){
        
        int n; cin>>n;
        cout<<arr[n%4]<<endl;
        
    }

    return 0;
}
