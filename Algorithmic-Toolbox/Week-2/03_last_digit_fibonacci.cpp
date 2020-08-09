#include<iostream>
#include<vector>
using namespace std;
int64_t FibLastDigitFast(int64_t num){
    vector<int64_t> array(num+1);
    array[0]=0;
    array[1]=1;
    for(int i=2;i<=num;++i){
        array[i]=((array[i-1]%10)+(array[i-2]%10))%10;
    }

    return array[num];
}
int64_t FibLastDigitNaive(int64_t num){
    vector<int64_t> array(num+1);
    array[0]=0;
    array[1]=1;
    for(int i=2;i<=num;++i){
        array[i]=array[i-1]+array[i-2];
    }

    return (array[num] % 10);
}
int main(){
    /* while(true){
        
        vector<int> array1(258678);
        vector<int> array2(258678);
        for(int i=0;i<2586;++i){
            array1[i]=FibLastDigitNaive(i);
            array2[i]=FibLastDigitFast(i);
            if(array1[i]!=array1[i]){
                cout<<"Wrong"<<"\n";
                cout<<"i"<<" "<<array1[i]<<" "<<array2[i];
                break;
            }
            else
            {
                cout<<"ok"<<"\n";
            }
            
        }
        
    } */
        
    int64_t num;
    //cout<<"Enter Number to Find Fibonacci: ";
    cin>>num;  
    //cout<<FibLastDigitNaive(num);
    cout<<FibLastDigitFast(num);


}