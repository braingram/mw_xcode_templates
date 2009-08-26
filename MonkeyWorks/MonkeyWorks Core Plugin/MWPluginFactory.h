/*
 *  �PROJECTNAME�Factory.h
 *  MWPlugin
 *
 *  Created by �FULLUSERNAME� on �DATE�.
 *  Copyright �YEAR� �ORGANIZATIONNAME�. All rights reserved.
 *
 */


#ifndef �PROJECTNAME�_FACTORY_H
#define �PROJECTNAME�_FACTORY_H

#include "�PROJECTNAME�.h"

#include "MonkeyWorksCore/ComponentFactory.h"
using namespace mw;

class �PROJECTNAME�Factory : public ComponentFactory {
	virtual shared_ptr<mw::Component> createObject(std::map<std::string, std::string> parameters,
                                                   mw::ComponentRegistry *reg);
};

#endif
