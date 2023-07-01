#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lcs( char *X, char *Y, int m, int n ) 
{ 
    int l[m + 1][n + 1]; 
    for (int i = 0; i <= m; i++) 
    { 
        for (int j = 0; j <= n; j++) 
        { 
        if (i == 0 || j == 0) 
            l[i][j] = 0; 
      
        else if (X[i - 1] == Y[j - 1]) 
            l[i][j] = l[i - 1][j - 1] + 1; 
      
        else
            l[i][j] = max(l[i - 1][j], l[i][j - 1]); 
        } 
    } 
    return l[m][n]; 
} 

int main()
{
	char X[]= "aman";
	char Y[]= "anand";
	int m = strlen(X);
	int n = strlen(Y);
	cout<<"lcs is: "<<lcs(X, Y, m, n);

	return 0;
}