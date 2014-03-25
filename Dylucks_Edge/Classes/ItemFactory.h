//
//  ItemFactory.h
//  Dylucks Edge
//
//  Created by Robin Appelvik on 25/03/14.
//
//

#ifndef __Dylucks_Edge__ItemFactory__
#define __Dylucks_Edge__ItemFactory__

#include <iostream>
#include "Item.h"

class ItemFactory {
private:
	Item parseItem();
public:
	Item getItem();	
};

#endif /* defined(__Dylucks_Edge__ItemFactory__) */
