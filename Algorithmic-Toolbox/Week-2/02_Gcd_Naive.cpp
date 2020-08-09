#include<iostream>
using namespace std;
long long calculate_gcd(long long numerator,long long denominator){
    long long gcd_result =0;
    for(int64_t i=0; i<(numerator+denominator);++i){
        if(i/numerator && i/denominator) gcd_result=i;
    }
    return gcd_result;
}
int main(){
    /*while(true){
        int size=1000;
        for(int64_t i=0;i<size;++i){
            int16_t num1=rand()%10000000000+20;
            int64_t num2=rand()%10000000000+20;
            int64_t result=calculate_gcd(num1,num2);
            if(result<0){
                cout<<"WRONG";
                cout<<num1<<" "<<num2<<"\n";
                cout<<result<<"\n";
                break;
            }
            cout<<num1<<" "<<num2<<"\n";
                cout<<result<<"\n";
            
        }
    } */
    long long num1=353535;
    long long num2=585326;
    cout<<calculate_gcd(num1,num2);
    
    return 0;
}