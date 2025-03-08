#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) 
    {
        string defang_string;
        for (auto it = address.begin(); it != address.end(); it++)
        {
            if (*it == '.')
            {
                defang_string +="[.]";
            }
            else
            {
                defang_string += *it;
            }
        }
        return defang_string;
    }
};
int main()
{
    string ip_address = "192.168.100.1";
    Solution mySolution;
    ip_address=mySolution.defangIPaddr(ip_address);
    cout << ip_address;
    return 0;
}