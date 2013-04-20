#ifndef CONST_CASTLEENEMY_H
#define CONST_CASTLEENEMY_H

#include "cocos2d.h"

#include "Entity.h"
#include "Castle.h"

#include "BaseEnemy.h"

using namespace cocos2d;

class CastleEnemy : public BaseEnemy
{
	protected:
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

	private:
		// ===========================================================
		// Inner Classes
		// ===========================================================

		// ===========================================================
		// Constants
		// ===========================================================

		// ===========================================================
		// Fields
		// ===========================================================

		Entity* mShockwave;

		float mShockwaveTime;
		float mShockwaveTimeElapsed;

		float mShockwaveContinueTime;
		float mShockwaveContinueTimeElapsed;

		Castle* mCastle;

		// ===========================================================
		// Constructors
		// ===========================================================

		// ===========================================================
		// Methods
		// ===========================================================
		
		// ===========================================================
		// Virtual Methods
		// ===========================================================

	public:
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

		CastleEnemy(Castle* pCastle);

		// ===========================================================
		// Methods
		// ===========================================================
		
		// ===========================================================
		// Virtual Methods
		// ===========================================================

		Entity* create();

		bool destroy();

		void death();

		bool onCollide();

		Entity* deepCopy();

		void move(float pDeltaTime);

		void update(float pDeltaTime);
};

#endif