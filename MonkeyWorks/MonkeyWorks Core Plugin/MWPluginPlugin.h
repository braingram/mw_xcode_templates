/*
 *  �PROJECTNAME�Plugin.h
 *  MWPlugin
 *
 *  Created by �FULLUSERNAME� on �DATE�.
 *  Copyright �YEAR� �ORGANIZATIONNAME�. All rights reserved.
 *
 */
#ifndef �PROJECTNAME�_PLUGIN_H_
#define �PROJECTNAME�_PLUGIN_H_

#include <MonkeyWorksCore/Plugin.h>
using namespace mw;

extern "C"{
    Plugin *getPlugin();
}

class �PROJECTNAME�Plugin : public Plugin {
    
	virtual void registerComponents(shared_ptr<mw::ComponentRegistry> registry);	
};


#endif