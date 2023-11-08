#!/bin/bash
#
# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017-2020 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

DEVICE_PATH=$(cd $(dirname ${BASH_SOURCE[0]}) >/dev/null && pwd)
[ ! -z "${DEVICE_PATH}" ] && cd ${DEVICE_PATH}

set -e

export DEVICE=everpal
export DEVICE_COMMON=mt6833-common
export VENDOR=xiaomi
export VENDOR_COMMON=${VENDOR}

"./../../${VENDOR_COMMON}/${DEVICE_COMMON}/setup-makefiles.sh" "$@"
