import os
import platform

print("start")
print(os.path.dirname("yoni.o"))
print(os.getcwd())

dir = format(platform.python_version())
print(dir)


str1 = "hello world"
arr = str1.split(" ")

print(arr)

fd = open("yoni.o", "w")
fd.write(str1)

words = ['one', 'two', 'three', 'four', 'five', 'six']

for i in words:
    print(i * 2)


numbers = "1 2 3 4 5 6 7 8 9"
num_arr = numbers.split(" ")
print(num_arr)


def createList(size=10):
    l = []
    if size < 0:
        return []
    for i in range(size):
        l.append(str(i))
    return l


list1 = createList(20)
print(list1)

for i in list1:
    print("{:>2}",end = " " .format(i))


a = 8
b = 9
x = f'seven {a:>05} {b:>05}'
print('x is {}'.format(x))

