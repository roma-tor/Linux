all: program

program: main.o complex_number.o sorting.o
	g++ $^ -o $@

main.o: main.cpp complex_number.h sorting.h
	g++ -c $< -o $@

complex.o: complex_number.cpp complex_number.h
	g++ -c $< -o $@

sort.o: sorting.cpp sorting.h complex_number.h
	g++ -c $< -o $@

clean:
	rm -rf *.o program

