#ifndef _DISPLAY
#define _DISPLAY

#include <ostream>
#include "Device.hpp"


using namespace std;

class Display : public Device {
public:

    Display (ostream& outPut):
        myOutput(outPut)
    {
    }
    virtual ~Display ()
    {
    }
    
    virtual void PutChar(char c)
    {
        myOutput << c;
    }

    virtual char GetChar()
    {
        // Do nothing;
        return 'a';
    }

private:
    ostream& myOutput;
};























#endif /* end of include guard: _DISPLAY */
