#ifndef BIGNUMBER_MYBIGNUMBER_H
#define BIGNUMBER_MYBIGNUMBER_H
#include "BigNumber.h"

class MyBigNumber : public BigNumber
{
public:
    static BigNumber multByOneDigit( const BigNumber& num1,const int8_t &num2 );

};
#endif //BIGNUMBER_MYBIGNUMBER_H
