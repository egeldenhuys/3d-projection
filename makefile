all: projection.out

projection.out: Point2D.o Point3D.o main.o
	g++ -Wall -std=c++11 Point2D.cpp Point3D.cpp main.cpp -o projection.out

run: projection.out
	./projection.out

clean:
	rm *.o *.out
