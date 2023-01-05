#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack S;
    createStack_1301210503(S);
    infotype x;

    x = 'A';
    push_1301210503(S, x);
    x = 'T';
    push_1301210503(S, x);
    x = 'A';
    push_1301210503(S, x);
    x = 'D';
    push_1301210503(S, x);
    x = 'R';
    push_1301210503(S, x);
    x = 'U';
    push_1301210503(S, x);
    x = 'T';
    push_1301210503(S, x);
    x = 'K';
    push_1301210503(S, x);
    x = 'U';
    push_1301210503(S, x);
    x = 'R';
    push_1301210503(S, x);
    x = 'T';
    push_1301210503(S, x);
    x = 'S';
    push_1301210503(S, x);
    printInfo_1301210503(S);
    cout << endl;

    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    pop_1301210503(S);
    printInfo_1301210503(S);

    return 0;
}
