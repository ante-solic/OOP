
#include "vector.hpp"
using namespace std;
int main()
{
    MyVector mv;
    mv.vector_new(1);

    int m;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while (cin >> m) {
        mv.vector_push_back(m);
        mv.print_vector();
        cout << mv.size << " " << mv.capacity;

    }

    cout << "first element " << mv.vector_front() << endl;
    cout << "last element " << mv.vector_back() << endl;
    mv.print_vector();
    
    cout << "removing last element" << endl;
    mv.vector_pop_back();
    mv.print_vector();

    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.capacity << endl;

    mv.vector_delete();
}
