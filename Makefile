main-1: main-1-1.cpp
	@clang++ Animals.cpp Carrots.cpp Chickens.cpp Cows.cpp Crops.cpp Farm.cpp Farmland.cpp main-1-1.cpp Potatoes.cpp Produce.cpp Sheep.cpp Textbased.cpp Wheat.cpp -o main -Wall
	@./main