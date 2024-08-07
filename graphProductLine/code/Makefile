CXX=g++
CXXFLAGS=-MMD
OBJECTS=main.o GraphApp.o Node.o Edge.o
DEPENDS=${OBJECTS:.o=.d}
EXEC= graphApp

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}
