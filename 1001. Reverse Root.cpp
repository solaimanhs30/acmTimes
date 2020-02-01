#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> v;
    long long int a;

    while(1==scanf("%lld",&a)){
        v.push_back(sqrt(a));
    }
    reverse(v.begin(),v.end());
    vector<double> ::iterator it;

    for(it=v.begin();it!=v.end();it++){
        printf("%.4lf\n",*it);
    }

    return 0;
}
