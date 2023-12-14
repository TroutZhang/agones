// Copyright 2023 Google LLC All Rights Reserved.
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

// This code was autogenerated. Do not edit directly.
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: sdk.proto

#include "sdk.pb.h"
#include "sdk.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace agones {
namespace dev {
namespace sdk {

static const char* SDK_method_names[] = {
  "/agones.dev.sdk.SDK/Ready",
  "/agones.dev.sdk.SDK/Allocate",
  "/agones.dev.sdk.SDK/Shutdown",
  "/agones.dev.sdk.SDK/Health",
  "/agones.dev.sdk.SDK/GetGameServer",
  "/agones.dev.sdk.SDK/WatchGameServer",
  "/agones.dev.sdk.SDK/SetLabel",
  "/agones.dev.sdk.SDK/SetAnnotation",
  "/agones.dev.sdk.SDK/Reserve",
};

std::unique_ptr< SDK::Stub> SDK::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SDK::Stub> stub(new SDK::Stub(channel, options));
  return stub;
}

SDK::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Ready_(SDK_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Allocate_(SDK_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Shutdown_(SDK_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Health_(SDK_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_GetGameServer_(SDK_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WatchGameServer_(SDK_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SetLabel_(SDK_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetAnnotation_(SDK_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reserve_(SDK_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SDK::Stub::Ready(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Ready_, context, request, response);
}

void SDK::Stub::async::Ready(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ready_, context, request, response, std::move(f));
}

void SDK::Stub::async::Ready(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ready_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncReadyRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Ready_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncReadyRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReadyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SDK::Stub::Allocate(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Allocate_, context, request, response);
}

void SDK::Stub::async::Allocate(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Allocate_, context, request, response, std::move(f));
}

void SDK::Stub::async::Allocate(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Allocate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncAllocateRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Allocate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncAllocateRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAllocateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SDK::Stub::Shutdown(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Shutdown_, context, request, response);
}

void SDK::Stub::async::Shutdown(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Shutdown_, context, request, response, std::move(f));
}

void SDK::Stub::async::Shutdown(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Shutdown_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Shutdown_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncShutdownRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncShutdownRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::agones::dev::sdk::Empty>* SDK::Stub::HealthRaw(::grpc::ClientContext* context, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::ClientWriterFactory< ::agones::dev::sdk::Empty>::Create(channel_.get(), rpcmethod_Health_, context, response);
}

void SDK::Stub::async::Health(::grpc::ClientContext* context, ::agones::dev::sdk::Empty* response, ::grpc::ClientWriteReactor< ::agones::dev::sdk::Empty>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::agones::dev::sdk::Empty>::Create(stub_->channel_.get(), stub_->rpcmethod_Health_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncHealthRaw(::grpc::ClientContext* context, ::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::agones::dev::sdk::Empty>::Create(channel_.get(), cq, rpcmethod_Health_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncHealthRaw(::grpc::ClientContext* context, ::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::agones::dev::sdk::Empty>::Create(channel_.get(), cq, rpcmethod_Health_, context, response, false, nullptr);
}

::grpc::Status SDK::Stub::GetGameServer(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::agones::dev::sdk::GameServer* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::GameServer, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetGameServer_, context, request, response);
}

void SDK::Stub::async::GetGameServer(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::GameServer* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::Empty, ::agones::dev::sdk::GameServer, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetGameServer_, context, request, response, std::move(f));
}

void SDK::Stub::async::GetGameServer(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::GameServer* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetGameServer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::GameServer>* SDK::Stub::PrepareAsyncGetGameServerRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::GameServer, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetGameServer_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::GameServer>* SDK::Stub::AsyncGetGameServerRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetGameServerRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::agones::dev::sdk::GameServer>* SDK::Stub::WatchGameServerRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request) {
  return ::grpc::internal::ClientReaderFactory< ::agones::dev::sdk::GameServer>::Create(channel_.get(), rpcmethod_WatchGameServer_, context, request);
}

void SDK::Stub::async::WatchGameServer(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty* request, ::grpc::ClientReadReactor< ::agones::dev::sdk::GameServer>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::agones::dev::sdk::GameServer>::Create(stub_->channel_.get(), stub_->rpcmethod_WatchGameServer_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::agones::dev::sdk::GameServer>* SDK::Stub::AsyncWatchGameServerRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::agones::dev::sdk::GameServer>::Create(channel_.get(), cq, rpcmethod_WatchGameServer_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::agones::dev::sdk::GameServer>* SDK::Stub::PrepareAsyncWatchGameServerRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::agones::dev::sdk::GameServer>::Create(channel_.get(), cq, rpcmethod_WatchGameServer_, context, request, false, nullptr);
}

::grpc::Status SDK::Stub::SetLabel(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetLabel_, context, request, response);
}

void SDK::Stub::async::SetLabel(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetLabel_, context, request, response, std::move(f));
}

void SDK::Stub::async::SetLabel(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetLabel_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncSetLabelRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::KeyValue, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetLabel_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncSetLabelRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetLabelRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SDK::Stub::SetAnnotation(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetAnnotation_, context, request, response);
}

void SDK::Stub::async::SetAnnotation(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAnnotation_, context, request, response, std::move(f));
}

void SDK::Stub::async::SetAnnotation(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAnnotation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncSetAnnotationRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::KeyValue, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetAnnotation_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncSetAnnotationRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::KeyValue& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetAnnotationRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SDK::Stub::Reserve(::grpc::ClientContext* context, const ::agones::dev::sdk::Duration& request, ::agones::dev::sdk::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::agones::dev::sdk::Duration, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Reserve_, context, request, response);
}

void SDK::Stub::async::Reserve(::grpc::ClientContext* context, const ::agones::dev::sdk::Duration* request, ::agones::dev::sdk::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::agones::dev::sdk::Duration, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reserve_, context, request, response, std::move(f));
}

void SDK::Stub::async::Reserve(::grpc::ClientContext* context, const ::agones::dev::sdk::Duration* request, ::agones::dev::sdk::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reserve_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::PrepareAsyncReserveRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Duration& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::agones::dev::sdk::Empty, ::agones::dev::sdk::Duration, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Reserve_, context, request);
}

::grpc::ClientAsyncResponseReader< ::agones::dev::sdk::Empty>* SDK::Stub::AsyncReserveRaw(::grpc::ClientContext* context, const ::agones::dev::sdk::Duration& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReserveRaw(context, request, cq);
  result->StartCall();
  return result;
}

SDK::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Empty* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->Ready(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Empty* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->Allocate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Empty* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->Shutdown(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[3],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::Empty>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::agones::dev::sdk::Empty>* reader,
             ::agones::dev::sdk::Empty* resp) {
               return service->Health(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::GameServer, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Empty* req,
             ::agones::dev::sdk::GameServer* resp) {
               return service->GetGameServer(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< SDK::Service, ::agones::dev::sdk::Empty, ::agones::dev::sdk::GameServer>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Empty* req,
             ::grpc::ServerWriter<::agones::dev::sdk::GameServer>* writer) {
               return service->WatchGameServer(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::KeyValue* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->SetLabel(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::KeyValue, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::KeyValue* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->SetAnnotation(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SDK_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SDK::Service, ::agones::dev::sdk::Duration, ::agones::dev::sdk::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SDK::Service* service,
             ::grpc::ServerContext* ctx,
             const ::agones::dev::sdk::Duration* req,
             ::agones::dev::sdk::Empty* resp) {
               return service->Reserve(ctx, req, resp);
             }, this)));
}

SDK::Service::~Service() {
}

::grpc::Status SDK::Service::Ready(::grpc::ServerContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::Allocate(::grpc::ServerContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::Shutdown(::grpc::ServerContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::Health(::grpc::ServerContext* context, ::grpc::ServerReader< ::agones::dev::sdk::Empty>* reader, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::GetGameServer(::grpc::ServerContext* context, const ::agones::dev::sdk::Empty* request, ::agones::dev::sdk::GameServer* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::WatchGameServer(::grpc::ServerContext* context, const ::agones::dev::sdk::Empty* request, ::grpc::ServerWriter< ::agones::dev::sdk::GameServer>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::SetLabel(::grpc::ServerContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::SetAnnotation(::grpc::ServerContext* context, const ::agones::dev::sdk::KeyValue* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SDK::Service::Reserve(::grpc::ServerContext* context, const ::agones::dev::sdk::Duration* request, ::agones::dev::sdk::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace agones
}  // namespace dev
}  // namespace sdk

