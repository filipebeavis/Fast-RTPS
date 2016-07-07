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

/*************************************************************************
 * @file Data64kbTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _DATA64KB_TYPES_H_
#define _DATA64KB_TYPES_H_

#include <fastrtps/TopicDataType.h>

using namespace eprosima::fastrtps;

#include "Data64kb.h"

/*!
 * @brief This class represents the TopicDataType of the type Data64kb defined by the user in the IDL file.
 * @ingroup DATA64KB
 */
class Data64kbType : public TopicDataType {
public:
    typedef Data64kb type;

	Data64kbType();
	virtual ~Data64kbType();
	bool serialize(void *data, SerializedPayload_t *payload);
	bool deserialize(SerializedPayload_t *payload, void *data);
	bool getKey(void *data, InstanceHandle_t *ihandle);
	void* createData();
	std::function<uint32_t()> getCdrSerializedSizeProvider();
	void deleteData(void * data);
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};

#endif // _Data64kb_TYPE_H_
