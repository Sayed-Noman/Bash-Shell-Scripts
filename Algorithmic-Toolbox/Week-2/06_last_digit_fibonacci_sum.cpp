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
//Sum of  Fibonacci series(F[0]+F[1]+F[3]+......+F[N]==F[N+2]+F[2])
int64_t claculate_Sum_last_digit(int64_t num){
    int64_t n_plus_2_fibs_last_digit=Fib_Fast(num+2,10);
    int64_t second_fibs_last_digit=Fib_Fast(2,10);
    
    if(n_plus_2_fibs_last_digit>=second_fibs_last_digit) return (n_plus_2_fibs_last_digit-second_fibs_last_digit);
    else return ((10+n_plus_2_fibs_last_digit)-second_fibs_last_digit);
    
}
int main(){
    int64_t num;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;
    //cout<<"Fibonacci Value of "<<num<<" is "<<FibRecursFast(num)<<endl;
    cout<<claculate_Sum_last_digit(num);
}