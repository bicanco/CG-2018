#ifndef _SPIDER_H_
#define _SPIDER_H_

#include<vector>

using namespace std;

typedef struct{
	GLfloat x,y;
}point;

typedef point vec2D;

typedef struct{
	vector<point> articulations;
	GLint attachment;
}leg;

typedef vector<point> bodyPart;

void init();
void display();
void mouse(GLint, GLint, GLint, GLint);

void build_body();
void build_legs();
void draw_legs();
void draw_body();


#define norm(a) sqrt(a.x*a.x+a.y*a.y) 
#define dot(a,b) a.x*b.x+a.y*b.y

#define LINE_SIZE 1
#define ANIMATION_SPEED 10



#define NUMBER_OF_BODY_PARTS 4

#define CEPHALOTHORAX_X 0
#define CEPHALOTHORAX_Y 0
#define CEPHALOTHORAX_X_SIZE 30
#define CEPHALOTHORAX_Y_SIZE 30

#define ABDOMEN_X 0
#define ABDOMEN_Y -75
#define ABDOMEN_X_SIZE 45
#define ABDOMEN_Y_SIZE 45

#define LEFT_EYE_X -5
#define LEFT_EYE_Y 20
#define LEFT_EYE_X_SIZE 4
#define LEFT_EYE_Y_SIZE 8

#define RIGHT_EYE_X 5
#define RIGHT_EYE_Y 20
#define RIGHT_EYE_X_SIZE 4
#define RIGHT_EYE_Y_SIZE 8



#define NUMBER_OF_LEGS 8
#define NUMBER_OF_ARTICULATIONS 1

#define LEG_1_P1_X 50
#define LEG_1_P1_Y 100
#define LEG_1_P2_X 75
#define LEG_1_P2_Y 120
#define LEG_1_ATTACH_POINT 6

#define LEG_2_P1_X 55
#define LEG_2_P1_Y 12
#define LEG_2_P2_X 74
#define LEG_2_P2_Y -40
#define LEG_2_ATTACH_POINT 2

#define LEG_3_P1_X 52
#define LEG_3_P1_Y 5
#define LEG_3_P2_X 71
#define LEG_3_P2_Y -47
#define LEG_3_ATTACH_POINT 89

#define LEG_4_P1_X 49
#define LEG_4_P1_Y -2
#define LEG_4_P2_X 95
#define LEG_4_P2_Y -130
#define LEG_4_ATTACH_POINT 86

#define LEG_5_P1_X -50
#define LEG_5_P1_Y 100
#define LEG_5_P2_X -75
#define LEG_5_P2_Y 120
#define LEG_5_ATTACH_POINT 39

#define LEG_6_P1_X -55
#define LEG_6_P1_Y 12
#define LEG_6_P2_X -74
#define LEG_6_P2_Y -40
#define LEG_6_ATTACH_POINT 43

#define LEG_7_P1_X -52
#define LEG_7_P1_Y 5
#define LEG_7_P2_X -71
#define LEG_7_P2_Y -47
#define LEG_7_ATTACH_POINT 46

#define LEG_8_P1_X -49
#define LEG_8_P1_Y -2
#define LEG_8_P2_X -95
#define LEG_8_P2_Y -130
#define LEG_8_ATTACH_POINT 49

#endif