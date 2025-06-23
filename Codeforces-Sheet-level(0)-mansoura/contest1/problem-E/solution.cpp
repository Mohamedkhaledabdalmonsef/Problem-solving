#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int f_dig= n/10;
    int s_dig = n%10;
    
    if(s_dig==0)
    {
        cout<<"YES";
    }
    else if(f_dig == s_dig)
    {
        cout<<"YES";
    }
 
    else if(f_dig%s_dig ==0 || s_dig%f_dig ==0)
    {
        cout<<"YES";
    }
    else  cout<<"NO";

    return 0;
}