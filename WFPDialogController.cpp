//========================================================================================
//  
//  $File: $
//  
//  Owner: Tim Vervelde
//  
//  $Author: $
//  
//  $DateTime: $
//  
//  $Revision: $
//  
//  $Change: $
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// Interface includes:
#include "IActiveContext.h"
// General includes:
#include "CDialogController.h"
// Project includes:
#include "WFPID.h"

/** WFPDialogController
Methods allow for the initialization, validation, and application of dialog widget
values.
Implements IDialogController based on the partial implementation CDialogController.


@ingroup WFP
*/
class WFPDialogController : public CDialogController
{
public:
	/** Constructor.
	@param boss interface ptr from boss object on which this interface is aggregated.
	*/
	WFPDialogController(IPMUnknown* boss) : CDialogController(boss) {}

	/** Destructor.
	*/
	virtual ~WFPDialogController() {}

	/** Initialize each widget in the dialog with its default value.
	Called when the dialog is opened.
	*/
	virtual void InitializeDialogFields(IActiveContext* dlgContext);

	/** Validate the values in the widgets.
	By default, the widget with ID kOKButtonWidgetID causes
	ValidateFields to be called. When all widgets are valid,
	ApplyFields will be called.
	@return kDefaultWidgetId if all widget values are valid, WidgetID of the widget to select otherwise.

	*/
	virtual WidgetID ValidateDialogFields(IActiveContext* myContext);


	/** Retrieve the values from the widgets and act on them.
	@param widgetId identifies the widget on which to act.
	*/
	virtual void ApplyDialogFields(IActiveContext* myContext, const WidgetID& widgetId);
};

CREATE_PMINTERFACE(WFPDialogController, kWFPDialogControllerImpl)

/* ApplyFields
*/
void WFPDialogController::InitializeDialogFields(IActiveContext* dlgContext)
{
	CDialogController::InitializeDialogFields(dlgContext);
	// Put code to initialize widget values here.
}

/* ValidateFields
*/
WidgetID WFPDialogController::ValidateDialogFields(IActiveContext* myContext)
{
	WidgetID result = CDialogController::ValidateDialogFields(myContext);
	// Put code to validate widget values here.
	return result;
}

/* ApplyFields
*/
void WFPDialogController::ApplyDialogFields(IActiveContext* myContext, const WidgetID& widgetId)
{
	// TODO add code that gathers widget values and applies them.
}
