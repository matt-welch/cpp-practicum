#ifndef _DISPLAY
#define _DISPLAY

#include <ostream>
#include "Device.hpp"


using namespace std;

class Display : public Device {
public:

    Display (ostream& outPut);

    virtual ~Display ();
    
    virtual void PutChar(char c);

    virtual char GetChar();

private:
    ostream& myOutput;
};

#endif /* end of include guard: _DISPLAY */
