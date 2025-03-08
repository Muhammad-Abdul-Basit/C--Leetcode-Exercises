#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int number) {
        int temp=number;
        int reverse_number=0;
        while(temp>0)
        {
        	int digit=temp%10;
        	reverse_number=reverse_number*10+digit;
        	temp/=10;
		}
		return(number==reverse_number);
        
    }
};
int main()
{
	char choice;
	do
	{
		int number;
	cout<<" Please enter a positive number and i will tell is it palindrom or not"<<endl;
	cin>>number;
	Solution mysolution;
	mysolution.isPalindrome(number);
	if(mysolution.isPalindrome(number))
	{
		cout<<" number is palindrom"<<endl;
	}
	else
	{
		cout<<" number is not palindrom"<<endl;
	}
	cout<<" Do you want to countine the program, press y and else for termination"<<endl;
	cin>>choice;
	choice=tolower(choice);
	}while(choice=='y');
	return 0;
}
