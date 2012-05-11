/**
 * Fake Sat
 */

#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

class Sky : public QWidget
{
	Q_OBJECT

public:
	Sky(int timer_gap, char* imgfile,QWidget *parent = 0) ;

protected:
	void keyPressEvent(QKeyEvent * event);
	void paintEvent(QPaintEvent *event);

private:
	int pos_x;
	int pos_y;
	int timer_gap;

private slots:
	 void moveSat();
};

