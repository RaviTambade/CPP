#ifndef POINT_H
#define POINT_H
class Point
{
	private : 
			int  x, y;
	public:
	 		Point();
	 		Point(int xx,int yy);
	 		
	 		//getter setter
	 		void setX(int xx);
	 		int getX();
	 		
	 		void setY(int yy);
	 		int getY();
	 	
		 	void display();
};
#endif
