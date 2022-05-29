#include "mymusic.h"
#include "ui_mymusic.h"

myMusic::myMusic(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myMusic)
{
    ui->setupUi(this);
    initUI();
    readFile();
}

myMusic::~myMusic()
{
    delete ui;
}
void myMusic::readFile()
{
    //设置要遍历的目录
    str_path_music = "C:/Users/lenovo/Desktop/musicPlayer/music";
    QDir dir(str_path_music);
    //设置文件过滤器
    QStringList nameFileters;
    //设置文件过滤器的格式
    nameFileters << "*.wav";
    //将过滤后的文件放入到list中
    QStringList files = dir.entryList(nameFileters,QDir::Files|QDir::Readable,QDir::Name);
    //添加到item后添加到listMusic
    ui->musicList->addItems(files);
    ui->musicList->sortItems();

    //设置初始指向

}

void myMusic::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget,&opt,&p,this);
}

void myMusic::initUI()
{

}
