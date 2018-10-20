/**
 * include/wb/net.h
 *
 * Interface for the network utilites.
 *
 * Will Badart <wbadart@live.com>
 * created: JAN 2018
 */

#include <cstdlib>  // size_t
#include <string>   // std::string

namespace wb {


class Socket {
  public:
  private:
};  // end:class Socket


class TCPSocket {
  public:

    /*! Constructs/ destructs socket object for easy TCP connectivity. */
    TCPSocket();
    ~TCPSocket();

    /*! Claim port for socket's communication. */
    void bind(size_t port, size_t backlog=0);

    /*! Listen for incoming connections. */
    void listen();

    /*! Accept an incoming connection. */
    TCPSocket accept();

    /*! Shut the socket down. */
    void close();

    /*! Read up to maxbytes from the socket. */
    std::string recv(size_t maxbytes=BUFSIZ);
    void recvbytes(char *buffer, size_t maxbytes=BUFSIZ);

    /*! Send a message over the socket. */
    void send(std::string message);
    void send(char *message, size_t maxbytes=BUFSIZ);

    /*! Send a file over the socket. */
    void sendfile(std::string path);

  private:

    /*! Internal socket object. */
    int m_socketfd;

};  // end:class TCPSocket


class UDPSocket {
  public:
  private:
};  // end:class UDPSocket


}  // end:namespace wb
