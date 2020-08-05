/*------------To make Naive Algorithm fast find first and second maximum number-----------------*/
#include<iostream>
#include<vector>
using namespace std;

int MaxPairwiseProduct(const vector<int>& numbers){
    int size=numbers.size();//determining vectors size
    //Finding First maximum number
    int maxIndex=-1;
    for(int i=0;i<size;++i){
        if((maxIndex==-1)||(numbers[i]>numbers[maxIndex])) maxIndex=i;
    }
    // cout<<"maxindex-"<<maxIndex<<endl;

    int secondMaxIndex=-1;
    for(int j=0;j<size;++j){
        if((numbers[j] != numbers[maxIndex]) && ((secondMaxIndex==-1)||(numbers[j]>numbers[secondMaxIndex]))) secondMaxIndex=j;
    }
    //cout<<"Second Max-"<<secondMaxIndex<<endl;

    return ((long long)numbers[maxIndex])*numbers[secondMaxIndex];
}
int main(){
    //Taking input from user and storing into a vector
    int size;
    cin>>size;
    vector<int>numbers(size);//declaring a vector with size
    for(int i=0;i<size;++i){
        cin>>numbers[i];
    }

    long long product1=0,product2=0;
    product1=MaxPairwiseProduct(numbers);
    //to check a large dataset
    //product2=MaxPairwiseProduct(vector<int>(100000,0));
    cout<<product1<<endl;
    //cout<<product2<<endl;
    return 0;
}