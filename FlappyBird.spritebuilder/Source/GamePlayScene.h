//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here; can be accessed anywhere in GamePlayScene class
    Character*      character; //type character; stores an instance of Flappy Bird
    CCPhysicsNode*  physicsNode; //type CCPhysicsNode; references a node that simulates physics
    float timeSinceObstacle;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
