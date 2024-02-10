CC = g++
CFLAGS = -g -Wall -Wextra

test:		main.o vector.o
	$(CC) $(CFLAGS) -o test main.o Vector.o
vector.o:	Vector.cpp Vector.h
	$(CC) $(CFLAGS) -c Vector.cpp
main.o:		main.cpp Vector.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	$(RM) test *.o *~
