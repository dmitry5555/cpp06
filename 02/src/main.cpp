#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cassert>
#include <iostream>

int main() {
 
    // Тест 1: Проверка, что generate() возвращает не nullptr
    Base base;
    Base* obj = base.generate();
    assert(obj != nullptr);

    // Тест 2: Проверка, что возвращаемый объект является экземпляром класса A, B или C
    A* a_obj = dynamic_cast<A*>(obj);
    B* b_obj = dynamic_cast<B*>(obj);
    C* c_obj = dynamic_cast<C*>(obj);

    assert(a_obj != nullptr || b_obj != nullptr || c_obj != nullptr);

    // Очистка памяти
    delete obj;
    std::cout << "All tests ok!" << std::endl;

    return 0;
}