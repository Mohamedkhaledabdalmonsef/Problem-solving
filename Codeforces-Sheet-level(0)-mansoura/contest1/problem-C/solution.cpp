#include <iostream>


using namespace std;

int main(){

    int n; cin>>n;

    char *arr = new char[n+1];

    int count_A=0;
    int count_D=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]=='A'){
            count_A++;
        } else if(arr[i]=='D'){
            count_D++;
        }
    }
    arr[n] = '\0'; // Null-terminate the string

    cout<< (count_A > count_D ? "Anton" : (count_D > count_A ? "Danik" : "Friendship")) << endl;

     delete []arr;
    
    return 0;
}