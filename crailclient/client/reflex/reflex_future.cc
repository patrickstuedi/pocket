/*
 * CppCrail: Native Crail
 *
 * Author: Patrick Stuedi  <stu@zurich.ibm.com>
 *
 * Copyright (C) 2015-2018, IBM Corporation
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "reflex_future.h"

ReflexFuture::ReflexFuture(ReflexChecker *reflex_checker, long long ticket,
                           shared_ptr<ByteBuffer> buffer)
    : reflex_checker_(reflex_checker), ticket_(ticket) {
  this->buffer_ = buffer;
}

ReflexFuture::~ReflexFuture() {}

int ReflexFuture::Get() { return reflex_checker_->PollResponse(); }
