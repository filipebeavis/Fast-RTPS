// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/**
 * @file HelloWorldPublisher.h
 *
 */

#ifndef HELLOWORLDPUBLISHER_H_
#define HELLOWORLDPUBLISHER_H_

#include "HelloWorldPubSubTypes.h"

#include <dds/domain/DomainParticipant.hpp>
#include <dds/pub/Publisher.hpp>
#include <dds/pub/DataWriter.hpp>
#include <dds/pub/DataWriterListener.hpp>
#include <dds/topic/Topic.hpp>
#include <dds/core/status/Status.hpp>

#include <fastdds/dds/topic/DataWriter.hpp>
#include <fastdds/dds/core/status/PublicationMatchedStatus.hpp>
#include <dds/core/cond/WaitSet.hpp>

class HelloWorldPublisher
{
public:

    HelloWorldPublisher();

    virtual ~HelloWorldPublisher();

    //!Initialize
    bool init(
            int domain_id);

    //!Publish a sample
    bool publish(
            bool waitForListener = true);

    //!Run for number samples
    void run(
            uint32_t number,
            uint32_t sleep);

private:

    HelloWorld hello_;

    dds::domain::DomainParticipant participant_;

    dds::pub::Publisher publisher_;

    dds::pub::DataWriter<HelloWorld> writer_;

    bool stop_;

    int matched_ = 0;

    bool firstConnected_;

    void runThread(
            uint32_t number,
            uint32_t sleep);

    void check_reader_matched();

    HelloWorldTypeSupport type_;
    dds::topic::Topic<HelloWorld> topic_;

    std::mutex mtx_;

    std::condition_variable cv_;

    dds::core::cond::WaitSet waitset_;

    void liveliness_lost_handler();

    void offered_deadline_missed_handler();

    void offered_incompatible_qos_handler();

    void publication_matched_handler();
};



#endif /* HELLOWORLDPUBLISHER_H_ */
