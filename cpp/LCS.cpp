/* Without Dynamic Programming (Naive) Implemention of Longest Common Subsequence*/

#include<iostream>
#include<string.h>

// Utility function to find maximum of two number
int max(int a,int b){
    return (a>b)?a:b;
}

/* function to return length of LCS for x[0..m-1], Y[0..n-1] without using dynamic programming
 The running time of this algorithm is O(2^n) in worst case*/
int lcs(char *X, char *Y, int m, int n){
    if(m==0 || n== 0)
        return 0;
    else if(X[m-1]==Y[n-1])
        return 1+ lcs(X,Y,m-1,n-1);
    else
        return max(lcs(X,Y, m, n-1), lcs(X,Y,m-1, n));
}

// same function as above but this time using dynamic programming but in this case running time will be reduced to O(mn) which is much better than above.
int lcsByDp(char *X, char *Y, int m, int n){
    // Take a Table
    int Table[m+1][n+1];
    
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            // first initialize Table[0][0] with 0
            if(i==0|| j==0)
                Table[i][j]=0;
            else if(X[i-1]==Y[j-1])
                Table[i][j]=Table[i-1][j-1]+1;
            else
                Table[i][j]=max(Table[i-1][j], Table[i][j-1]);
        }
    }
    // The last cell of row and colomn contain the length of LCS
    return Table[m][n];
}

int main(){
    
    char X[]="AGGTABBB";
    char Y[]="GXTXAYBB";
    int m= strlen(X);
    int n= strlen(Y);
    std::cout<<"Length of LCS is: "<<lcsByDp(X,Y,m,n);
    
    // answer should be : GTABB i.e 5
    
    return 0;
    
}


/* The running time of above algorith is 2^n is wrost case */

