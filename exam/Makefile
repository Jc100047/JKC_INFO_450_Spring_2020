default: exam

account.o: account.cpp account.h
	g++ -c account.cpp
	
checking.o: checking.cpp checking.h
	g++ -c checking.cpp

savings.o: savings.cpp savings.h
	g++ -c savings.cpp

creditcard.o: creditcard.cpp creditcard.h
	g++ -c creditcard.cpp

main.o: main.cpp account.h savings.h checking.h creditcard.h
	g++ -c main.cpp
	
exam: account.o checking.o savings.o creditcard.o main.o
	g++ -o exam account.o checking.o savings.o creditcard.o main.o
	
clean:
	rm -f creditcard.o savings.o checking.o account.o exam.exe
	

	
	