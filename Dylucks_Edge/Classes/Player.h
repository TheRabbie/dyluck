//
//  Player.h
//  Dylucks_Edge
//
//  Created by Robin Appelvik on 25/03/14.
//
//

#ifndef Dylucks_Edge_Player_h
#define Dylucks_Edge_Player_h

#include "cocos2d.h"
#include "chipmunk.h"
#include "Level.h"

class Player : public cocos2d::Sprite {
private:
    bool moving;
    cpVect direction;
public:
    Player(cocos2d::Point origin);
    void setIsMoving(bool moving);
    bool isMoving();
    void move(float x, float y);
    void stop();
    cocos2d::Sprite getDyluck();
};


#endif
