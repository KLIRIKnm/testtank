#ifndef SAVE_H
#define SAVE_H
const int Len=100;

class SAVE
{
   char m_data[Len];
public:
    SAVE();
    void setfileName();
    void write();
    void setData();
};

#endif // SAVE_H
