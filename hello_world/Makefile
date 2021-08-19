CC=gcc

all: hello_world.elf hello_world_sep.elf

hello_world.elf: hello_world.c
	$(CC) -o $@ $^

hello_world_main.o: hello_world_main.c
	$(CC) -c -o $@ $^

hello_world_print.o: hello_world_print.c
	$(CC) -c -o $@ $^

hello_world_sep.elf: hello_world_main.o hello_world_print.o
	$(CC) -o $@ $^
	
clean: 
	rm *.elf *.o
