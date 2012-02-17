/**
 * @brief A Port implementation which stores the transfered values in
 * a private queue.
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */

#ifndef _INMEMORYPORT
#define _INMEMORYPORT
#include <deque>
using std::deque;

namespace K1 {
template <typename MsgType>
class InMemoryPortHandler {
    public:
        void WriteMsg(MsgType const msg)
        {
		//STUB: Student shall implement this.
        	myQueue.push_back(msg);
        }   
        
        MsgType ReadMsg()
        {
            MsgType msg;
		//STUB: The student shall implement this.
            msg = myQueue.front();
            myQueue.pop_front();

            return msg;
        }
    private:
        deque<MsgType> myQueue;
};
}

#endif /* end of include guard: _INMEMORYPORT */
