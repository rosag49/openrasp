/*
 * Copyright 2017-2019 Baidu Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern "C"
{
#include <stdio.h>
}
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "openrasp_ctrl_block.h"

namespace openrasp
{

void OpenraspCtrlBlock::set_supervisor_id(pid_t supervisor_id)
{
    this->supervisor_id = supervisor_id;
}

pid_t OpenraspCtrlBlock::get_supervisor_id()
{
    return supervisor_id;
}

void OpenraspCtrlBlock::set_plugin_agent_id(pid_t plugin_agent_id)
{
    this->plugin_agent_id = plugin_agent_id;
}

pid_t OpenraspCtrlBlock::get_plugin_agent_id()
{
    return plugin_agent_id;
}

void OpenraspCtrlBlock::set_log_agent_id(pid_t log_agent_id)
{
    this->log_agent_id = log_agent_id;
}

pid_t OpenraspCtrlBlock::get_log_agent_id()
{
    return log_agent_id;
}

void OpenraspCtrlBlock::set_master_pid(pid_t master_pid)
{
    this->master_pid = master_pid;
}

pid_t OpenraspCtrlBlock::get_master_pid()
{
    return master_pid;
}

void OpenraspCtrlBlock::set_plugin_version(const char *plugin_version)
{
    strncpy(this->plugin_version, plugin_version, OpenraspCtrlBlock::plugin_version_size);
    last_update_time = (long)time(nullptr);
}

const char *OpenraspCtrlBlock::get_plugin_version()
{
    return plugin_version;
}

void OpenraspCtrlBlock::set_plugin_name(const char *plugin_name)
{
    strncpy(this->plugin_name, plugin_name, OpenraspCtrlBlock::plugin_name_size);
}

const char *OpenraspCtrlBlock::get_plugin_name()
{
    return plugin_name;
}

void OpenraspCtrlBlock::set_plugin_md5(const char *plugin_md5)
{
    strncpy(this->plugin_md5, plugin_md5, OpenraspCtrlBlock::plugin_md5_size);
}

const char *OpenraspCtrlBlock::get_plugin_md5()
{
    return plugin_md5;
}

long OpenraspCtrlBlock::get_last_update_time()
{
    return last_update_time;
}

void OpenraspCtrlBlock::set_registered(bool registered)
{
    this->registered = registered;
}

bool OpenraspCtrlBlock::get_registered()
{
    return registered;
}

} // namespace openrasp
