CC=g++
CGFLAGS=-c

all: manual-append

manual-append: main.o
	$(CC) $^ -o $@

main.o: main.cpp
	$(CC) $(CGFLAGS) $^ -o $@

clean:
	rm -rf *.o manual-append
