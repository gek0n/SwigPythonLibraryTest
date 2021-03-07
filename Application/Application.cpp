#include <Library/Library.hpp>
#include <iostream>
#include <memory>

using namespace LibraryNamespace;

int32_t main(int32_t argc, char **argv) {
  std::cout << "[+] Application started" << std::endl;
  func1();
  func2(0);
  func3(1, 2.123, "qwerty");

  std::cout << "Result of func4: " << func4() << std::endl;
  std::cout << "Result of func5: " << func5() << std::endl;
  std::cout << "Result of func6: " << func6() << std::endl;
  Struct1 inst1;
  std::cout << inst1.toString() << std::endl;
  auto inst2 = std::make_shared<Class2>(inst1);
  std::cout << inst2->toString() << std::endl;
  auto inst3 = std::make_shared<Class2>(2, 123.0, "");
  std::cout << inst3->toString() << std::endl;
  std::cout << "[+] Application ended" << std::endl;
  return 0;
}