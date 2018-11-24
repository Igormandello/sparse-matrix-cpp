#include <iostream>
#include "SparseMatrix.hpp";

using namespace std;

int main()
{
    SparseMatrix<int>* sm = new SparseMatrix<int>();
    sm->add(1, 2, 8);
    sm->add(1, 1, 4);
    sm->add(1, 3, 10);

    sm->add(2, 3, 11);
    cout << *sm;
    cout << sm->get(1, 2);
    return 0;
}
