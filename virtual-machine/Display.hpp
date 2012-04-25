#ifndef _DISPLAY
#define _DISPLAY

#include "Device.hpp"
#include "Observer.hpp"
#include <iostream>
using std::cout;
using std::endl;

using namespace std;

class Display : public Device , public Observer {
public:

    Display (ostream& outPut);
    virtual ~Display ();
    virtual void PutChar(char c);
    virtual char GetChar();
    virtual void notify(Event const & someEvent);

private:
    ostream& myOutput;
};

#endif /* end of include guard: _DISPLAY */
