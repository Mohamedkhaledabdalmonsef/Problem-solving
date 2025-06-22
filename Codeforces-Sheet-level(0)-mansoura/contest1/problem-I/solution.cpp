#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;

int main(){
   /*
   🧠 Common Pattern:
   If each unit (resistor, tap, person, CPU) does part of the job independently, 
   and they are all connected to the same input, the parallel rule applies.
   You're essentially summing rates of work, and then computing the total time or resistance from the combined rate.
   
   Rule for two parallel resistors:
   1/R_total = 1/R1 + 1/R2
   or
   R_total = (R1 * R2) / (R1 + R2)
    
   */

   // k is the capacity of tank, and use string here because the range  from [1 , 10^50]
   // not store it any variable in c++ because it is too large
     string k ; int n;
     cin >> k >> n;

     int temp; float sum=0;
     for(int i=0 ; i< n ; i++){
        cin>>temp;
        sum+= (float)1/temp;
     }

      double res = 1/sum;
     cout << fixed << setprecision(6);
     cout << res;
    

    return 0;
}