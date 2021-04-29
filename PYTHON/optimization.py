import random
import time

# use list


def bad_runtime():
    rand_elem = random.sample(range(0, 10000000), 1000)
    list_seq = list(range(1000000))

    count = 0
    for elem in rand_elem:
        if elem in list_seq:
            count += 1

# use set -> unique values


def good_runtime():
    rand_elem = random.sample(range(0, 10000000), 1000)
    list_seq = set(range(1000000))

    count = 0
    for elem in rand_elem:
        if elem in list_seq:
            count += 1


def main():
    start = time.thread_time_ns()*1000000
    print(time.perf_counter)
    end = time.thread_time_ns()*1000000
    print(end-start)


if __name__ == '__main__':
    main()
