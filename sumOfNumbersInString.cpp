#include <iostream>
using namespace std;

int findSum(string str) 
{ 
    string temp = ""; 
  
    int sum = 0; 
  
    for (int i = 0; str[i] != '\0'; i++) 
    { 
        if(str[i] >= '0' && str[i] <= '9')
        {
            temp += str[i];
        }
        else 
        { 
            sum += atoi(temp.c_str());
            temp = ""; 
        } 
    }
    return sum + atoi(temp.c_str()); 
} 
int main() 
{
    string str;
    int T = 0;
    cin >> T;
    for(int i = 0 ; i < T ; i++)
    {
        cin >> str;
        cout << findSum(str) << endl;
    }
    
	return 0;
}
