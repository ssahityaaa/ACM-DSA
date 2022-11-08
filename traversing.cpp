#include<iostream>
using namespace std;
int main()
{  
    int size;
    cout<<"Enter size of array "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Traversed array "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
