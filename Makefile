CXX=g++
CXXFLAGS=-std=c++14 -MMD -Werror=vla
OBJECTS=a4q1.o
DEPENDS=${OBJECTS:.o=.d}
EXEC=a4q1

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}

