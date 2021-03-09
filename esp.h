//* © iYigit. don't forget to star this project if it helped you. Feel free to make a pull request. 

#import <UIKit/UIKit.h>
#import <vector>
struct player_t {
    CGRect topofbox;
    CGRect healthbar;
    CGPoint box;
    CGPoint bottomofbox;
    float health;
    bool enemy;
};
@interface esp : UIView
@property bool espboxes;
@property bool esplines;
@property bool healthbarr;
@property bool distanceesp;
@property std::vector<player_t *> *players;
- (void)Update;
- (void)drawRect:(CGRect)rect;
- (id)initWithFrame:(UIWindow*)main;
@end

//* DISCLAIMER: This project is only for educational purposes. Therefore I'm not responsible for any harm/illegal activity that may happens.

//* © iYigit. don't forget to star this project if it helped you. Feel free to make a pull request.  

