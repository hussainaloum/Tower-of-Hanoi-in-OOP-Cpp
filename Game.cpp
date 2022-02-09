#include "Game.h"
#include "Stack.h"
#include "uiuc/HSLAPixel.h"
#include "uiuc/Cube.h"
#include <iostream>



//Create three empty stacks
Game::Game()
{
    for(int i = 0; i < 3; i++)
    {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }

    //Create the four cubes, placing each on the [0]th stack:
    Cube blue(4, uiuc::HSLAPixel::BLUE);
    stacks_[0].push_back(blue);

    Cube orange(3, uiuc::HSLAPixel::ORANGE);
    stacks_[0].push_back(orange);

    Cube purple(2, uiuc::HSLAPixel::PURPLE);
    stacks_[0].push_back(purple);

    Cube yellow(1, uiuc::HSLAPixel::YELLOW);
    stacks_[0].push_back(yellow);
}

void Game::solve() {
    // Prints out the state of the game:
    std::cout << *this << std::endl;

    // @TODO -- Finish solving the game!
    while(stacks_[2].size() != 4)
    {
        _legalMove(0,1);
        _legalMove(0,2);
        _legalMove(1,2);
    }
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}

void Game::_legalMove(unsigned index1, unsigned index2)
{
    if(stacks_[index1].size() == 0 && stacks_[index2].size() > 0)
    {
        _move(index2, index1);
    } 
    else if(stacks_[index1].size() > 0 && stacks_[index2].size() == 0)
    {
        _move(index1, index2);
    } 
    else if(stacks_[index1].size() > 0 && stacks_[index2].size() > 0)
    {
        if(stacks_[index1].peekTop().getLength() < stacks_[index2].peekTop().getLength())
        {
            _move(index1, index2);
        }
        else
        {
            _move(index2, index1);
        }
    }

    std::cout << *this << std::endl;
}

void Game::_move(unsigned index1, unsigned index2)
{
    Cube cube = stacks_[index1].removeTop();
    stacks_[index2].push_back(cube);
}