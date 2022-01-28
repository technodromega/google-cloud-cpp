// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/internal/security_center_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterStub::~SecurityCenterStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBulkMuteFindings(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::CreateSource(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->CreateSource(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::CreateFinding(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->CreateFinding(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::CreateMuteConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status =
      grpc_stub_->CreateMuteConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::CreateNotificationConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status =
      grpc_stub_->CreateNotificationConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSecurityCenterStub::DeleteMuteConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteMuteConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSecurityCenterStub::DeleteNotificationConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteNotificationConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::v1::Policy> DefaultSecurityCenterStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::GetMuteConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status = grpc_stub_->GetMuteConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::GetNotificationConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status =
      grpc_stub_->GetNotificationConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
DefaultSecurityCenterStub::GetOrganizationSettings(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  google::cloud::securitycenter::v1::OrganizationSettings response;
  auto status =
      grpc_stub_->GetOrganizationSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::GetSource(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->GetSource(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
DefaultSecurityCenterStub::GroupAssets(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  google::cloud::securitycenter::v1::GroupAssetsResponse response;
  auto status = grpc_stub_->GroupAssets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
DefaultSecurityCenterStub::GroupFindings(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  google::cloud::securitycenter::v1::GroupFindingsResponse response;
  auto status = grpc_stub_->GroupFindings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
DefaultSecurityCenterStub::ListAssets(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  google::cloud::securitycenter::v1::ListAssetsResponse response;
  auto status = grpc_stub_->ListAssets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
DefaultSecurityCenterStub::ListFindings(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  google::cloud::securitycenter::v1::ListFindingsResponse response;
  auto status = grpc_stub_->ListFindings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
DefaultSecurityCenterStub::ListMuteConfigs(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  google::cloud::securitycenter::v1::ListMuteConfigsResponse response;
  auto status =
      grpc_stub_->ListMuteConfigs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
DefaultSecurityCenterStub::ListNotificationConfigs(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  google::cloud::securitycenter::v1::ListNotificationConfigsResponse response;
  auto status =
      grpc_stub_->ListNotificationConfigs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
DefaultSecurityCenterStub::ListSources(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  google::cloud::securitycenter::v1::ListSourcesResponse response;
  auto status = grpc_stub_->ListSources(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRunAssetDiscovery(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::SetFindingState(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status =
      grpc_stub_->SetFindingState(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::SetMute(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->SetMute(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultSecurityCenterStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultSecurityCenterStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
DefaultSecurityCenterStub::UpdateExternalSystem(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  google::cloud::securitycenter::v1::ExternalSystem response;
  auto status =
      grpc_stub_->UpdateExternalSystem(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::UpdateFinding(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->UpdateFinding(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::UpdateMuteConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status =
      grpc_stub_->UpdateMuteConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::UpdateNotificationConfig(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status =
      grpc_stub_->UpdateNotificationConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
DefaultSecurityCenterStub::UpdateOrganizationSettings(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  google::cloud::securitycenter::v1::OrganizationSettings response;
  auto status = grpc_stub_->UpdateOrganizationSettings(&client_context, request,
                                                       &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::UpdateSource(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->UpdateSource(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
DefaultSecurityCenterStub::UpdateSecurityMarks(
    grpc::ClientContext& client_context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  google::cloud::securitycenter::v1::SecurityMarks response;
  auto status =
      grpc_stub_->UpdateSecurityMarks(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSecurityCenterStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::longrunning::CancelOperationRequest const& request,
                 grpc::CompletionQueue* cq) {
            return operations_->AsyncCancelOperation(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_internal
}  // namespace cloud
}  // namespace google
