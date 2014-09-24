// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef JAVASCRIPT_REQUESTOR_INTERFACE_H_
#define JAVASCRIPT_REQUESTOR_INTERFACE_H_

#include <string>

// Makes requests to JavaScript. Requests are asynchronous and responses must be
// handled by other classes. This class stricly makes requests.
class JavaScriptRequestorInterface {
 public:
  virtual ~JavaScriptRequestorInterface() {}

  // Request a file chunk from JavaScript. The request is asynchronous.
  // offset must be >= 0 and bytes_to_read > 0.
  virtual void RequestFileChunk(const std::string& request_id,
                                int64_t offset,
                                int64_t bytes_to_read) = 0;
};

#endif  // JAVASCRIPT_REQUESTOR_INTERFACE_H_
