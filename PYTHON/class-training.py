

class Spi:
    addr = '0x01'

    def transfer(self, txBuff, rxBuff):
        print("send data: {} receive data: {}".format(txBuff,rxBuff))


def main():
    spi = Spi()
    spi.transfer([0x1,0x2,0x3], [])


if __name__ == '__main__': main()