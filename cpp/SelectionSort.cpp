#include<iostream>

void SelectionSort(int a[], int n){
    
    // loop till end
    for(int i=0; i<n; i++){
        // choose first index as minimum
        int iMin =i;
        // to find minimum from list, compare each index element with first element
        for(int j=i+1; j<n; j++){
            if(a[j]<a[iMin])
            iMin = j;
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
    
}// SelectionSort

int main(){
    int a[] = {2,1,5,3};
    SelectionSort(a, 4);
    for(int i=0; i<4; i++)
    std::cout<<a[i]<<" ";
    return 0;
}