/*
 * Copyright 2010, Object Management Group, Inc.
 * Copyright 2010, PrismTech, Corp.
 * Copyright 2010, Real-Time Innovations, Inc.
 * Copyright 2019, Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OMG_DDS_QOS_DATA_WRITER_QOS_HPP_
#define OMG_DDS_QOS_DATA_WRITER_QOS_HPP_

#include <dds/pub/qos/detail/DataWriterQos.hpp>
#include <dds/topic/qos/TopicQos.hpp>

namespace dds {
namespace pub {
namespace qos {

//typedef dds::pub::qos::detail::DataWriterQos DataWriterQos;
class DataWriterQos : public detail::DataWriterQos
{
public:

    DataWriterQos()
        : detail::DataWriterQos ()
    {
    }

    DataWriterQos(
            const DataWriterQos& qos)
        : detail::DataWriterQos(qos)
    {
    }

    DataWriterQos(
            const detail::DataWriterQos& qos)
        : detail::DataWriterQos(qos)
    {
    }

    DataWriterQos(
            const topic::qos::TopicQos& qos)
    {
        history = qos.history;
        deadline = qos.deadline;
        lifespan = qos.lifespan;
        ownership = qos.ownership;
        durability = qos.durability;
        liveliness = qos.liveliness;
        reliability = qos.reliability;
        latency_budget = qos.latency_budget;
        resource_limits = qos.resource_limits;
        destination_order = qos.destination_order;
        durability_service = qos.durability_service;
        transport_priority = qos.transport_priority;
    }

    DataWriterQos& operator =(
            const topic::qos::TopicQos& qos)
    {
        history = qos.history;
        deadline = qos.deadline;
        lifespan = qos.lifespan;
        ownership = qos.ownership;
        durability = qos.durability;
        liveliness = qos.liveliness;
        reliability = qos.reliability;
        latency_budget = qos.latency_budget;
        resource_limits = qos.resource_limits;
        destination_order = qos.destination_order;
        durability_service = qos.durability_service;
        transport_priority = qos.transport_priority;
        return *this;
    }
};

} //namespace qos
} //namespace pub
} //namespace dds

#endif //OMG_DDS_QOS_DATA_WRITER_QOS_HPP_
