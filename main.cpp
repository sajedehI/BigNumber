#include <iostream>
#include <cstdint>

#include "BigNumber.h"

using namespace std;

int main() {
    cout << boolalpha;

//    for(unsigned char i{0}; i <= 127; ++i){
//        std::cout << (int) i << '\t' << i << std::endl;
//    }
    //std::cout << x << std::endl;
//    BigNumber x{-37};
//    string str = "-0000";
//    BigNumber y{str};
//    cout << y << endl;
//    cout << "Enter a number: ";
//    cin >> x;
//    x = -y;
//    BigNumber z = -y;
//    cout << (x != y) << endl;
   // BigNumber myBig1 = -17319;
  //  BigNumber myBig2 = "0000173";
    //cout << BigNumber::unsignedLessOrEqual(myBig1, myBig2) << endl;
    //BigNumber a = BigNumber::unsignedSubtract(myBig1, myBig2);
 //   cout << (myBig1>>3) << "\t" << (myBig1>>3).getSign() << endl;
//    try{
//        cout << BigNumber::unsignedSubtract(myBig1, myBig2) << endl;
//    }
//    catch( out_of_range e){
//        cout << e.what() << endl;
//    }
        BigNumber b1 = 47;
        int8_t b2 = 5;
        BigNumber b3 = 256;
        BigNumber b4 = 1145;
        BigNumber b5 = 1247896;
        BigNumber b6 = 14547856;
        BigNumber b7 = 295;
        cout << "shift to left : " << (b4<<5) << endl;
        cout << "mult by one digit : " << MyBigNumber :: multByOneDigit(b7,b2) << endl;
        cout << "subtract : " << (b3 - b1) << endl;
        cout << "++ : " << b6++ << endl;
        cout << "-- : " << b5-- << endl;


    return 0;
}
