#include<bits/stdc++.h>
#define ve vector
using namespace std;

ve<int> parent;

int find(int a)
{
	return a == parent[a] ? a : parent[a] = find(parent[a]);
}

void join(int a, int b)
{
	parent[find(b)] = find(a);
}

bool check(int a, int b)
{
	return find(a) == find(b);
}


int main()
{
	int n;
	cin>>n;
	parent.resize(n);
	for(int i=0;i<n;i++)
		parent[i]=i;

	return 0;
}
