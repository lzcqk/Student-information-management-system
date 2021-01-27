#include "Paint_pic.h"
#include "ui_Paint_pic.h"

Paint_pic::Paint_pic(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::Paint_pic)
{
	ui->setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose, true);
}

Paint_pic::~Paint_pic()
{
	delete ui;
}

void Paint_pic::get_data(student* stu)           //����ֱ��ͼ
{
	int* sto_data = new int[max_score / 10];
	int oct_num;
	float image_width = 0;
	float image_height = 0;
	int slip = 13;        //�ֿ鲿��
	int max_seq = 0;             //��Ƶ����index
	for (int i = 0; i < max_score / 10; i++) sto_data[i] = 0;
	student* temp = stu;
	while (temp != NULL)
	{
		oct_num = int(temp->info.score / 10);
		if (oct_num != max_score / 10)
		{
			sto_data[oct_num]++;
		}
		else
		{
			sto_data[max_score / 10 - 1] ++;
		}
		temp = temp->next;
	}
	for (int i = 1; i < max_score / 10; i++)
	{
		if (sto_data[max_seq] < sto_data[i]) max_seq = i;
	}
	QImage image;
	image.load("white.png");
	QPainter painter(&image);                          //��þ��
	painter.setPen(QPen(Qt::black, 2));
	image_width = image.size().width();
	image_height = image.size().height();
	QPoint O_piont(image_width / slip, image_height / slip * (slip - 1));
	painter.drawLine(O_piont, QPoint(image_width / slip, image_height / slip));     //y��
	painter.drawLine(O_piont, QPoint(image_width / slip * (slip - 1), image_height / slip * (slip - 1)));          //x��
	painter.drawLine(image_width / slip, image_height / slip, image_width / slip - 5, image_height / slip + 10);   //�ϼ�ͷ
	painter.drawLine(image_width / slip, image_height / slip, image_width / slip + 5, image_height / slip + 10);   //�ϼ�ͷ
	painter.drawLine(image_width / slip * (slip - 1), image_height / slip * (slip - 1), image_width / slip * (slip - 1) - 10, image_height / slip * (slip - 1) + 5);              //�Ҽ�ͷ
	painter.drawLine(image_width / slip * (slip - 1), image_height / slip * (slip - 1), image_width / slip * (slip - 1) - 10, image_height / slip * (slip - 1) - 5);              //�Ҽ�ͷ
	for (int i = 0; i <= max_score; i += 10)       //��������
	{
		if (i == 0) painter.drawText(QPoint(image_width / slip * (i / 10 + 1) - 4, image_height / slip * (slip - 1) + 15), QString::number(i));
		else if (i == max_score)painter.drawText(QPoint(image_width / slip * (i / 10 + 1) - 12, image_height / slip * (slip - 1) + 15), QString::number(i));
		else painter.drawText(QPoint(image_width / slip * (i / 10 + 1) - 8, image_height / slip * (slip - 1) + 15), QString::number(i));
		painter.drawLine(QPoint(image_width / slip * (i / 10 + 1), image_height / slip * (slip - 1)), QPoint(image_width / slip * (i / 10 + 1), image_height / slip * (slip - 1) - 5));
	}
	for (int i = 1; i <= sto_data[max_seq]; i++)        //������
	{
		painter.drawLine(image_width / slip, image_height / slip * (slip - 1) - image_height / slip * (slip - 3) * (i) / sto_data[max_seq], image_width / slip + 5, image_height / slip * (slip - 1) - image_height / slip * (slip - 3) * (i) / sto_data[max_seq]);
		painter.drawText(image_width / slip - 15, image_height / slip * (slip - 1) - image_height / slip * (slip - 3) * (i) / sto_data[max_seq] + 4, QString::number(i));
	}
	painter.drawText(QPoint(image_width / slip - 30, image_height / slip), QString::fromLocal8Bit("����"));
	painter.drawText(QPoint(image_width / slip * (slip - 1), image_height / slip * (slip - 1) + 15), QString::fromLocal8Bit("�ɼ�"));
	QBrush brush;                     //��ˢ
	brush.setColor(Qt::red);
	brush.setStyle(Qt::SolidPattern);
	painter.setBrush(brush);
	for (int i = 0; i < max_score; i += 10)          //��ֱ��ͼ
	{
		float rate = float(sto_data[i / 10]) / sto_data[max_seq];
		painter.drawRect(image_width / slip * (i / 10 + 1), image_height / slip * (slip - 1), image_width / slip, -rate * (image_height / slip * (slip - 3)));
	}
	ui->label->setPixmap(QPixmap::fromImage(image));
	ui->label->show();
	image.save("Score distribution.jpg");            //����ͼƬ
}
