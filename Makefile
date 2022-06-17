objects = App.o SearchFile.a

App: $(objects)
	g++ -o App $(objects)

App.o: App.cpp SearchFile.h
	g++ -c -o App.o App.cpp -Wall -std=c++17 -lstdc++fs -L -lSearchFile
	
clean:
	rm App App.o
	