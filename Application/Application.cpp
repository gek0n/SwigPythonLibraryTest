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

  func7('c');
  func7(std::string("qwerty"));
  func7(1);
  func7(2.0);

  Struct1 inst1;
  std::cout << inst1.toString() << std::endl;
  auto inst2 = std::make_shared<Class2>(inst1);
  std::cout << inst2->toString() << std::endl;
  auto inst3 = std::make_shared<Class2>(2, 123.0, "");
  std::cout << inst3->toString() << std::endl;

  auto inst4 = std::make_shared<Class3<int, double>>(2, 123.0);
  std::cout << inst4->toString() << std::endl;
  auto inst5 = std::make_shared<Class3<int, std::string>>(2, "");
  std::cout << inst5->toString() << std::endl;
  auto inst6 = std::make_shared<Class3<char, int>>('q', -1);
  std::cout << inst6->toString() << std::endl;
  auto inst7 =
      std::make_shared<Class3<std::string, std::string>>("string1", "string2");
  std::cout << inst7->toString() << std::endl;

  std::cout << "[+] Application ended" << std::endl;
  return 0;
}