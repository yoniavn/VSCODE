

# list - is mutable (add,delete...)
x = [1, 2, 3, 4]
x.append("yoni")
print(x)

# tuple - cant be changed
y = (1, 2, 3, 4, 5)
print(y)

# dictionary
dic = {'a': 1, 'b': 2}
print(dic)


def printList(l):
    for i in l:
        print()


def main():
    letters = ['1', '2', '1', '2', '1', '2']
    print(' : '.join(letters))  # join string : after each element

    printList(letters)
    print(letters)


if __name__ == '__main__':
    main()
