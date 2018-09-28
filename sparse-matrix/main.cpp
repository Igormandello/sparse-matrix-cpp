#include <iostream>
#include "SparseMatrix.hpp";

using namespace std;

int main()
{
    SparseMatrix<int>* sm = new SparseMatrix<int>();
    sm->add(1, 2, 8);
    cout << sm->get(1, 2);
    return 0;
}
