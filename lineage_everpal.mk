#
# Copyright (C) 2023 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

# Inherit from everpal device
$(call inherit-product, device/xiaomi/everpal/device.mk)

# Device identifier. This must come after all inclusions
PRODUCT_NAME := lineage_everpal
PRODUCT_DEVICE := everpal
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := everpal

SAKURA_OFFICIAL := false
SAKURA_MAINTAINER := weaponmasterjax
TARGET_BOOT_ANIMATION_RES := 1080
SAKURA_BUILD_TYPE := gapps

# Build info
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
