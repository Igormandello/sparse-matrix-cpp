#include <iostream>
#include "SparseMatrix.hpp";

using namespace std;

int main()
{
    SparseMatrix<int>* sm = new SparseMatrix<int>();
    sm->add(0, 2, 8);
    cout << sm->get(0, 2);
    return 0;
}
