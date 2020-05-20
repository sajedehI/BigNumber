#include "mybignumber.h"

BigNumber MyBigNumber::multByOneDigit(const BigNumber &num1, const int8_t &num2)
{
    MyBigNumber mult;
    mult.BigNumber::sign = true;
    mult.numOfDigits = (num1.getNumOfDigits()+1);
    mult.numArray = new int8_t[mult.numOfDigits];
    size_t i{0};
    int8_t carry = 0;
    int8_t s;

    for(;i<num1.getNumOfDigits();i++) {

        s = num1[i] * num2 + carry;
        carry = s / 10;
        mult[i] = (s % 10);

    }

    if (carry == 1) {
        mult[i] = 1;
    }
    else if (carry == 0) {

        mult.numOfDigits -= 1;
    }

    if(num1.getSign() == false){

        mult.sign = false;

    }

    return mult;




}

