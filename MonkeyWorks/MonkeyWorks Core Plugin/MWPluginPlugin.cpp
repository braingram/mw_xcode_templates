/*
 *  �PROJECTNAME�Plugin.cpp
 *  MWPlugin
 *
 *  Created by �FULLUSERNAME� on �DATE�.
 *  Copyright �YEAR� �ORGANIZATIONNAME�. All rights reserved.
 *
 */

#include "�PROJECTNAME�Plugin.h"
#include "�PROJECTNAME�Factory.h"
#include "MonkeyWorksCore/ComponentFactory.h"
using namespace mw;

Plugin *getPlugin(){
    return new �PROJECTNAME�Plugin();
}


void �PROJECTNAME�Plugin::registerComponents(shared_ptr<mw::ComponentRegistry> registry) {
	
    // TODO: you need to customize the "signature" of the object your plugin will create
    //       The signature is of the form component/type �(e.g. stimulus/circle, or iodevice/NIDAQ)
    registry->registerFactory(std::string("stimulus/�PROJECTNAME�"),
							  (ComponentFactory *)(new �PROJECTNAME�Factory()));
}

