
#include "cinder/Rect.h"
#include "cinder/Color.h"

class Node{
	public:
		Node* next_;
		Node* prev_;

		ci::Vec2f v1;
		ci::Vec2f v2;

		ci::Color8u color;

		Node();
		Node(ci::Vec2f v1, ci::Vec2f v2, ci::Color8u c);
		void draw();

		


};