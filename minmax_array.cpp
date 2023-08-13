#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int min;
    int max;
    if(arr[0]>arr[1]){
        min = arr[1];
        max = arr[0];
    }
    if(arr[1]>arr[0]){
        min = arr[0];
        max = arr[1];
    }
    
    for(int i=2;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max= arr[i];
        }
    }
    cout<<"the max element is: "<<max<<endl;
    cout<<"the min element is: "<<min;
    
    return 0;
}
