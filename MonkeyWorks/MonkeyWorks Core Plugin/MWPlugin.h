/*
 *  �PROJECTNAME�.h
 * �PROJECTNAME�
 *  MWPlugin
 *
 *  Created by �FULLUSERNAME� on �DATE�.
 *  Copyright �YEAR� �ORGANIZATIONNAME�. All rights reserved.
 *
 */

#ifndef �PROJECTNAME�_H_
#define �PROJECTNAME�_H_

#include <MonkeyWorksCore/Plugin.h>

using namespace mw;

class �PROJECTNAME� : public Component{

protected:


public:
	�PROJECTNAME�(std::string _tag, shared_ptr<Variable> another_attribute);
	�PROJECTNAME�(const �PROJECTNAME� &tocopy);
	~�PROJECTNAME�();

};

#endif 
