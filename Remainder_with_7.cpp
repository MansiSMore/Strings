/*
Given a number as string(n) , find the remainder of the number when it is divided by 7.

Example 1:
Input:
5
Output:
5
 
Example 2:
Input:
8
Output:
1
 
Your Task: You only need to complete the function remainderwith7() that takes string n as parameter.
Returns an integer which denotes the remainder of the number when its divided by 7.

Constraints:
1<=T<=100
1<=length of n <=300
*/

#include <iostream>
using namespace std;
int remainderWith7(string );

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    string n;
    cin>>n;
    cout<<remainderWith7(n)<<endl;
  }
	return 0;
}

/*You are required to complete this method */
int remainderWith7(string n)
{
    int no = 0;
    for(int i = 0; i < n.length(); i++)
    {
        no = no * 10 + (n[i] - '0');
        no %= 7;
    }
    return no;
}
