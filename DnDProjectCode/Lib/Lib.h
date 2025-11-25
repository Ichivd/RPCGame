#pragma once
#include <time.h>
#include <Windows.h>
#include <iostream>
#include <ostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>
#include <assert.h>

int udpServerSocketSetup(SOCKET& s, PCSTR address, u_short port, sockaddr_in* addr, std::string prefix);

int sendtoMsg(SOCKET& s, sockaddr_in* dest_addr, PDataPacket packet, std::string prefix);

int recvfromMsg(SOCKET& s, sockaddr_in* sender_addr, PDataPacket response, std::string prefix);

int sendtorecvfromMsg(SOCKET& s, sockaddr_in* dest_addr, PDataPacket packet, PDataPacket response, std::string prefix);

int recvfromsendtoMsg(SOCKET& s, PDataPacket response, std::string prefix);

//TCP calls


int tcpCommonSocketSetup(SOCKET& s, PCSTR address, u_short port, sockaddr_in* addr, std::string prefix);

int tcpServerSocketSetup(SOCKET& s, PCSTR address, u_short port, sockaddr_in* addr, std::string prefix);

int sendMsg(SOCKET& s, PDataPacket packet, std::string prefix);

int recvMsg(SOCKET& s, PDataPacket response, std::string prefix);

int sendrecvMsg(SOCKET& s, PDataPacket packet, PDataPacket response, std::string prefix);

int recvsendMsg(SOCKET& s, PDataPacket response, std::string prefix);

int getAssignedPort(SOCKET& s, sockaddr_in* my_addr);
