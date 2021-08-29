# include<iostream>
# include<climits>
using namespace std;

int firstNonRepeating(string str) {
    int fi[256];
    for (int i = 0; i < 256; i++)
    {
        fi[i]=-1;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(fi[str[i]]==-1)
        {
            fi[str[i]]=i;
        }
        else
        {
            fi[str[i]]=-2;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if(fi[i]>=0)
        {
            res = min(res, fi[i]);
        }
    }
    if(res == -1)
    {
        return -1;
    }
    else
    {
        return res;
    }
}

int main(){
	string str;
    cout<<"enter thr string: "<<endl;
	cin>>str;
	int firstIndex = firstNonRepeating(str);
	if (firstIndex == -1)
		cout<<"Either all characters are repeating or string is empty";
	else
		cout<<"First non-repeating character is "<< str[firstIndex];
	
	return 0;
}