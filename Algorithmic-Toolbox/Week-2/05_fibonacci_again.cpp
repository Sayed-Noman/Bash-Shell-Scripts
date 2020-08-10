#include<iostream>
#include<vector>
using namespace std;
int64_t computePisano(int64_t num){
    int a=0;
    int b=1;
    int c=a+b;
    /*--------------Finding the Pisano period length-------------*/
    for(int i=0;i<num*num;++i){
        c=(a+b)%num;
        a=b;
        b=c;
        if(a==0 && b==1) return (i+1);// returning length
    }

}
int64_t Fib_Fast(int64_t num, int64_t modValue){
    int64_t remainder = num % computePisano(modValue);

    long long first = 0;
    long long second = 1;

    int64_t res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % modValue;
        first = second;
        second = res;
    }

    return res % modValue;
}
int main(){
    int64_t num,modValue;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;
    cin>>modValue;
    //cout<<"Fibonacci Value of "<<num<<" is "<<FibRecursFast(num)<<endl;
    cout<<Fib_Fast(num,modValue);
}