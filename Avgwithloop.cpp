#include <iostream>
using namespace std;
int main() {
    int n,i,no;
    float sum=0,avg=0;
    cout<<"enter the no of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the number"<<(i+1);
        cin>>no;
        sum=sum+no;
    }
    avg=sum/n;
    cout<<"average of numbers: "<<avg;
    return 0;
}
