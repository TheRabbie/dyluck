//
//  Dyluck.cpp
//  Dylucks Edge
//
//  Created by Robin Appelvik on 25/02/14.
//
//

#include "Dyluck.h"

Dyluck::Dyluck() {
    isMoving = false;
    dyluck = cocos2d::Sprite::create("CloseNormal.png");
    dyluck->setPosition(cocos2d::Point(100, 200));
}

cocos2d::Sprite* Dyluck::getSprite() {
    return dyluck;
}

void Dyluck::setMoving(bool isMoving) {
    this->isMoving = isMoving;
}

bool Dyluck::getMoving() {
    return isMoving;
}