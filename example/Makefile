CC=g++

all: example

example: example.cpp
	$(CC) -std=gnu++11 -I$(SOFTPOSITPATH)/source/include -I../include $< -o $@ ../lib/lib_cordic.a $(SOFTPOSITPATH)/build/Linux-x86_64-GCC/softposit.a

clean:
	rm -rf example