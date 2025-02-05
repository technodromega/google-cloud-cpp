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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/internal/assured_workloads_option_defaults.h"
#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/assuredworkloads/assured_workloads_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AssuredWorkloadsServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ASSURED_WORKLOADS_SERVICE_ENDPOINT",
      "", "assuredworkloads.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options
           .has<assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption>()) {
    options.set<assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption>(
        assuredworkloads::AssuredWorkloadsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption>()) {
    options.set<assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<
          assuredworkloads::AssuredWorkloadsServicePollingPolicyOption>()) {
    options.set<assuredworkloads::AssuredWorkloadsServicePollingPolicyOption>(
        GenericPollingPolicy<
            assuredworkloads::AssuredWorkloadsServiceRetryPolicyOption::Type,
            assuredworkloads::AssuredWorkloadsServiceBackoffPolicyOption::Type>(
            options
                .get<assuredworkloads::
                         AssuredWorkloadsServiceRetryPolicyOption>()
                ->clone(),
            options
                .get<assuredworkloads::
                         AssuredWorkloadsServiceBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options.has<
          assuredworkloads::
              AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<assuredworkloads::
                    AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>(
        assuredworkloads::
            MakeDefaultAssuredWorkloadsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google
