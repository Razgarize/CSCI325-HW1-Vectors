CC = g++
CFLAGS = -g -Wall -Wextra

vector:		main.o vector.o
	$(CC) $(CFLAGS) -o vector main.o Vector.o
vector.o:	Vector.cpp Vector.h
	$(CC) $(CFLAGS) -c Vector.cpp
main.o:		main.cpp Vector.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	$(RM) Vector *.o *~
