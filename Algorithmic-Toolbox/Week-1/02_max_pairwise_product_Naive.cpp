/*------------To Cover large Dataset Changing int to long Datatype-----------------*/
#include<iostream>
#include<vector>
using namespace std;

int MaxPairwiseProduct(const vector<int>& numbers){
    long long product=0;
    int size=numbers.size();//determining vectors size
    //Multiplying pairs
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            product=max(product,(long long)(numbers[i]*numbers[j]));
        }
    }
    return product;
}
int main(){
    //Taking input from user and storing into a vector
    int size;
    cin>>size;
    vector<int>numbers(size);//declaring a vector with size
    for(int i=0;i<size;++i){
        cin>>numbers[i];
    }

    long long product=0;
    product=MaxPairwiseProduct(numbers);
    cout<<product<<endl;
    return 0;
}