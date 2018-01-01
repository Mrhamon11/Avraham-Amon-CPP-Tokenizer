//
// Created by hamon11 on 12/27/17.
//

#include "Test.h"

using namespace std;

Test::Test(char lex[], Token::Type type){
    tk = Token(lex, type);
}

Token Test::getToken(){
    return tk;
}

