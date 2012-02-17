/**
 * @brief Port abstracting for sending messages between 2 devices.
 *
 * @par
 * Copyright Jeremy Wright (c) 2012
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */

#ifndef _IPORT
#define _IPORT
#include "InMemoryPort.h"

namespace K1 {
template <typename MsgType, typename PortHandler>
class IPort {
public:
    IPort& operator<<(MsgType const msg)
    {
        //STUB: Student shall implement this
    	myHandler.WriteMsg(msg);
    	return *this;
    }

    IPort& operator>>(MsgType& msg)
    {
	//STUB: Student shall implement this
    	msg = myHandler.ReadMsg();  // get value from vector
    	return *this;
    }
private:
    PortHandler myHandler;
    /* data */
};

}

#endif /* end of include guard: _IPORT */

