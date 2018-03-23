#include <stdio.h>		// printf()
#include <stdlib.h>		// atoi()
#include <sys/socket.h>	// socket(), bind(), listen(), accept()
#include <unistd.h>		// close()

#include "helpers.h"	// make_server_sockaddr()

static const int MAX_MESSAGE_SIZE = 256;

/**
 * Receives a string message from the client, prints it to stdout, then
 * sends the integer 42 back to the client as a success code.
 *
 * Parameters:
 * 		connectionfd: File descriptor for a socket connection (e.g. the one
 *			returned by accept())
 * Returns:
 *		0 on success, -1 on failure.
 */
int handle_connection(int connectionfd) {
	// TODO: Implement this function

	// (1) Receive message from client.

	// (2) Print out the message

	// (3) Send response code to client

	// (4) Close connection

	return -1;
}

/**
 * Endlessly runs a server that listens for connections and serves
 * them _synchronously_.
 *
 * Parameters:
 *		port: The port on which to listen for incoming connections.
 *		queue_size: Size of the listen() queue
 * Returns:
 *		-1 on failure, does not return on success.
 */
int run_server(int port, int queue_size) {
	// TODO: Implement the rest of this function
	
	// (1) Create socket

	// (2) Set the "reuse port" socket option

	// (3) Create a sockaddr_in struct for the proper port and bind() to it.
	struct sockaddr_in addr;
	if (make_server_sockaddr(&addr, port) == -1) {
		return -1;
	}

	// (4) Begin listening for incoming connections.

	// (5) Serve incoming connections one by one forever.
	while (true) {

	}
}

int main(int argc, const char **argv) {
	// Parse command line arguments
	if (argc != 2) {
		printf("Usage: ./server port_num\n");
		return 1;
	}
	int port = atoi(argv[1]);
	printf("Starting server on port %d\n", port);

	if (run_server(port, 10) == -1) {
		return 1;
	}
	return 0;
}
