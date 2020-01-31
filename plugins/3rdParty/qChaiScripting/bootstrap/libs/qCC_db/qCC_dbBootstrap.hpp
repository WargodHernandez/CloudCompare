#ifndef CHAISCRIPTING_BOOTSTRAP_QCC_DB_HPP
#define CHAISCRIPTING_BOOTSTRAP_QCC_DB_HPP

//##########################################################################
//#                                                                        #
//#                CLOUDCOMPARE PLUGIN: ChaiScripting                      #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#                     COPYRIGHT: Chris S Brown                           #
//#                                                                        #
//##########################################################################

#include <cmath>
#include <memory>

#include <chaiscript/chaiscript.hpp>
#include "qCC_dbEnums.hpp"
#include "qCC_dbClasses.hpp"
#include "qCC_dbStaticFunctions.hpp"

namespace chaiscript
{
	namespace cloudCompare
	{
		namespace libs
		{
			namespace qCC_db
			{

				ModulePtr bootstrap(ModulePtr m = std::make_shared<Module>())
				{
					bootstrap_enum(m);
					bootstrap_classes(m);
					bootstrap_static_functions(m);
					return m;
				}
			}
		}
	}
}

#endif CHAISCRIPTING_BOOTSTRAP_QCC_DB_HPP