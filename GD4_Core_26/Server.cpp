#include "SocketWrapperPCH.hpp"
#include "Server.hpp"
#include <iostream>

int main()
{
	SocketUtil::StaticInit();
	SocketUtil::CreateUDPSocket(SocketAddressFamily::INET);
	std::cout << "Winsock2 started, UDP socket created..." << std::endl;
	SocketUtil::CleanUp();
}
