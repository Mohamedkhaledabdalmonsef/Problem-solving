#include <iostream>

using namespace std;

int main(){
  int n; cin>>n;
  int a ,b; cin >> a>>b;
  int x ;
  // here make total_money a long long variable to avoid overflow
  //asume that a = 10^9 and b = 10^9 and n = 10^5
  // so the maximum value of x can be 10^9 and the total_money can be 10^14
 long  long total_money=0;
  while (n--){
    cin>>x;
    if(x>=a && x<=b)
     total_money+= x;
    
  }

  cout<<total_money;

    return 0;
}