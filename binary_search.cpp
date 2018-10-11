#include<bits/stdc++.h>
#define ve vector
using namespace std;


bool binarySearch(ve<int> v, int n, int k)  // k : search_element
{
    int l=0;
    int h=n-1;
    
    while(l <= h)
    {
      int m = (l+h)/2;
      if(k > v[m])
          l = m+1;
       else if(k < v[m])
          h = m-1;
       else
          return 1;
    }
    return 0;
}


int main()
{
  int n;
  cin>>n;
  ve<int> v(n);
  for(auto &a:v)
    cin>>a;
  
  int search_element;
  cin>>search_element;

  if(binarySearch(v, n, search_element))
    cout<<search_element<<" is Present"<<endl;
  else
    cout<<search_element<<" is NOT Present"<<endl;
    
  return 0;  
}
