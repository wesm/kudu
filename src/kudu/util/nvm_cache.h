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
#ifndef KUDU_UTIL_NVM_CACHE_H_
#define KUDU_UTIL_NVM_CACHE_H_

#include <string>

namespace kudu {
class Cache;

// Create a cache in persistent memory with the given capacity.
Cache* NewLRUNvmCache(size_t capacity, const std::string& id);

}  // namespace kudu

#endif
