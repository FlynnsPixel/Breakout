#ifndef __N_SAMPLE_STORABLE_H__
#define __N_SAMPLE_STORABLE_H__

#include "NSampleProtocol.h"
#include "NuggetaPlug.h"

namespace nuggeta {

class NSampleStorable : public NSampleProtocol {
public:
	NSampleStorable();
	virtual ~NSampleStorable();
	virtual void init();
	virtual void mainLoop();
	virtual void stop();
private:
	NuggetaPlug* nuggetaPlug;


	void getStorables();
	void saveStorable(Storable* storable) ;
	void updateStorable(Storable* storable);
	void removeStorable(Storable* storable);


	void handleStartResponse(StartResponse*);
	void handleGetStorablesResponse(GetStorablesResponse*);
	void handleSaveStorableResponse(SaveStorableResponse*);
	void handleUpdateStorableResponse(UpdateStorableResponse*);
	void handleRemoveStorableResponse(RemoveStorableResponse*);
	Storable* storableField;




};

}

#endif // __N_SAMPLE_STORABLE_H__
