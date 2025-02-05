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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/instances_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InstancesConnectionIdempotencyPolicy::~InstancesConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultInstancesConnectionIdempotencyPolicy
    : public InstancesConnectionIdempotencyPolicy {
 public:
  ~DefaultInstancesConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<InstancesConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultInstancesConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListInstances(
      google::appengine::v1::ListInstancesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetInstance(
      google::appengine::v1::GetInstanceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteInstance(
      google::appengine::v1::DeleteInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DebugInstance(
      google::appengine::v1::DebugInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<InstancesConnectionIdempotencyPolicy>
MakeDefaultInstancesConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultInstancesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
