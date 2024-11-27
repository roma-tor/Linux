CC=g++
CGFLAGS=-c

all: redirect-cin

redirect-cin: main.o
	$(CC) $^ -o $@

main.o: main.cpp
	$(CC) $(CGFLAGS) $^ -o $@

clean:
	rm -rf *.o redirect-cin
	

