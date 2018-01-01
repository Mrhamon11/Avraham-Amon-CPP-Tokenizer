//
// Created by hamon11 on 12/27/17.
//

#ifndef C_TOKENIZER_TEST_H
#define C_TOKENIZER_TEST_H

#include <set>
#include "Token.h"

//using namespace std;

class Test{
public:
    Test(char lex[], Token::Type type);
    Token getToken();
private:
    Token tk;
    set<string> s;
};

#endif //C_TOKENIZER_TEST_H
