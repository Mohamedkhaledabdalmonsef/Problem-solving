#include <iostream>
#include <cmath>
using namespace std;


int main()
{
//    long long sum=0 ,k=0;
//     for(long long i =pow(2,k)  ; pow(2,k)<10e+9 ; k++,i+=pow(2,k)){
       
//         cout<< i<<endl;
//     }
    
    // cout<< pow(4,3);
  int t,n , m;
  cin>>t;
  while(t--)
  {
        cin>>n>>m;
        long long  sum=0;

       long long  s= (long long )n*(n+1)/2;
      
       long   k =0; 
       while(pow(m,k)<=n){

        sum+=pow(m,k);
       
        k++;
       }


        cout <<  s-2*sum<<endl;
  }


    return 0;
}