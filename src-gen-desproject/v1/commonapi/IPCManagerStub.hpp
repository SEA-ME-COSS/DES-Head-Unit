/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_IPC_Manager_STUB_HPP_
#define V1_COMMONAPI_IPC_Manager_STUB_HPP_

#include <functional>
#include <sstream>




#include <v1/commonapi/IPCManager.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <vector>


#include <CommonAPI/Stub.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service IPCManager. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class IPCManagerStubAdapter
    : public virtual CommonAPI::StubAdapter,
      public virtual IPCManager {
 public:


    virtual void deactivateManagedInstances() = 0;


protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */

};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for IPCManager.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class IPCManagerStubRemoteEvent
{
public:
    virtual ~IPCManagerStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service IPCManager to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class IPCManagerStub
    : public virtual CommonAPI::Stub<IPCManagerStubAdapter, IPCManagerStubRemoteEvent>
{
public:
    typedef std::function<void (std::string _message)> setSensorRpmReply_t;
    typedef std::function<void (std::string _message)> setBatteryLevelReply_t;
    typedef std::function<void (std::string _message)> setGearModeReply_t;
    typedef std::function<void (std::string _message)> setDirectionReply_t;
    typedef std::function<void (std::string _message)> setLightReply_t;
    typedef std::function<void (std::string _message)> setThrottleReply_t;
    typedef std::function<void (std::string _message)> setSteeringReply_t;
    typedef std::function<void (std::string _message)> setDistanceReply_t;
    typedef std::function<void (std::string _message2)> getGearModeReply_t;
    typedef std::function<void (std::string _message2)> getDirectionReply_t;
    typedef std::function<void (std::string _message2)> getLightReply_t;
    typedef std::function<void (std::string _message2)> getSteeringReply_t;

    virtual ~IPCManagerStub() {}
    void lockInterfaceVersionAttribute(bool _lockAccess) { static_cast<void>(_lockAccess); }
    bool hasElement(const uint32_t _id) const {
        return (_id < 12);
    }
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) = 0;

    /// This is the method that will be called on remote calls on the method setSensorRpm.
    virtual void setSensorRpm(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _SensorRpm, setSensorRpmReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setBatteryLevel.
    virtual void setBatteryLevel(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _BatteryLevel, setBatteryLevelReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setGearMode.
    virtual void setGearMode(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _GearMode, setGearModeReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setDirection.
    virtual void setDirection(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _Direction, setDirectionReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setLight.
    virtual void setLight(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _Light, setLightReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setThrottle.
    virtual void setThrottle(const std::shared_ptr<CommonAPI::ClientId> _client, double _Throttle, setThrottleReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setSteering.
    virtual void setSteering(const std::shared_ptr<CommonAPI::ClientId> _client, double _Steering, setSteeringReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method setDistance.
    virtual void setDistance(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _Distance, setDistanceReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method getGearMode.
    virtual void getGearMode(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _message1, getGearModeReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method getDirection.
    virtual void getDirection(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _message1, getDirectionReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method getLight.
    virtual void getLight(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _message1, getLightReply_t _reply) = 0;
    /// This is the method that will be called on remote calls on the method getSteering.
    virtual void getSteering(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _message1, getSteeringReply_t _reply) = 0;


    using CommonAPI::Stub<IPCManagerStubAdapter, IPCManagerStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<IPCManagerStubAdapter, IPCManagerStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<IPCManagerStubAdapter, IPCManagerStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef IPCManagerStubRemoteEvent RemoteEventType;
    typedef IPCManager StubInterface;
};

} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_IPC_Manager_STUB_HPP_
