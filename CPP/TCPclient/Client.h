#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H


class Client {
public:
    Client(const char *serverIP, int serverPort);
    void connectToServer();
    void readFunction();
    int playerNumber;
    void writeFunction();
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
};


#endif //CLIENT_CLIENT_H
