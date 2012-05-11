/*
* Fake Sat
*/

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QTimer>
#include <QMouseEvent>

#include "sky.h"


#define TIMER_GAP (10)

Sky::Sky(int atimer_gap, char* imgfile, QWidget *parent) : QWidget(parent)
{
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(QImage(imgfile)));
	this->setPalette(palette);

	pos_x = 0;
	pos_y = 0;
	this->timer_gap = atimer_gap;
}


void Sky::moveSat()
{
	pos_x++;
	pos_y++;
	update();
}


void Sky::keyPressEvent(QKeyEvent *event)
{
   if (event->key() == Qt::Key_Escape) {  
       qApp->quit();
   } 
	else{
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(moveSat()));
		timer->start(timer_gap);
	}
}


void Sky::paintEvent(QPaintEvent * /* event */)
{
	QPainter painter(this);

	QPen pen(Qt::white, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
	painter.setPen(pen);
	painter.drawPoint(pos_x,pos_y);
}


int main(int argc, char *argv[])
{
	if (argc < 3) {
		printf("Usage: fakesat timer_gap background.jpg\n\n");
		return -1;
	}
	QApplication app(argc, argv);

	int timer_gap = atoi(argv[1]);
	Sky sky(timer_gap, argv[2]);
	sky.showFullScreen();
	sky.show();

	return app.exec();
}
