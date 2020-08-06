#include<iostream>
#include<vector>
using namespace std;
int64_t FibRecursFast(int64_t num){
    vector<int64_t> array(num+1);
    array[0]=0;
    array[1]=1;
    for(int i=2;i<=num;++i){
        array[i]=array[i-1]+array[i-2];
    }

    return array[num];
}
int main(){
    int64_t num;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;
    cout<<FibRecursFast(num);    
}