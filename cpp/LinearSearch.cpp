/*
Problem Statement:
Linear Search: Given an integer array and an element x, find if element is present in array or not. If element is present, then print index of its first occurrence. Else print -1.

Input:
First line contains an integer, the number of test cases ‘T’. Each test case should be an integer. Size of the array ‘N’ in the second line. In the third line, input the integer elements of the array in a single line separated by space. Element X should be inputted in the fourth line, i.e., after entering the elements of array. Repeat the above steps second line onwards for multiple test cases.
Output:
Print the output in a separate line returning the index of the element X. If the element is not present, then print -1.
Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100

*/

#include<iostream>
#include<string>
using namespace std;

// function to find the element x int array arr[]
int LinearSearch(int arr[], int n, int x){
    
    // iterate through the array  
    for(int i=0; i<n; i++)
    {
        
        // if data is matching then return index of that element
        if(arr[i]== x){
            return i;
        }
    }
    // else return -1
    return -1;
}


int main(){
    
    // Given size of array, test case and number of element in array should be less that 100
    int arr[100], nTestCase, nArraySize;
    
    //In first line, Input the number of test case you want
    std::cout<<"Enter No of test case: ";
    std::cin>>nTestCase;
    
    // One by One run for all input test case
    while(nTestCase>0){
        // In second line enter the size of an array
        std::cout<<"Enter size of array: ";
        std::cin>>nArraySize;
        
        // In third line enter elements in array
        std::cout<<"Enter elements in array";
        for(int i=0; i<nArraySize; i++){
            std::cin>>arr[i];
        }
        
        //In forth line Enter the element to be searched
        std::cout>>"enter the element to be searched"
        int x;
        std::cin>>x;
        
        // print the index of element after searching
        std::cout<<LinearSearch(arr,nArraySize, x);
        
        nTestCase--;
        
    }
    
    return 0;
    
}

