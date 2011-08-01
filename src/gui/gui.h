/*******************************************************************************
* Copyright 2011 Sebastian Colutto
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*   http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
 ******************************************************************************/
#ifndef GUI_HPP_
#define GUI_HPP_

#include <QString>

namespace impact_tr4 {

/** Overloaded <<-operator for printing QString's to the console. */
inline std::ostream& operator<<(std::ostream& os, const QString& qstring)
{
	os << qstring.toStdString();
	return os;
}

}

#endif /*GUI_HPP_*/