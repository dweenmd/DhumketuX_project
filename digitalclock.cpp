#include<bits/stdc++.h>
#include<windows.h>
#include <unistd.h>
using namespace std;

int main()
{

    int h,m,s;
    cout<< "Enter the time 24h formate in (hh -- mm -- ss )\n ";
    cin>> h>> m>>s;
    cout<< "The local 12h formate in (hh -- mm -- ss )\n ";
start:
    for(h; h<24; h++)
    {
        for(m; m<60; m++)
        {

            for (s; s<60; s++)
            {
                system("CLS");

                cout<< "The local 12h formate in (hh -- mm -- ss )\n ";
                if(h<12&& h!=0)
                {

                    cout<<h<<":"<<m<< ":"<<s<<" Am";
                }

                else if(h==0)
                {
                    cout<<h+12<<":"<<m<< ":"<<s<<" Am";
                }


                else if(h==12)
                {
                    cout<<h<<":"<<m<< ":"<<s<<" Pm";
                }
                else if(h>12)
                {

                    cout<<h-12<<":"<<m<< ":"<<s<< " Pm";
                }
                Sleep(890);//mili second delay
                //sleep (1)// 1 second delay

            }
            s=0;

        }
        m=0;
    }
    h=0;
    goto start;
}

