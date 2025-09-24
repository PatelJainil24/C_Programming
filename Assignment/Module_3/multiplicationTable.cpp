#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";

    cin>>num;


    for(int i=0; i< 10;i++)
    {

        cout<< num<<"*"<<i+1<<"="<<num*(i+1)<<endl;

    }


    return 0;
}