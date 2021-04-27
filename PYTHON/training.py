import os
import platform

print("start")
print(os.path.dirname("yoni.o"))
print(os.getcwd())

dir = format(platform.python_version())
print(dir)


str = "hello world"
arr = str.split(" ")

print(arr)


fd = open("yoni.o", "w")
fd.write(str)
