/**
 * src/net.cpp
 *
 * Implements the network utilities.
 *
 * Will Badart <wbadart@live.com>
 * created: JAN 2018
 */

#include <cstdio>       // perror
#include <stdexcept>    // std::runtime_error
#include <sys/socket.h> // socket
#include <sys/types.h>  // req'd by socket.h
#include <wb/net.h>
#define DEFAULT_PROTOCOL (0)

using namespace wb;


TCPSocket::TCPSocket() {
    m_socketfd = socket(AF_INET, SOCK_STREAM, DEFAULT_PROTOCOL);
    if(m_socketfd == -1) {
        perror("Could not create socket");
        throw std::runtime_error("Could not create socket");
    }
}
