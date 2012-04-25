/**
 * @brief 
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _REGFILE
#define _REGFILE

#include <map>
#include <string>
using namespace std;


namespace K1 {

    class RegFile{
        public:
            enum RegName {
                A,
                B,
                I,
                PC,
                SP
            };
            RegFile (){}
            virtual ~RegFile (){}
            uint32_t GetRegister(RegName reg) const;
            void PutRegister(RegName reg, uint32_t data);

            //

        private:
            map<RegName, uint32_t> _registers;
    };
}


#endif /* end of include guard: _REGFILE */
