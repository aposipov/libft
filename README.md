# libft

# Linux

To get it work on linux:

+ Install this two packages libbsd-dev and libncurses-dev
+ Add a rule called 'so' in your Makefile to compile your libft in dynamic library instead of static (must be called "libft.so").
+ To make it work in ubuntu you might need to add the flag -nostartfiles

Example (ubuntu):
```
so:
	${CC} -c -nostartfiles -fPIC ${CFLAGS} ${SRCS}
	${CC} -nostartfiles -shared -o libft.so ${OBJ}
```

`make so`  

calloc link https://opensource.apple.com/source/gcc/gcc-5482/libiberty/calloc.c.auto.html

testers  

https://github.com/Tripouille/libftTester  
https://github.com/alelievr/libft-unit-test  
https://github.com/ska42/libft-war-machine
