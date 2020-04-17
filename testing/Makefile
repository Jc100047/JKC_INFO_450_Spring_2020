default: sort

random_write.o: random_write.cpp
	g++ -c random_write.cpp

sorter.o: sorter.cpp
	g++ -c sorter.cpp

sort: random_write.o sorter.o
	g++ -o sorter main.cpp random_write.o sorter.o 

clean:
	rm -f sorter.o sorter.exe
