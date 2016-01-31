#include<iostream>

// function
void BubbleSort(int a[], int n){
    // outer for loop runs n-1 times in worst case
    for(int i= 0; i<n-1; i++){
        // take flag to see weather given element is sorted or not
        int flag = 0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+ 1];
                a[j+1]=temp;
                // set flag to 1, means to given arrays is not sorted, so swaping happens
                flag =1;
            }
        }
        if(flag==0)
            break;
    }
}

int main(){
    int n;
    int a[10];
    std::cout<<"enter the number of elements: ";
    std::cin>>n;
    std::cout<<"enter any " <<n<<" elements: ";
    
    for(int i=0; i<n; i++)
    std::cin>>a[i];
    //int a[]={3,10,5,3,2,1};
    BubbleSort(a,n);
    
    std::cout<<"Sorted arrays are: ";
    for(int i=0; i<n; i++)
    std::cout<<a[i]<<" ";
    return 0;
}