#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> list = LinkedList<int>();
    std::cout << "is empty: " << list.isEmpty() << std::endl;
    std::cout << "size: " << std::to_string(list.getSize()) << std::endl;
    std::cout << "add: " << std::endl;
    list.add(5);
    list.add(6);
    list.add(7);

    std::cout << "size: " << std::to_string(list.getSize()) << std::endl;
    std::cout << "at: " << std::to_string(list.at(1)) << std::endl;

    return 0;
}
