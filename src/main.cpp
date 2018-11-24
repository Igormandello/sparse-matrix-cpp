#include <iostream>
#include "SparseMatrix.hpp"

using namespace std;

int main() {
  SparseMatrix<char> *sm = new SparseMatrix<char>('.');
  sm->add(1, 2, 'a');
  sm->add(1, 1, 'b');
  sm->add(1, 3, 'c');
  sm->add(2, 3, 'd');

  cout << *sm << endl;
  cout << sm->get(1, 2) << endl;
  cout << sm->get(1, 0) << endl << endl;
  return 0;
}
