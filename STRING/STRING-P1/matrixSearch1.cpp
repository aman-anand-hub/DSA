#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int searchMatrix(vector<vector<int> > &matrix, int target)
{
    if(!matrix.size())
    {
        return 0;
    }

    int n= matrix.size();
    int m= matrix[0].size();
    int lo=0;
    int hi=m*n-1;
    int found=0;
    while (lo<=hi)
    {
        int mid= (lo+hi)/2;
        if(matrix[mid/m][mid%m]==target)
        {
            return 1;
        }
        if(matrix[mid/m][mid%m]<target)
        {
            lo= mid+1;
        }
        else
        {
            hi= mid-1;
        }
    }
    return 0;
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
    if(searchMatrix(Matrix, target))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}