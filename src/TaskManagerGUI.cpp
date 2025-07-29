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

	QString task = name + " | " + priority + " | " + date.toString("dd/MM/yyyy");
	ui->taskListWidget->addItem(task);

	ui->taskNameEdit->clear();
	ui->priorityComboBox->setCurrentIndex(0);
	ui->dueDateEdit->setDate(QDate::currentDate());
}

void TaskManagerGUI::removeSelectedTask() {
	QListWidgetItem* item = ui->taskListWidget->currentItem();
	if (item) {
		delete item;
	}
}

