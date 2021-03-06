#pragma once
#include <SFML/Graphics.hpp>
#include "StateMachine.h"
#include "AudioManager.h"
#include "Board.h"

//the window instance
extern sf::RenderWindow window;
extern sf::Color backgroundColor;
extern bool playerOnesTurn;
//the global width and height of the entire window
extern int w;
extern int h;
//mouse position, so I can access it globally easily
extern int mouseX;
extern int mouseY;
//State machine
extern StateMachine* states;
//sound
extern AudioManager* audio;
//For resolving between the 2 main game states
extern Board* contestedBoard;
