
#ifndef _DEVICE
#define _DEVICE


class Device {
public:

    virtual ~Device (){};
    virtual void PutChar(char) = 0;
    virtual char GetChar() = 0;
private:
    /* data */
};

#endif /* end of include guard: _DEVICE */
