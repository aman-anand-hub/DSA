/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=3, n2=4, n3=5; 
    int a[n1] = {1, 2, 3},
    b[n2] = {2, 3, 4, 5},
    c[n3] = {3, 5, 7, 8, 9};


    cout<<"common elements in the three arrays are: "<<endl;

    int i=0,j=0,k=0;
    while (i<n1 && j<n2 && k<n3)
    {
        if (a[i]==a[j]==c[k])
        {
            cout<<a[i]<<endl;
            i++;j++;k++;
        }
        else if (a[i]<b[j])
        {
            i++;
        }
        else if (a[i]>b[j])
        {
            j++;
        }
        else{
            k++;
        }
    }

    return 0;
}

     */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int,int> ma;
            map<int,int> mb;
            map<int,int> mc;
            vector<int> a;
            for(int i=0;i<n1;i++)
            {
                ma[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                mb[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                mc[C[i]]++;
            }
            for(int i=0;i<n1;i++)
            {
                if(ma[A[i]] && mb[A[i]] && mc[A[i]])
                {
                    ma[A[i]]=0;
                    a.push_back(A[i]);
                }
            }
            return a;
        }

//  Driver Code Starts.

int main ()
{
    cout<<"enter sizes of array: "<<endl;
    int n1, n2, n3; 
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];
    cout<<"enter the arrays: "<<endl;
        
    for (int i = 0; i < n1; i++) cin >> A[i];
    cout<<endl;
    for (int i = 0; i < n2; i++) cin >> B[i];
    cout<<endl;
    for (int i = 0; i < n3; i++) cin >> C[i];
    cout<<endl;
        
    vector <int> res = commonElements (A, B, C, n1, n2, n3);
    if(res.size () == 0)
    {
        cout << -1;
    }
    for (int i = 0; i < res.size (); i++) 
    {
        cout << res[i] << " ";
    }

    return 0;
} 