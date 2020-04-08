CC=g++

all: lib/lib_cordic.a

obj/lib_cordic.o: source/cordic.cpp
	@ mkdir -p obj
	$(CC) -O1 -std=gnu++11 -c -I$(SOFTPOSITPATH)/source/include -I./include source/cordic.cpp -o obj/lib_cordic.o

lib/lib_cordic.a: obj/lib_cordic.o
	@ mkdir -p lib
	ar rcs lib/lib_cordic.a obj/lib_cordic.o

clean:
	rm -rf obj/ lib/
