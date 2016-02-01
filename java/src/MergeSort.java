/*  Merge sorting algorithm */
class MergeSort{
    public static void Merge(int left[], int right[], int a[]){
        // find length of all given array;
    int lenA = a.length;
    int lenL = left.length;
    int lenR = right.length;
        
        // declare and initialize three variable for indexes for three arrays
        int i=0; int j=0; int k=0;
        
        // iterate through both array
        while(i<lenL && j<lenR){
            // compare elements from both array and insert smallest into new array
            if(left[i]<right[j]){
                a[k]= left[i];
                i++;
            }else{
                a[k]=right[j];
                j++;
            }
            k++;
        }
        // insert remaining left array into a[] array
        while(i<lenL){
            a[k]=left[i];
            k++; i++;
        }
        // insert remaining right array into a[] array
        while(j<lenR){
            a[k]=right[j];
            k++; j++;
        }
        
    }// merge()
    
    public static void MergeSort(int a[]){
        int n = a.length;
        
        
        if(n< 2){
            return;
        }else{
            // variable to find the mid of array
            int mid = n/2;
            // create two array to sort recursively
            int left[]= new int[mid];
            int right[]= new int[n-mid];
            
            // now store array into left and right
            int i,j;
            for( i=0; i<mid; i++){
                left[i]=a[i];
            }
            for( j=0; j<n-mid; j++){
                right[j]=a[i];
                i++;
            }
            
            
            // sort both array recursively
            MergeSort(left);
            MergeSort(right);
            // Merge both array after sorting into a[]
            Merge(left, right, a);
        }// else
    }//MergeSort()
    
    public static void main (String[] args) {
        int a[]={4,1,0,5,7,6};
        MergeSort(a);
        System.out.print("Sorted array is: ");
        for(int i=0; i<6; i++){
            System.out.print(a[i]+",");
        }
        System.out.println();
    }
}