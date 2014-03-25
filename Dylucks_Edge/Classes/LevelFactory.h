//
//  LevelFactory.h
//  Dylucks Edge
//
//  Created by Robin Appelvik on 25/03/14.
//
//

#ifndef __Dylucks_Edge__LevelFactory__
#define __Dylucks_Edge__LevelFactory__

#include "Level.h"

class LevelFactory {
private:
	Level level;
	Level parseLevel(int id);
public:
	Level getLevel(int id);

};


#endif /* defined(__Dylucks_Edge__LevelFactory__) */

