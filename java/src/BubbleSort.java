class BubbleSort{
    public static void main (String[] args) {
        /* code */
        int[] a = {5,2,10,0,1};
        SortBuble(a, 5);
        System.out.println("Sorted arrays are: ");
        for(int i=0; i<5; i++)
        System.out.print(a[i]+ " ");
        System.out.println();
    }// main
    
    // Add you comment here
    
    
    // sorting function
    public static void SortBuble(int a[], int n){
        for(int i= 0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j]= a[j+ 1];
                    a[j+1]=temp;
                }
            }
        }
    }// SortBuble

}// BubbleSort