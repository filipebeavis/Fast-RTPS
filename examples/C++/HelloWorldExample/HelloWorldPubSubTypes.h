// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file HelloWorldPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _HELLOWORLD_PUBSUBTYPES_H_
#define _HELLOWORLD_PUBSUBTYPES_H_

#include <fastrtps/TopicDataType.h>



#include "HelloWorld.h"

/*!
 * @brief This class represents the TopicDataType of the type HelloWorld defined by the user in the IDL file.
 * @ingroup HELLOWORLD
 */
class HelloWorldPubSubType : public  eprosima::fastrtps::TopicDataType {
public:
        typedef HelloWorld type;

	HelloWorldPubSubType();
	virtual ~HelloWorldPubSubType();
	bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload);
	bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data);
        std::function<uint32_t()> getSerializedSizeProvider(void* data);
	bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle, bool force_md5);
	void* createData();
	void deleteData(void * data);
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};

#endif // _HelloWorld_PUBSUBTYPE_H_