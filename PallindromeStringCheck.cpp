#include <bits/stdc++.h>
using namespace std;

int main() {
	string str1;
	cin>>str1;
	int start=0;
	int end=str1.size()-1;
	bool flag=0;
	while(start<end)
	{
		if(str1[start]==str1[end])
		{
			flag=1;
		}
		else{
			flag=0;
		}
		start++;
		end--;
	}
	if(flag)
	{
		cout<<"Given String  is pallindrome"<<endl;
	}
	else{
		cout<<"Given string is not pallindrome"<<endl;
	}
	return 0;
}
