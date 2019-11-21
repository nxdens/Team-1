#pragma once

#include <iostream>
#include <string>
#include <tuple>
#include "../General/Sprite.h"
#include "../Physics/BasicGravity.h"
#include "../Physics/Momentum.h"
#include <SDL.h>


class Asteroid : public Sprite
{
	private:
		int radius;
		int velocity;
		float direction;
		std::pair<int, int> position;
		std::string sprite;
		long mass;
		float veloX = (float(rand()) / float(RAND_MAX)) - .5;
		float veloY = (float(rand()) / float(RAND_MAX)) - .5;
		
	public:
		Asteroid();
		Asteroid(SDL_Rect dBox, SDL_Texture* aTex);
		int getRadius();
		int getVelocity();
		float getDirection();
		long getMass();
		std::pair<int, int> getPosition();
		std::string getSprite();
		void setRadius(int r);
		void setVelocity(int v);
		void setDirection(float d);
		void setPosition(std::pair<int, int> newPos);
		void setSprite(std::string s);
		void setMass(long m);
		float getVeloX();
		float getVeloY();
		void setVeloX(float vX);
		void setVeloY(float vY);
		void updateMovement(std::vector<Sprite*> &osSprite, int ZONE_WIDTH, int ZONE_HEIGHT);
		void collision_checker(SDL_Rect* a, std::vector<Sprite*> &osSprite, int mode);

};
