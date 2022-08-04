#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int user=89;
     char yorn;
   do{ const int p=5;
     const int t=30;
     int user;


    char star[p][t]={"Mg Mg",
                    "Pann Pwint Nwe",
                    "Moe Htet Yan",
                    "Zaw Zaw",
                    "Aye Aye"};
    char str[p][t]={"PoukKone,1/BMN(N)35642",
                    "HanTae,1/BMN(N)938635",
                    "SinKone,1/BMN(N)47683",
                    "Mansi,1/BMN(N)20586",
                    "TharSi,1/BMN(N)74963"};
    for(int i=0; i<p; i++)
    {
        cout<<"("<<i+1<<")"<<" "<<star[i]<<" "<<endl;
    }
    cout<<"Enter no. what you know:";
    cin>>user;
    cout<<endl;

    (user==1)?cout<<str[0]<<endl:
    (user==2)?cout<<str[1]<<endl:
    (user==3)?cout<<str[2]<<endl:
    (user==4)?cout<<str[3]<<endl:
    (user==5)?cout<<str[4]<<endl:

        cout<<"Error"<<endl;
        cout<<endl;

        cout<<"Do you wanna find next people(y/n):";
        cin>>yorn;

   }while(yorn != 'n');


    return 0;
}
