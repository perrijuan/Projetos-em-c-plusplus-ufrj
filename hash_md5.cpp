#include <iostream>
#include <openssl/md5.h>
#include <string>
#include <cstring>
using namespace std;

 string md5(const std::string& input) {
    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context, input.c_str(), input.length());

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Final(digest, &context);

    char mdString[33];
    for (int i = 0; i < 16; ++i)
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    
    return string(mdString);
}
//estamos usando a bibloteca do ssl para implementar hash, mas tive erro logo pesquisar como se resolve

int main() {
    string input = "Hello World";
    string hash = md5(input);
    cout << "MD5 Hash: " << hash << std::endl;
    return 0;
}

