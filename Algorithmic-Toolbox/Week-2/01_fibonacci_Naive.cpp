#include<iostream>
using namespace std;
int FibRecursNaive(int num){
    if(num<=1) return num;
    else return FibRecursNaive(num-1)+FibRecursNaive(num-2);
    
}
int main(){
    int num;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;
    //cout<<"Fibonacci Value of "<<num<<" is "<<FibRecursNaive(num)<<endl;
    cout<<FibRecursNaive(num);
}