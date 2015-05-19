#ifndef __MOVIL_H__
#define __MOVIL_H__

class Movil
{
    private:
	static int creados;
	int id;
	double x;
	double y;
	double vx;
	double vy;


    public:
	Movil();
	void actualizate();
	virtual void pintate();
	int who_are_you();
};


#endif
