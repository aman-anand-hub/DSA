// case-2: when last element of the thr row is not 
//greater then the first element of the second row, 
// but matrix is sorted both row wise an colom wise
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void searchMatrix(vector<vector<int> > &Matrix, int target)
{
    if(!Matrix.size())
    {
        cout<<"Invalid matrix size."<<endl;  
    }

    int m= Matrix.size();
    int n= Matrix[0].size();
    int i= 0;
    int j= m-1;
    int found=0;
    while (i<n && j>=0)
    {
        if(Matrix[i][j]==target)
        {
            found= 1;
            cout<<"found at index "<<i<<","<<j;
        }
        if(Matrix[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(found==0)
    {
        cout<<"target element not found."<<endl;
    }
}

int main()
{
    vector<vector<int> > Matrix;
    int m, n;
    cout<<"enter size of matrix: "<<endl;
    cin>>m>>n;
    cout<<"enter the matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int element;
            cin>>element;
            temp.push_back(element);
        }
        Matrix.push_back(temp);
    }
    int target;
    cout<<"Enter the element to be found: "<<endl;
    cin>>target;
    searchMatrix(Matrix, target);

    return 0;
}