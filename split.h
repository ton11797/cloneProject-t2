#include<iostream>
#include"linklist.h"
using namespace std;

int split(char word[],int *a)
{
    int positioncomma[200],valueofcomma=0,positionsplit=0;
    node *t;
    ll A;
    for(int i=0;i<200;i++)
    {

        if(word[i]=='/')
        {
            positioncomma[valueofcomma]=i;
            //cout<<positioncomma[valueofcomma]<<endl;
            valueofcomma++;
        }
    }
    for(int i=0;i<valueofcomma+1;i++)
    {
        char copychar[200];
        for(int j=0;j<200;j++)
        {
            if(word[positionsplit]!='/'&&word[positionsplit]!='\0')
            {
             copychar[j]=word[positionsplit];
             positionsplit++;
            }
            else
            {
                copychar[j]='\0';
                positionsplit+=1;
                break;

            }
        }

        t=new node(copychar);
        A.addnode(t);

    }
    A.showall(a);
    return A.getsize();
}
