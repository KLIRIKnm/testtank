#ifndef FUN_H
#define FUN_H
const int Len=100;
class FileWorker
{
    char m_fileName[Len];
    int HP=50;
    int regen;
    char m_data[Len];
    public:
    FileWorker();

    void setfileName();
    void write();
    void setData();
    void readFromFile();

};

#endif // FUN_H
