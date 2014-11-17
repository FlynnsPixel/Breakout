#include "NSampleStorable.h"


/**
	This sample show you how to query, update and remove storable objects.
	In this sample we use the object StorableSample as an example,
	but you can defined your own custom storable objects through the Developer Site.

	Here is the workflow of this sample :
	1) Call to getStorable --> no storable found
	2) Call to saveStorable
	3) Call to getStorable --> found one
	4) Call to Update Storable
	5) Call to Remove Storable

**/

namespace nuggeta {


NSampleStorable::NSampleStorable() {
	isFinished = false;
	logger = NLoggerFactory::getLogger("NSampleStorable");
}

NSampleStorable::~NSampleStorable() {
	delete logger;
	logger = 0;
}

void NSampleStorable::init() {
	logger->info("[NSampleStorable] Started");

	nuggetaPlug = new NuggetaPlug("nuggeta://quadball_5e921664-fffd-40cb-a9a0-5ddb85bfaad4");
	nuggetaPlug->start();

}



void NSampleStorable::mainLoop() {
	std::vector<Message*>* messages = nuggetaPlug->pump();
	for (unsigned int i = 0; i < messages->size(); i++) {

		//handle message
		Message* message = (*messages)[i];

		if (message->getSerializerID() == StartResponse::serializerID) {
			handleStartResponse(static_cast<StartResponse*>(message));

		} else if (message->getSerializerID() == GetStorablesResponse::serializerID) {
			handleGetStorablesResponse( (GetStorablesResponse*)message);

		} else if (message->getSerializerID() == SaveStorableResponse::serializerID) {
			handleSaveStorableResponse( (SaveStorableResponse*)message);

		} else if (message->getSerializerID() == UpdateStorableResponse::serializerID) {
			handleUpdateStorableResponse( (UpdateStorableResponse*)message);

		} else if (message->getSerializerID() == RemoveStorableResponse::serializerID) {
			handleRemoveStorableResponse( (RemoveStorableResponse*)message);

		}else {
			logger->info("Received unhandled Message : ");
			logger->info(message->toString());
		}

		//release message
		delete message;
		message = 0;
	}

	//release vector
	delete messages;
	messages = 0;
}


/** Nuggeta Storables Actions **/

void NSampleStorable::getStorables() {

	//prepare the query to retrieve
	NuggetaQuery* query =  new NuggetaQuery();
	query->setDomain("StorableSample");
	query->setQuery("$WHERE IdProperty = 'id1' $AND NumberProperty = 123");

	logger->info("Executing GetStorable call  ");
	nuggetaPlug->getStorables(query);
}

void NSampleStorable::saveStorable(Storable* storable) {
	logger->info("Executing SaveStorable call...  ");
	nuggetaPlug->saveStorable(storable);
}

void NSampleStorable::updateStorable(Storable* storable) {
	logger->info("Executing UpdateStorable call...  ");
	nuggetaPlug->updateStorable(storable);
}

void NSampleStorable::removeStorable(Storable* storable) {
	logger->info("Executing RemoveStorable call...  ");
	nuggetaPlug->removeStorable(storable);
}


/** Nuggeta Storables Actions **/

void NSampleStorable::handleStartResponse(StartResponse* startResponse) {

	if (startResponse->getStartStatus() == StartStatus::READY) {
		//Once the connection is up we make the call to retrieve the storables
		// 1) Call to getStorable
		getStorables();

	} else {
		logger->info("Connection Failed to NUGGETA :( ");
		//end the sample
		stop();
	}
}

void NSampleStorable::handleGetStorablesResponse(GetStorablesResponse* getStorablesResponse) {

	if (getStorablesResponse->getGetStorablesStatus() == GetStorablesStatus::SUCCESS) {		
		
		logger->info("Received GetStorablesResponse SUCCESS");
		std::vector<Storable*>* storables =  getStorablesResponse->getStorables();
		if(storables->size() == 0){
			
			//if there is no storable matching our query we create a new one and save it			

			//fill the storable sample object
			StorableSample* storableSample = new StorableSample();
			storableSample->setIdProperty("id1");
			storableSample->setNumberProperty(123);
			storableSample->setBooleanProperty(false);

			// 2) Call to saveStorable
			saveStorable((Storable*)storableSample);

		}else{
			
			//update the StorableSample object retrieved
			//keep a reference of the storable for later use in  remove call (we need to clone it as we want to keep it)
			storableField = (Storable*) storables->at(0)->clone();

			//cast to StorableSample and edit values
			StorableSample* storableSample = reinterpret_cast<StorableSample*>(storableField);
			storableSample->setBooleanProperty(false);

			// 4) Call to updateStorable
			updateStorable((Storable*)storableSample);
		}



	} else {
		logger->info("Failed to retrieve Storables ");
		stop();
	}
}

void NSampleStorable::handleSaveStorableResponse(SaveStorableResponse* saveStorableResponse) {

	if (saveStorableResponse->getSaveStorableStatus() == SaveStorableStatus::SUCCESS) {		

		logger->info("Received SaveStorableResponse SUCCESS");

		// 3) Call to getStorable
		getStorables();
		

	} else {
		logger->info("Failed to retrieve Storables ");
		stop();
	}
}

void NSampleStorable::handleUpdateStorableResponse(UpdateStorableResponse* updateStorableResponse) {
	if (updateStorableResponse->getUpdateStorableStatus() == UpdateStorableStatus::SUCCESS) {		

		logger->info("Received UpdateStorableResponse SUCCESS");

		// 5) Call to removeStorable
		removeStorable(storableField);

	} else {
		logger->info("Failed to update Storable ");
		stop();
	}
}

void NSampleStorable::handleRemoveStorableResponse(RemoveStorableResponse* removeStorableResponse) {
	if (removeStorableResponse->getRemoveStorableStatus() == RemoveStorableStatus::SUCCESS) {

		logger->info("Received RemoveStorableResponse SUCCESS");

	} else {
		logger->info("Failed to Remove Storable ");
	}

	//end of sample
	stop();
}


void NSampleStorable::stop() {
	logger->info("[NSampleStorable] Ended");
	nuggetaPlug->stop();
	isFinished=true;
}


}
