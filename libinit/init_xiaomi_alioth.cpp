/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define DESCRIPTION "alioth_global-user 11 RKQ1.200826.002 V12.5.4.0.RKHMIXM release-keys"
#define FINGERPRINT "google/redfin/redfin:12/SQ1A.211205.008/7888514:user/release-keys"

static const variant_info_t aliothin_info = {
    .hwc_value = "INDIA",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "aliothin",
    .marketname = "Mi 11X",
    .model = "M2012K11AI",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,

    .nfc = false,
};

static const variant_info_t alioth_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "POCO",
    .device = "alioth",
    .marketname = "POCO F3",
    .model = "M2012K11AG",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,

    .nfc = true,
};

static const variant_info_t alioth_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "alioth",
    .marketname = "K40",
    .model = "M2012K11AC",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    aliothin_info,
    alioth_global_info,
    alioth_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
