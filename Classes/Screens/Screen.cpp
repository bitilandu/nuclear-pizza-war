#ifndef CONST_SCREEN
#define CONST_SCREEN

#include "Screen.h"

// ===========================================================
// Inner Classes
// ===========================================================

// ===========================================================
// Constants
// ===========================================================

// ===========================================================
// Fields
// ===========================================================

// ===========================================================
// Constructors
// ===========================================================

// ===========================================================
// Methods
// ===========================================================

// ===========================================================
// Virtual Methods
// ===========================================================

// ===========================================================
// Constructors
// ===========================================================

Screen::Screen()
{
	this->scheduleUpdate();
}

// ===========================================================
// Getters
// ===========================================================

// ===========================================================
// Setters
// ===========================================================

// ===========================================================
// Methods
// ===========================================================

// ===========================================================
// Virtual methods
// ===========================================================

bool Screen::containsTouchLocation(CCTouch* touch)
{
	return CCRectMake(-Options::CAMERA_WIDTH / 2, -Options::CAMERA_HEIGHT / 2, Options::CAMERA_WIDTH, Options::CAMERA_HEIGHT).containsPoint(convertTouchToNodeSpaceAR(touch)); // TODO: I should check this instructions;
}

void Screen::onEnter()
{
	CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
	CCScene::onEnter();
}

void Screen::onExit()
{
	CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
	CCScene::onExit();
}

#endif