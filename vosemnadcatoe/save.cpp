#include "save.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

SAVE::SAVE()
{
    strcpy(m_fileName, "WORR");
    strcpy(m_data, "");
    cout<<"CONSTRYKTOR"<<endl;
}
SAVE::FileWorker()
{

}
void  SAVE::setfileName()
{
    cout<<"Enter filename"<<endl;
    cin>>m_fileName;
    cin.get();
}

void SAVE::setData()
{
    cout<<"Enter Text"<<endl;
    cin.getline(m_data,Len);

}

void SAVE::write()
{
    FILE *f=fopen(m_fileName,"wt");
    int realLen = strlen(m_data);
    fwrite(m_data,sizeof(char), realLen, f);
    fclose(f);
}
