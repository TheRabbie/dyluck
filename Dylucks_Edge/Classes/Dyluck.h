//
//  Dyluck.h
//  Dylucks Edge
//
//  Created by Robin Appelvik on 25/02/14.
//
//

#ifndef __Dylucks_Edge__Dyluck__
#define __Dylucks_Edge__Dyluck__

#include "cocos2d.h"

class Dyluck {
private:
    bool isMoving;
    cocos2d::Sprite *dyluck;
public:
    Dyluck();
    void setMoving(bool isMoving);
    bool getMoving();
    cocos2d::Sprite* getSprite();
};

#endif /* defined(__Dylucks_Edge__Dyluck__) */
