#include <iostream>
#include "Client.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    Client client("127.0.0.1", 8000);
    try {
        client.connectToServer();
        char arr[5];
    } catch (const char *msg) {
        cout << "Failed to connect to server. Reason:" << msg << endl;
        exit(-1);
    }
    try {
        int counter = client.playerNumber;
        while(true) {
            counter ++;
            if ((counter % 2) == 0) {
                client.writeFunction();
            } else {
                client.readFunction();
            }
        }
    } catch (const char *msg) {
        cout << "Failed to send exercise to server. Reason: " << msg << endl;
    }
}
