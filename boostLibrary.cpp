#include<set>
#include<map>
#include<vector>
#include<string>
#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007
using namespace std;
using boost::multiprecision::cpp_int;


cpp_int C[101];


int main()
{
	C[0]=1;
	C[1]=1;
	for(int i=2;i<101;i++)
	{
		C[i]=0;
		for(int j=0;j<i;j++)
		{
			C[i] += C[j]*C[i-j-1];
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		cout<<C[x]<<endl;
	}

	return 0;
}
