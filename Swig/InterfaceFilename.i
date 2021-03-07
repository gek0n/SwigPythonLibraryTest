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
