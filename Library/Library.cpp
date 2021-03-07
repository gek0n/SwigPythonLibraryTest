#include "Library.hpp"

namespace LibraryNamespace {

void func1() { std::cout << "<func1>" << std::endl; }

void func2(int32_t arg) {
  std::cout << "<func2> Argument: " << arg << std::endl;
}

void func3(int32_t arg1, double arg2, std::string arg3) {
  std::cout << "<func3> Argument 1: " << arg1 << " Argument 2: " << arg2
            << " Argument 3: " << arg3 << std::endl;
}

int32_t func4() {
  std::cout << "<func4>" << std::endl;
  return 47;
}

double func5() {
  std::cout << "<func5>" << std::endl;
  return -0.12;
}
std::string func6() {
  std::cout << "<func6>" << std::endl;
  return "value from func6";
}

std::string Struct1::toString() const {
  std::stringstream ss;
  ss << "<Struct1 " << this << "> Field 1: " << field1;
  ss << " Field 2: " << field2;
  ss << " Field 3: " << field3;
  return ss.str();
}

std::string Class1::toString() const {
  std::stringstream ss;
  ss << "<Class1 " << this << "> Field 1: " << field1;
  return ss.str();
}

Class2::Class2(Struct1 arg) {
  std::cout << "<Class2 " << this << "> Constructing" << std::endl;
  field2 = arg;
}

Class2::Class2(int32_t arg1, double arg2, std::string arg3) {
  std::cout << "<Class2 " << this << "> Constructing" << std::endl;
  field2.field1 = arg1;
  field2.field2 = arg2;
  field2.field3 = arg3;
}

std::string Class2::toString() const {
  std::stringstream ss;
  ss << "<Class2 " << this << "> Field 1: " << field1;
  ss << " Field 2: " << field2.toString();
  return ss.str();
}

} // namespace LibraryNamespace