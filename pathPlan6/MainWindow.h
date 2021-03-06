﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include<QVector>
#include "Path_Plan/OpenDrive/OpenDriveParser.h"
#include "Path_Plan/OpenDrive/OpenDriveStruct.h"
#include "Path_Plan/AStarRoute/AStarRoute.h"

extern "C"{
#include "Path_Plan/Utils/mathUtils.h"
}
#include<set>
using std::set;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
//     void plotPointInMap(QCustomPlot* mapView,const QVector<double> x,const QVector<double> y);
//     //打印地图
//     void plotMap(QCustomPlot* mapView,vector<RoadNet>* mRoadNetVector);
//     //打印参考线
//     void plotGeo(QCustomPlot* mapView,GeoObj* mObj,vector<RoadNet>* mRoadNetVector,unsigned long RoadIdx);
//     //打印车道线
//     void plotLane(QCustomPlot* mapView,vector<RoadNet>* mRoadNetVector,unsigned long RoadIdx,int GeoId,int id);
     void plotMap();
private:
    Ui::MainWindow *ui;
    OpenDriveStruct mOpenDriveStruct;
    OpenDriveParser mOpenDriveParser;
    AStarRoute mAStarRoute;
    QVector<double> x;
    QVector<double> y;
};

#endif // MAINWINDOW_H
