#include<iostream>
#include<vector>
#include <cassert>
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
int FibRecursNaive(int num){
    if(num<=1) return num;
    else return FibRecursNaive(num-1)+FibRecursNaive(num-2);
    
}
void test_solution() {
    assert(FibRecursFast(3) == 2);
    assert(FibRecursFast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(FibRecursNaive(n) == FibRecursNaive(n));
}

int main(){
    int64_t num;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;
    //cout<<"Fibonacci Value of "<<num<<" is "<<FibRecursFast(num)<<endl;
    //test_solution();
    cout<<FibRecursFast(num);
    //cout<<FibRecursNaive(num);
    
}