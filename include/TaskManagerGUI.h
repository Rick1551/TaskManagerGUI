#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskManagerGUI.h"

class TaskManagerGUI : public QMainWindow
{
    Q_OBJECT

public:
    TaskManagerGUI(QWidget *parent = nullptr);
    ~TaskManagerGUI();

private slots:
	void addTask();
	void removeSelectedTask();

private:
    Ui::TaskManagerGUI *ui;
};

