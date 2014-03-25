//
//  Player.cpp
//  Dylucks Edge
//
//  Created by Robin Appelvik on 25/03/14.
//
//

#include "Player.h"

Player::Player(cocos2d::Point origin) {
    this->moving = false;
    this->direction = cpv(0.0, 0.0);
    this->create("CloseNormal.png");
    this->setPosition(cocos2d::Point(100 ,100));
}

bool Player::isMoving() {
    return this->moving;
}

void Player::setIsMoving(bool moving) {
    this->moving = moving;
}

void Player::move(float x, float y) {
    this->direction = cpv(x, y);
}

void Player::stop() {
    this->direction = cpv(0.0, 0.0);
}

/*
cocos2d::Sprite* Dyluck::getSprite() {
    return dyluck;
}

void Dyluck::setMoving(bool isMoving) {
    this->isMoving = isMoving;
}

bool Dyluck::getMoving() {
    return isMoving;
}
*/