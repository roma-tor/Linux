CC=g++
CGFLAGS=-c

all: hacker-rm

hacker-rm: main.o
	$(CC) $^ -o $@

main.o: main.cpp
	$(CC) $(CGFLAGS) $^ -o $@

clean:
	rm -rf *.o hacker-rm

