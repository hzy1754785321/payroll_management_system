main:main.o employee.o saleman.o technician.o salemanager.o
	g++ -c main.o employee.o saleman.o technician.o salemanager.o -o main
clear:
	rm *.o main -rf
