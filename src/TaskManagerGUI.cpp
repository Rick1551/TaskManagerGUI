#include "../include/TaskManagerGUI.h"

TaskManagerGUI::TaskManagerGUI(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::TaskManagerGUI) {
    ui->setupUi(this);

	//Conectar botones a funciones
	connect(ui->addButton, &QPushButton::clicked, this, &TaskManagerGUI::addTask);
	connect(ui->removeButton , &QPushButton::clicked, this, &TaskManagerGUI::removeSelectedTask);
}

TaskManagerGUI::~TaskManagerGUI() {
	delete ui;
}

void TaskManagerGUI::addTask() {
	QString name = ui->taskNameEdit->text();
	QString priority = ui->priorityComboBox->currentText();
	QDate date = ui->dueDateEdit->date();

	if (name.isEmpty()) return;

}

