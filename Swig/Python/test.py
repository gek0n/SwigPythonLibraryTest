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

inst1 = module.Struct1()
print(inst1.toString())

inst2 = module.Class2(inst1)
print(inst2.toString())
inst3 = module.Class2(2, 123.0, "")
print(inst3.toString())

print("[+] Application ended")

try:
    c1 = module.Class1()
except AttributeError as e:
    print(f'Error creating Class1: {e}')
