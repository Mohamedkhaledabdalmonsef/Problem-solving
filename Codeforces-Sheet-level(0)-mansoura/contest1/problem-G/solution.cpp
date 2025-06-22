#include<iostream>
using namespace std;



int main(){

    // initial cost for first banana
    int k; cin>>k;
   // number of dollars the solider has
    int n; cin>>n;
  // number of bananas the solider wants to buy
    int w; cin>>w;

    int total_cost =0; 
    for(int i=0 ; i<w ; i++){
        total_cost+=k*(i+1);
    }
    int res =total_cost-n;

    if (res>0) cout<<res;
    else cout<< 0;
        
        

    return 0;
}