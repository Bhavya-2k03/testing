#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vec(k);
        int temp=0;
        for(int i=0; i<k; i++) {cin>>vec[i]; temp=max(temp,vec[i]);}


        cout<<"This is for testing purpose only"<<endl;

        cout<<"This is also for testing"<<endl;
        int flag=1, sum1=0, sum2=0;
        for(auto &i:vec)
        {
            if(i!=temp || flag==0)
            {
                sum1+=i-1;
                sum2+=i;
            }
            else flag=0;
        }
        cout<<sum1+sum2<<endl;

    }









return 0;
}