#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>

namespace LibraryNamespace {

void func1();
void func2(int32_t arg);
void func3(int32_t arg1, double arg2, std::string arg3);

int32_t func4();
double func5();
std::string func6();

struct Struct1 {
  int32_t field1;
  double field2;
  std::string field3;

  Struct1() {
    std::cout << "<Struct1 " << this << "> Constructing" << std::endl;
  }
  Struct1(Struct1 &arg)
      : field1(arg.field1), field2(arg.field2), field3(arg.field3) {
    std::cout << "<Struct1 " << this << "> Copy constructing" << std::endl;
  }
  ~Struct1() {
    std::cout << "<Struct1 " << this << "> Destroying" << std::endl;
  }

  std::string toString() const;
};

class Class1 {
public:
  Class1() { std::cout << "<Class1 " << this << "> Constructing" << std::endl; }
  virtual ~Class1() {
    std::cout << "<Class1 " << this << "> Destroying" << std::endl;
  }
  virtual std::string toString() const = 0;

protected:
  std::string field1;
};

class Class2 : public Class1 {
public:
  Class2() = delete;
  explicit Class2(Struct1 arg);
  Class2(int32_t arg1, double arg2, std::string arg3);
  ~Class2() override {
    std::cout << "<Class2 " << this << "> Destroying" << std::endl;
  }
  std::string toString() const override;

private:
  Struct1 field2;
};
} // namespace LibraryNamespace

