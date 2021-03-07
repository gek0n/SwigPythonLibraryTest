import SwigModuleName as module

print(f'Module has {dir(module)}')
print(f'Struct1 has {dir(module.Struct1)}')
print(f'Class1 has {dir(module.Class1)}')
print(f'Class2 has {dir(module.Class2)}')
print("[+] Application started")

module.func1()
module.func2(1)
module.func3(1, 2.123, "qwerty")
print(f'Result of func4: {module.func4()}')
print(f'Result of func5: {module.func5()}')
print(f'Result of func6: {module.func6()}')

module.func7('c')
module.func7("qwerty")
module.func7(1)
module.func7(2.0)

inst1 = module.Struct1()
print(inst1.toString())

inst2 = module.Class2(inst1)
print(inst2.toString())
inst3 = module.Class2(2, 123.0, "")
print(inst3.toString())

inst4 = module.Class3_i_d(2, 123.0)
print(inst4.toString())
inst5 = module.Class3_i_s(2, "")
print(inst5.toString())
inst6 = module.Class3_c_i('q', -1)
print(inst6.toString())
inst7 = module.Class3_s_s("string1", "string2")
print(inst7.toString())

print("[+] Application ended")

try:
    c1 = module.Class1()
except AttributeError as e:
    print(f'Error creating Class1: {e}')
