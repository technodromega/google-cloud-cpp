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

#include "google/cloud/securitycenter/security_center_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SecurityCenterConnectionIdempotencyPolicy::
    ~SecurityCenterConnectionIdempotencyPolicy() = default;

namespace {
class DefaultSecurityCenterConnectionIdempotencyPolicy
    : public SecurityCenterConnectionIdempotencyPolicy {
 public:
  ~DefaultSecurityCenterConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultSecurityCenterConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency BulkMuteFindings(
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateSource(
      google::cloud::securitycenter::v1::CreateSourceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateFinding(
      google::cloud::securitycenter::v1::CreateFindingRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateMuteConfig(
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateNotificationConfig(
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteMuteConfig(
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteNotificationConfig(
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetMuteConfig(
      google::cloud::securitycenter::v1::GetMuteConfigRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetNotificationConfig(
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetOrganizationSettings(
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetSource(
      google::cloud::securitycenter::v1::GetSourceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GroupAssets(
      google::cloud::securitycenter::v1::GroupAssetsRequest) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GroupFindings(
      google::cloud::securitycenter::v1::GroupFindingsRequest) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListAssets(
      google::cloud::securitycenter::v1::ListAssetsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListFindings(
      google::cloud::securitycenter::v1::ListFindingsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListMuteConfigs(
      google::cloud::securitycenter::v1::ListMuteConfigsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListNotificationConfigs(
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListSources(
      google::cloud::securitycenter::v1::ListSourcesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency RunAssetDiscovery(
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetFindingState(
      google::cloud::securitycenter::v1::SetFindingStateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetMute(
      google::cloud::securitycenter::v1::SetMuteRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateExternalSystem(
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateFinding(
      google::cloud::securitycenter::v1::UpdateFindingRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateMuteConfig(
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateNotificationConfig(
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateOrganizationSettings(
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateSource(
      google::cloud::securitycenter::v1::UpdateSourceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateSecurityMarks(
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy>
MakeDefaultSecurityCenterConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultSecurityCenterConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter
}  // namespace cloud
}  // namespace google
