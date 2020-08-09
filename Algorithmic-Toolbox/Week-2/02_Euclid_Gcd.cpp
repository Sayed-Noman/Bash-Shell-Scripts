#include<iostream>
using namespace std;
 int64_t calculate_Ecuclid_Gcd(int64_t numerator, int64_t denominator){
     if(denominator==0) return numerator; //Base case
     int tempDenominator= numerator%denominator;
     calculate_Ecuclid_Gcd(denominator,tempDenominator);
 }
int main(){
    int64_t num1,num2,gcd_result;
    cin>>num1;
    cin>>num2;
    gcd_result=calculate_Ecuclid_Gcd(num1,num2);
    cout<<gcd_result;
    return 0;
}