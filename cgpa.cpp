#include<bits/stdc++.h>
using namespace std;
float mul(float a,float b)
{
    return a*b;
}
float gpa(float a)
{
    if(a>=80)
        return 4.00;
    else if(a<80&&a>=75)
        return 3.75;
    else if(a<75&&a>=70)
        return 3.50;
    else if(a<70&&a>=65)
        return 3.25;
    else if(a<65&&a>=60)
        return 3.00;
    else if(a<60&&a>=55)
        return 2.75;
    else if(a<55&&a>=50)
        return 2.50;
    else if(a<50&&a>=45)
        return 2.25;
    else if(a<45&&a>=40)
        return 2.00;
    else if(a<40)
        return 0;


}
int main()
{
    float n,m,c,soc=0,sog=0;
    string s;
    cout<< "Enter the student name: ";
    getline (cin,s);
    cout<< "Enter total subject: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<< "Enter mark subject no "<<i<<" :";
        cin>>m;
        cout<< "Enter credit of subject no "<<i<<" :";
        cin>>c;
        soc=soc+c;
        sog=sog+mul(c,gpa(m));
    }
    cout<<"\nDear "<<s<<" your"<<" Cgpa is : "<<fixed<<setprecision(2)<<sog/soc<<endl;

    return 0;
}

