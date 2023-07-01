// s="abc" ->"","a","b","c","ab","bc","ac","abc"
// n chars--> 2pow(n) powersets
/* 
    counter(decimal)    counter(binary)     subset
        0                   000               ""
        1                   001               "a"  
        2                   010               "b"
        3                   011               "ab"
        4                   100               "c"
        5                   101               "ac" 
        6                   110               "bc"
        7                   111               "abc"
*/
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
void printPowerSet(char* set, int set_size)
{
	unsigned int pow_set_size = pow(2, set_size);
	int counter, j;

	for(counter=0;counter<pow_set_size;counter++) {
		for (j = 0; j < set_size; j++) 
        {
			if (counter & (1 << j))
				cout << set[j];
		}
		cout<<endl;
	}
}
int main()
{
	char set[] = { 'a', 'b', 'c' };
	printPowerSet(set, 3);
	return 0;
}

// TIME COMPLEXITY: O(N*2^N)