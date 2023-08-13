#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n-1;
    
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
    cout<<"the reversed array is: ";
    for(int j=0; j<n;j++){
        cout<< arr[j]<<" ";
    }
    
    return 0;
}
