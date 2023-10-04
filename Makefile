main-1: main-1-1.cpp
	@clang++ Textbased.cpp Animals.cpp Carrots.cpp Chickens.cpp Cows.cpp Crops.cpp Farm.cpp Farmland.cpp Potatoes.cpp Sheep.cpp Wheat.cpp -lsfml-graphics -lsfml-window -lsfml-system -o main -Wall
	@./main
