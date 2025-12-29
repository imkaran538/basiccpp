#include <iostream>

int main() {
    int arr[100],i,j,n;
    std :: cout<< "Enter the number of elements: ";
    std :: cin >> n;
    std :: cout << "Enter the elements";
    for(i=0;i<n;i++){
        std :: cin >> arr[i];

    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        std :: cout << arr[i] << " ";
    }
    std :: cout << "Hello World";
    return 0;
}
