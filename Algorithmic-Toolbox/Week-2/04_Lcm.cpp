#include<iostream>
using namespace std;
 int64_t calculate_Ecuclid_Gcd(int64_t numerator, int64_t denominator){
     if(denominator==0) return numerator; //Base case
     int tempDenominator= numerator%denominator;
     calculate_Ecuclid_Gcd(denominator,tempDenominator);
 }
int64_t calculate_lcm(int64_t numerator,int64_t denominator){
    return (numerator*denominator)/calculate_Ecuclid_Gcd(numerator,denominator);
}
int main(){
    int64_t num1,num2,lcm_result;
    cin>>num1;
    cin>>num2;
    lcm_result=calculate_lcm(num1,num2);
    cout<<lcm_result;
    return 0;
}