/*
 * SX22Command.h
 *
 *  Created on: 18.12.2016
 *  Changed on: 25.9.2015
 *  Version:    2.3
 *  Copyright:  Michael Blank
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA


 */

#ifndef SX22COMMAND_H_
#define SX22COMMAND_H_
#include <WString.h>
#include <inttypes.h>

#define COMMAND_OK       0
#define COMMAND_ERROR    1
#define POWER_CHANNEL    127   // can be any value >= 112 and < 255
    // used for transmitting power state
 


class SX22Command {
   
public:
	SX22Command();
	void decode(String);
	void decodeChannel(String);
	uint8_t channel;
    uint8_t data;
    uint8_t err; 

private:
	
};

#endif /* SX22COMMAND_H_ */
