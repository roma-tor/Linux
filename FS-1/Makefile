all: read-file

read-file: main.o
	g++ $^ -o $@

main.o: main.cpp
	g++ -c $^ -o $@

clean:
	rm -rf *.o read-file

