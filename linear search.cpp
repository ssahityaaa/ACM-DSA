#include<iostream>
using namespace std;
int main()
{  
    int size, element,flag=0;
    cout<<"Enter size of array "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search "<<endl;
    cin>>element;
    for(int i=0;i<size;i++){
        if(a[i]==element){
            cout<<"element is found at Index "<<i<<endl;
            flag=1;
        }
    }
    if(flag!=1){
        cout<<"Element not found "<<endl;
    }
    
    return 0;
}
