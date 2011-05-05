#ifndef VOLUMERECONSTRUCTIONTOOLBOX_H
#define VOLUMERECONSTRUCTIONTOOLBOX_H

#include "ui_VolumeReconstructionToolbox.h"

#include "AbstractToolbox.h"
#include "VolumeReconstructionController.h"

#include <QWidget>

//-----------------------------------------------------------------------------

/*!
* \brief Volume reconstruction toolbox view class
*/
class VolumeReconstructionToolbox : public QWidget, public AbstractToolbox
{
	Q_OBJECT

public:
	/*!
	* \brief Constructor
	* \param aParent parent
	* \param aFlags widget flag
	*/
	VolumeReconstructionToolbox(QWidget* aParent = 0, Qt::WFlags aFlags = 0);

	/*!
	* \brief Destructor
	*/
	~VolumeReconstructionToolbox();

	/*!
	* \brief Refresh contents (e.g. GUI elements) of toolbox according to the state in the toolbox controller - implementation of a pure virtual function
	*/
	void RefreshToolboxContent();

	/*!
	* \brief Executes operations needed after stopping the process - implementation of a pure virtual function
	*/
	void Stop();

	/*!
	* \brief Executes operations needed when changing to another toolbox - implementation of a pure virtual function
	*/
	void Clear();

signals:
	/*!
	* \brief Executes operations needed after stopping the process
	* \param Enable/disable flag
	*/
	void SetTabsEnabled(bool);

protected slots:
	/*!
	* \brief Calls acquire positions function in controller (called by the acquisition timer) - implementation of a pure virtual function
	*/
	void RequestDoAcquisition();

protected:
	//Ui::VolumeReconstructionToolbox ui;
};

#endif