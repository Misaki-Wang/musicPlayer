#ifndef MYMUSIC_H
#define MYMUSIC_H

#include <QWidget>
#include <QStyleOption>
#include <QPainter>
#include <QDir>
#include <QListWidgetItem>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class myMusic; }
QT_END_NAMESPACE

class myMusic : public QWidget
{
    Q_OBJECT

public:
    myMusic(QWidget *parent = nullptr);
    ~myMusic();

private:
    Ui::myMusic *ui;
private:
    //音乐文件夹路径
    QString str_path_music;
    //音乐列表
    QListWidgetItem *p_item;

private:
    //背景图
    void paintEvent(QPaintEvent *event);
    //读取文件
    void readFile();
    //初始化界面
    void initUI();
};
#endif // MYMUSIC_H
