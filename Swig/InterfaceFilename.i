%module SwigModuleName

%begin %{
#define SWIG_PYTHON_INTERPRETER_NO_DEBUG
%}

%include "stdint.i"
%include "std_string.i"

%{
#include <Library/Library.hpp>
%}

%include "../Library/Library.hpp"

%template(func7) LibraryNamespace::func7<char>;
%template(func7) LibraryNamespace::func7<std::string>;
%template(func7) LibraryNamespace::func7<int>;
%template(func7) LibraryNamespace::func7<double>;

%template(Class3_i_d) LibraryNamespace::Class3<int, double>;
%template(Class3_i_s) LibraryNamespace::Class3<int, std::string>;
%template(Class3_c_i) LibraryNamespace::Class3<char, int>;
%template(Class3_s_s) LibraryNamespace::Class3<std::string, std::string>;
