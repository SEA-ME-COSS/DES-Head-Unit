/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v1/commonapi/PiracerOperatorSomeIPProxy.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

std::shared_ptr<CommonAPI::SomeIP::Proxy> createPiracerOperatorSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< PiracerOperatorSomeIPProxy>(_address, _connection);
}

void initializePiracerOperatorSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.PiracerOperator:v1_0:PiracerOperator",
        0x3ea, 0x2712, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
        "commonapi.PiracerOperator:v1_0",
        &createPiracerOperatorSomeIPProxy);
}

INITIALIZER(registerPiracerOperatorSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializePiracerOperatorSomeIPProxy);
}

PiracerOperatorSomeIPProxy::PiracerOperatorSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection)
{
}

PiracerOperatorSomeIPProxy::~PiracerOperatorSomeIPProxy() {
    completed_.set_value();
}



void PiracerOperatorSomeIPProxy::setGearMode(uint16_t _GearMode, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_GearMode(_GearMode, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x64),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_GearMode,
        _internalCallStatus,
        deploy_message);
    _message = deploy_message.getValue();
}

std::future<CommonAPI::CallStatus> PiracerOperatorSomeIPProxy::setGearModeAsync(const uint16_t &_GearMode, SetGearModeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< uint16_t, CommonAPI::SomeIP::IntegerDeployment<uint16_t>> deploy_GearMode(_GearMode, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                uint16_t,
                CommonAPI::SomeIP::IntegerDeployment<uint16_t>
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x64),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_GearMode,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
            if (_callback)
                _callback(_internalCallStatus, _message.getValue());
        },
        std::make_tuple(deploy_message));
}

void PiracerOperatorSomeIPProxy::setThrottle(double _Throttle, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_Throttle(_Throttle, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                double,
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x65),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Throttle,
        _internalCallStatus,
        deploy_message);
    _message = deploy_message.getValue();
}

std::future<CommonAPI::CallStatus> PiracerOperatorSomeIPProxy::setThrottleAsync(const double &_Throttle, SetThrottleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_Throttle(_Throttle, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                double,
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x65),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Throttle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
            if (_callback)
                _callback(_internalCallStatus, _message.getValue());
        },
        std::make_tuple(deploy_message));
}

void PiracerOperatorSomeIPProxy::setSteering(double _Steering, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_Steering(_Steering, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                double,
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x66),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Steering,
        _internalCallStatus,
        deploy_message);
    _message = deploy_message.getValue();
}

std::future<CommonAPI::CallStatus> PiracerOperatorSomeIPProxy::setSteeringAsync(const double &_Steering, SetSteeringAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_Steering(_Steering, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                double,
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x66),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_Steering,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
            if (_callback)
                _callback(_internalCallStatus, _message.getValue());
        },
        std::make_tuple(deploy_message));
}

void PiracerOperatorSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

std::future<void> PiracerOperatorSomeIPProxy::getCompletionFuture() {
    return completed_.get_future();
}

} // namespace commonapi
} // namespace v1
