#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int chcount=0;
    int wdcount=1;
    char str[100];
    cout<<"Enter string:";
    cin.get(str,100);

    for( int i=0; i<strlen(str); i++)
    {
        if(str[i]==' ')
            wdcount++;
        else
            chcount++;
    }
    cout<<"\nWord= "<<wdcount<<endl;
    cout<<"letter= "<<chcount<<endl;
    return 0;
}
