CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGeT = main

OBJS = field.o e_field.o m_field.o main.o

$(TARGeT): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGeT) $(OBJS)

field.o: field.cpp field.h 
	$(CXX) $(CXXFLAGS) -c field.cpp 

e_field.o: e_field.cpp e_field.h field.h 
	$(CXX) $(CXXFLAGS) -c e_field.cpp 

m_field.o: m_field.cpp m_field.h field.h 
	$(CXX) $(CXXFLAGS) -c m_field.cpp 

main.o: main.cpp e_field.h m_field.h field.h 
	$(CXX) $(CXXFLAGS) -c main.cpp 

clean:
	rm -f $(TARGeT) $(OBJS)
