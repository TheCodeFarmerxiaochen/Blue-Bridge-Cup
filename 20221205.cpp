#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0];
    int min=a[0];
    float sum=a[0];
    for(int j=1;j<n;j++){
      sum=sum+a[j];
       if(max<a[j])
       max = a[j];
       if(min>a[j])
       min =a[j];
    }
    cout<<endl;
    float age= sum/n;
    cout<<max<<endl<<min<<endl<<age<<endl;
  return 0;
}