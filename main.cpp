#include "Tokenizer.h"
#include "Test.h"

using namespace std;

int main(int argc, char *argv[]) {
    string pth;

    if(argc  > 1){
        pth = std::string(argv[1]);
    }
    else{
        pth = "testFile.cpp";
    }

    Tokenizer tokenizer = Tokenizer(pth);
    Token tk = tokenizer.nextToken();

    while (tk.getType() != Token::END) {
        cout << tk.toString() << endl;
        tk = tokenizer.nextToken();
    }
    cout << tk.toString() << endl;

    return 0;
}
