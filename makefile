CC = g++
OBJS = explorer
SRCS = wrapper.cpp

make:
	${CC} ${SRCS} -o ${OBJS}

clean:
	rm -f explorer

install:
	make
	cp explorer /bin/

uninstall:
	rm /bin/explorer