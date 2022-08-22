#include <iostream>
using namespace std;

int main()
{
    int money; cout<<"Enter money: ";
    cin>>money;

    // method1
    // int count100=0,count50=0,count20=0,count1=0;
    // count100+=(money/100);
    // money=money%100;
    // count50=(money/50);
    // money=money%50;
    // count20=(money/20);
    // money=money%20;
    // count1=money;
    // cout<<"100--> "<<count100<<endl;
    // cout<<"50--> "<<count50<<endl;
    // cout<<"20--> "<<count20<<endl;
    // cout<<"1--> "<<count1<<endl;


    // method2 
    // while(money){
    //     if(money/100>0) {
    //         cout<<"100--> "<<money/100<<endl;
    //         money%=100;
    //     }else if(money/50 > 0){
    //         cout<<"50--> "<<money/50<<endl;
    //         money%=50;
    //     }else if(money/20 > 0){
    //         cout<<"20--> "<<money/20<<endl;
    //         money%=20;
    //     }else{
    //         cout<<"1--> "<<money<<endl;
    //         money%=1;
    //     }
    // }


    // method3
    int arr[]={1000,100,50,20,1};
    for(int i=0;i<4;i++){
        if(money/arr[i]>0){
            cout<<arr[i]<<"-->"<<money/arr[i]<<endl;
            money%=arr[i];
        }
    }


    return 0;
}