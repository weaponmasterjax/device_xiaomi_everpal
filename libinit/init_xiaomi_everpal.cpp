/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t evergo_cn_info = {
    .bid_value = "S98016AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "evergo",
    .name = "evergo_cn",
    .manufacturer = "Xiaomi",
    .marketname = "Redmi Note 11 5G",
    .model = "21091116AC",
    .build_fingerprint = "Redmi/evergo_cn/evergo:13/TP1A.220624.014/V14.0.3.0.TGBCNXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t evergo_in_info = {
    .bid_value = "S98016BA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "evergo",
    .name = "evergo_in",
    .manufacturer = "Xiaomi",
    .marketname = "Redmi Note 11T 5G",
    .model = "21091116AI",
    .build_fingerprint = "Redmi/evergo_in/evergo:13/TP1A.220624.014/V14.0.2.0.TGBINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t evergo_in_p_info = {
    .bid_value = "S98016LA1",
    .sku_value = "",

    .brand = "POCO",
    .device = "evergo",
    .name = "evergo_p_in",
    .manufacturer = "Xiaomi",
    .marketname = "POCO M4 Pro 5G",
    .model = "22031116AI",
    .build_fingerprint = "POCO/evergo_p_in/evergo:13/TP1A.220624.014/V14.0.2.0.TGBINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t evergreen_info = {
    .bid_value = "S98017AA1",
    .sku_value = "",

    .brand = "POCO",
    .device = "evergreen",
    .name = "evergreen_global",
    .manufacturer = "Xiaomi",
    .marketname = "POCO M4 Pro 5G",
    .model = "21091116AG",
    .build_fingerprint = "POCO/evergreen_global/evergreen:13/TP1A.220624.014/V14.0.2.0.TGBMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t opal_info = {
    .bid_value = "S98018AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "opal",
    .name = "opal_global",
    .manufacturer = "Xiaomi",
    .marketname = "Redmi Note 11S 5G",
    .model = "22031116BG",
    .build_fingerprint = "Redmi/opal_global/opal:13/TP1A.220624.014/V14.0.3.0.TGLMIXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    evergo_cn_info,
    evergo_in_info,
    evergo_in_p_info,
    evergreen_info,
    opal_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
