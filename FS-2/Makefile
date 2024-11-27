
all: simple-copy

copy: main.o
	$(CC) $^ -o $@

main.o: main.cpp
	g++ -c $^ -o $@

clean:
	rm -rf *.o simple-copy

