CXX = g++
exe = main.out
obj = main.o print.o

all: $(obj)
	$(CXX) -o $(exe) $(obj)

%.o: %.cpp
	$(CXX) -c $^ -o $@

.PHONY: clean
clean:
	rm *.o
