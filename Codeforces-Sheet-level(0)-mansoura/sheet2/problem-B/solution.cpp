#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    int num;
    for(int i=0; i<n ;i++)
    {
        cin>> num;
        if(num==x)
        {
            cout<< i;
            return 0;
        }
    }

    cout<< "Not Found";

    return 0;
}