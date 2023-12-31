/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_Instrument_Cluster_PROXY_HPP_
#define V1_COMMONAPI_Instrument_Cluster_PROXY_HPP_

#include <v1/commonapi/InstrumentClusterProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif


#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename ... _AttributeExtensions>
class InstrumentClusterProxy
    : virtual public InstrumentCluster,
      virtual public InstrumentClusterProxyBase,
      virtual public _AttributeExtensions... {
public:
    InstrumentClusterProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~InstrumentClusterProxy();

    typedef InstrumentCluster InterfaceType;


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

    virtual std::future<void> getCompletionFuture();

    /**
     * Calls setSpeedRpm with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setSpeedRpm(uint16_t _SensorRpm, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setSpeedRpm with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setSpeedRpmAsync(const uint16_t &_SensorRpm, SetSpeedRpmAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setBattery with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setBattery(uint16_t _Battery, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setBattery with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setBatteryAsync(const uint16_t &_Battery, SetBatteryAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setGear with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setGear(uint16_t _Gear, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setGear with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setGearAsync(const uint16_t &_Gear, SetGearAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setDirection with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setDirection(uint16_t _Direction, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setDirection with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setDirectionAsync(const uint16_t &_Direction, SetDirectionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLight with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setLight(std::string _Light, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLight with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setLightAsync(const std::string &_Light, SetLightAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);



 private:
    std::shared_ptr< InstrumentClusterProxyBase> delegate_;
};

typedef InstrumentClusterProxy<> InstrumentClusterProxyDefault;


//
// InstrumentClusterProxy Implementation
//
template <typename ... _AttributeExtensions>
InstrumentClusterProxy<_AttributeExtensions...>::InstrumentClusterProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< InstrumentClusterProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< InstrumentClusterProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
InstrumentClusterProxy<_AttributeExtensions...>::~InstrumentClusterProxy() {
}

template <typename ... _AttributeExtensions>
void InstrumentClusterProxy<_AttributeExtensions...>::setSpeedRpm(uint16_t _SensorRpm, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setSpeedRpm(_SensorRpm, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InstrumentClusterProxy<_AttributeExtensions...>::setSpeedRpmAsync(const uint16_t &_SensorRpm, SetSpeedRpmAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setSpeedRpmAsync(_SensorRpm, _callback, _info);
}
template <typename ... _AttributeExtensions>
void InstrumentClusterProxy<_AttributeExtensions...>::setBattery(uint16_t _Battery, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setBattery(_Battery, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InstrumentClusterProxy<_AttributeExtensions...>::setBatteryAsync(const uint16_t &_Battery, SetBatteryAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setBatteryAsync(_Battery, _callback, _info);
}
template <typename ... _AttributeExtensions>
void InstrumentClusterProxy<_AttributeExtensions...>::setGear(uint16_t _Gear, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setGear(_Gear, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InstrumentClusterProxy<_AttributeExtensions...>::setGearAsync(const uint16_t &_Gear, SetGearAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setGearAsync(_Gear, _callback, _info);
}
template <typename ... _AttributeExtensions>
void InstrumentClusterProxy<_AttributeExtensions...>::setDirection(uint16_t _Direction, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setDirection(_Direction, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InstrumentClusterProxy<_AttributeExtensions...>::setDirectionAsync(const uint16_t &_Direction, SetDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setDirectionAsync(_Direction, _callback, _info);
}
template <typename ... _AttributeExtensions>
void InstrumentClusterProxy<_AttributeExtensions...>::setLight(std::string _Light, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setLight(_Light, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> InstrumentClusterProxy<_AttributeExtensions...>::setLightAsync(const std::string &_Light, SetLightAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setLightAsync(_Light, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &InstrumentClusterProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool InstrumentClusterProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool InstrumentClusterProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& InstrumentClusterProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& InstrumentClusterProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> InstrumentClusterProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace commonapi
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_Instrument_Cluster_PROXY_HPP_
