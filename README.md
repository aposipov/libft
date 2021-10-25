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
