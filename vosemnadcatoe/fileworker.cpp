#include <iostream>
#include <cstdlib>
#include <cstring>
#include "save.h"

using namespace std;

FileWorker::FileWorker()
{
   strcpy(m_fileName, "WORR");
   strcpy(m_data, "");
   cout<<"CONSTRYKTOR"<<endl;
}
void  FileWorker::setfileName()
{
    cout<<"Enter filename"<<endl;
    cin>>m_fileName;
    cin.get();
}

void FileWorker::setData()
{
    cout<<"Enter Text"<<endl;
    cin.getline(m_data,Len);

}

void FileWorker::write()
{
    FILE *f=fopen(m_fileName,"wt");
    int realLen = strlen(m_data);
    fwrite(m_data,sizeof(char), realLen, f);
    fclose(f);
}
void FileWorker::readFromFile()
{
   FILE *f=fopen(m_fileName,"rt");
   strcpy(m_data, "");
   memset(m_data,'\0', Len);
   fread(m_data, sizeof(char), Len, f);
   fclose(f);
   cout<< "DATA FROM FILE \n";
   cout<<m_data<<endl;
}
