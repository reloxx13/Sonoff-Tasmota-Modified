/*
  zh-CN.h - localization for Chinese (Simplified) - China for Sonoff-Tasmota

  Copyright (C) 2019  Theo Arends (translated by killadm)

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_ZH_CN_H_
#define _LANGUAGE_ZH_CN_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.14.0b
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 2052
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "zh"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "日  一  二  三  四  五  六  "
#define D_MONTH3LIST "1月 2月 3月 4月 5月 6月 7月 8月 9月 10月11月12月"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "空气质量"
#define D_AP "AP"                    // Access Point
#define D_AS "名称:"
#define D_AUTO "自动"
#define D_BLINK "闪烁"
#define D_BLINKOFF "闪烁关"
#define D_BOOT_COUNT "启动次数"
#define D_BRIGHTLIGHT "亮"
#define D_BSSID "BSSId"
#define D_BUTTON "按钮"
#define D_BY "汉化: killadm 作者:"                    // Written by me
#define D_BYTES "大小:"
#define D_CELSIUS "摄氏"
#define D_CHANNEL "频道"
#define D_CO2 "二氧化碳"
#define D_CODE "代码"                // Button code
#define D_COLDLIGHT "冷"
#define D_COMMAND "命令:"
#define D_CONNECTED "已连接"
#define D_COUNT "数量:"
#define D_COUNTER "计数器"
#define D_CURRENT "电流"          // As in Voltage and Current
#define D_DATA "数据:"
#define D_DARKLIGHT "暗"
#define D_DEBUG "调试"
#define D_DISABLED "禁用"
#define D_DISTANCE "距离"
#define D_DNS_SERVER "DNS服务器"
#define D_DONE "完成"
#define D_DST_TIME "DST"
#define D_ECO2 "eCO2"
#define D_EMULATION "设备模拟"
#define D_ENABLED "启用"
#define D_ERASE "擦除"
#define D_ERROR "错误"
#define D_FAHRENHEIT "华氏"
#define D_FAILED "失败"
#define D_FALLBACK "回退"
#define D_FALLBACK_TOPIC "回退主题"
#define D_FALSE "False"
#define D_FILE "文件:"
#define D_FREE_MEMORY "空闲内存"
#define D_FREQUENCY "频率"
#define D_GAS "气体"
#define D_GATEWAY "网关"
#define D_GROUP "组:"
#define D_HOST "主机"
#define D_HOSTNAME "主机名"
#define D_HUMIDITY "湿度"
#define D_ILLUMINANCE "照度"
#define D_IMMEDIATE "单次按键"      // Button immediate
#define D_INDEX "索引:"
#define D_INFO "信息"
#define D_INFRARED "红外线"
#define D_INITIALIZED "初始化完成"
#define D_IP_ADDRESS "IP地址"
#define D_LIGHT "灯"
#define D_LWT "LWT"
#define D_MODULE "模块"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "多次按键"
#define D_NOISE "嘈杂"
#define D_NONE "无"
#define D_OFF "关"
#define D_OFFLINE "离线"
#define D_OK "好"
#define D_ON "开"
#define D_ONLINE "在线"
#define D_PASSWORD "密码"
#define D_PORT "端口"
#define D_POWER_FACTOR "功率因数"
#define D_POWERUSAGE "功率"
#define D_POWERUSAGE_ACTIVE "有功功率"
#define D_POWERUSAGE_APPARENT "视在功率"
#define D_POWERUSAGE_REACTIVE "无功功率"
#define D_PRESSURE "气压"
#define D_PRESSUREATSEALEVEL "海平面气压"
#define D_PROGRAM_FLASH_SIZE "固件 Flash 大小"
#define D_PROGRAM_SIZE "固件大小"
#define D_PROJECT "项目:"
#define D_RAIN "降水量"
#define D_RECEIVED "已接收"
#define D_RESTART "重启"
#define D_RESTARTING "正在重启"
#define D_RESTART_REASON "重启原因"
#define D_RESTORE "恢复"
#define D_RETAINED "已保留"
#define D_RULE "规则"
#define D_SAVE "保存"
#define D_SENSOR "传感器"
#define D_SSID "名称"
#define D_START "开始"
#define D_STD_TIME "STD"
#define D_STOP "停止"
#define D_SUBNET_MASK "子网掩码"
#define D_SUBSCRIBE_TO "订阅"
#define D_UNSUBSCRIBE_FROM "退订"
#define D_SUCCESSFUL "成功"
#define D_SUNRISE "日出"
#define D_SUNSET "日落"
#define D_TEMPERATURE "温度"
#define D_TO "to"
#define D_TOGGLE "切换"
#define D_TOPIC "主题"
#define D_TRANSMIT "发送"
#define D_TRUE "True"
#define D_TVOC "TVOC"
#define D_UPGRADE "升级"
#define D_UPLOAD "上传"
#define D_UPTIME "运行时间"
#define D_USER "用户名"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "紫外线指数"
#define D_UV_INDEX_1 "低"
#define D_UV_INDEX_2 "中"
#define D_UV_INDEX_3 "高"
#define D_UV_INDEX_4 "危险"
#define D_UV_INDEX_5 "BurnL1/2"
#define D_UV_INDEX_6 "BurnL3"
#define D_UV_INDEX_7 "OoR"
#define D_UV_LEVEL "紫外线水平"
#define D_UV_POWER "紫外线功率 "
#define D_VERSION "版本"
#define D_VOLTAGE "电压"
#define D_WEIGHT "重量"
#define D_WARMLIGHT "暖"
#define D_WEB_SERVER "Web Server"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "警告：精简固件不支持配置持久化保存"
#define D_LEVEL_10 "level 1-0"
#define D_LEVEL_01 "level 0-1"
#define D_SERIAL_LOGGING_DISABLED "串口日志已禁用"
#define D_SYSLOG_LOGGING_REENABLED "Syslog 日志已开启"

#define D_SET_BAUDRATE_TO "设置波特率为:"
#define D_RECEIVED_TOPIC "接收到的主题:"
#define D_DATA_SIZE "数据大小:"
#define D_ANALOG_INPUT "Analog"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Blocked Loop"
#define D_WPS_FAILED_WITH_STATUS "WPS 配置失败，状态:"
#define D_ACTIVE_FOR_3_MINUTES "激活 3 分钟"
#define D_FAILED_TO_START "未能启动"
#define D_PATCH_ISSUE_2186 "Patch issue 2186"
#define D_CONNECTING_TO_AP "连接到 AP"
#define D_IN_MODE "模式:"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "连接失败，因为没有获取到 IP 地址"
#define D_CONNECT_FAILED_AP_NOT_REACHED "连接失败，无法连接 AP"
#define D_CONNECT_FAILED_WRONG_PASSWORD "连接失败，AP 密码不正确"
#define D_CONNECT_FAILED_AP_TIMEOUT "连接失败，AP 超时"
#define D_ATTEMPTING_CONNECTION "尝试连接..."
#define D_CHECKING_CONNECTION "检查连接..."
#define D_QUERY_DONE "查询完成。 发现 MQTT 服务"
#define D_MQTT_SERVICE_FOUND "发现 MQTT 服务:"
#define D_FOUND_AT "发现:"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog 主机未找到"

// settings.ino
#define D_SAVED_TO_FLASH_AT "保存到 flash:"
#define D_LOADED_FROM_FLASH_AT "从 flash 载入:"
#define D_USE_DEFAULTS "使用默认设置"
#define D_ERASED_SECTOR "擦除扇区"

// webserver.ino
#define D_NOSCRIPT "Tasmota要求浏览器支持 JavaScript"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "当前是精简版固件<br/>请升级"
#define D_WEBSERVER_ACTIVE_ON "Web 服务器地址:"
#define D_WITH_IP_ADDRESS "IP 地址:"
#define D_WEBSERVER_STOPPED "Web 服务已停止"
#define D_FILE_NOT_FOUND "文件未找到"
#define D_REDIRECTED "重定向到认证页面"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifimanager 设置无线操作模式"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager 设置接入点"
#define D_TRYING_TO_CONNECT "尝试将设备连接到网络"

#define D_RESTART_IN "重启需要"
#define D_SECONDS "秒"
#define D_DEVICE_WILL_RESTART "设备将在几秒钟内重启"
#define D_BUTTON_TOGGLE "状态切换"
#define D_CONFIGURATION "设置"
#define D_INFORMATION "信息"
#define D_FIRMWARE_UPGRADE "固件升级"
#define D_CONSOLE "控制台"
#define D_CONFIRM_RESTART "确认重启"

#define D_CONFIGURE_MODULE "模块设置"
#define D_CONFIGURE_WIFI "WiFi设置"
#define D_CONFIGURE_MQTT "MQTT设置"
#define D_CONFIGURE_DOMOTICZ "Domoticz设置"
#define D_CONFIGURE_LOGGING "日志设置"
#define D_CONFIGURE_OTHER "其他设置"
#define D_CONFIRM_RESET_CONFIGURATION "确认重置配置"
#define D_RESET_CONFIGURATION "重置配置"
#define D_BACKUP_CONFIGURATION "备份配置"
#define D_RESTORE_CONFIGURATION "还原配置"
#define D_MAIN_MENU "主菜单"

#define D_MODULE_PARAMETERS "模块设置"
#define D_MODULE_TYPE "模块类型"
#define D_PULLUP_ENABLE "没有按钮/开关上拉"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "串口输入(RX)"
#define D_SERIAL_OUT "串口输出(TX)"

#define D_WIFI_PARAMETERS "Wifi设置"
#define D_SCAN_FOR_WIFI_NETWORKS "扫描无线网络"
#define D_SCAN_DONE "扫描完毕"
#define D_NO_NETWORKS_FOUND "未找到任何网络"
#define D_REFRESH_TO_SCAN_AGAIN "刷新并重试"
#define D_DUPLICATE_ACCESSPOINT "重复AP"
#define D_SKIPPING_LOW_QUALITY "忽略弱信号网络"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 名称"
#define D_AP1_PASSWORD "AP1 密码"
#define D_AP2_SSID "AP2 名称"
#define D_AP2_PASSWORD "AP2 密码"

#define D_MQTT_PARAMETERS "MQTT 设置"
#define D_CLIENT "客户端"
#define D_FULL_TOPIC "完整主题"

#define D_LOGGING_PARAMETERS "日志设置"
#define D_SERIAL_LOG_LEVEL "串口日志级别"
#define D_WEB_LOG_LEVEL "Web 日志级别"
#define D_SYS_LOG_LEVEL "Syslog 日志级别"
#define D_MORE_DEBUG "全部调试"
#define D_SYSLOG_HOST "Syslog 主机地址"
#define D_SYSLOG_PORT "Syslog 端口"
#define D_TELEMETRY_PERIOD "上报周期"

#define D_OTHER_PARAMETERS "其他设置"
#define D_TEMPLATE "模板"
#define D_ACTIVATE "启用"
#define D_WEB_ADMIN_PASSWORD "WEB 管理密码"
#define D_MQTT_ENABLE "启用MQTT"
#define D_FRIENDLY_NAME "昵称"
#define D_BELKIN_WEMO "贝尔金 WeMo"
#define D_HUE_BRIDGE "飞利浦 Hue 网桥"
#define D_SINGLE_DEVICE "单设备"
#define D_MULTI_DEVICE "多设备"

#define D_CONFIGURE_TEMPLATE "模板配置"
#define D_TEMPLATE_PARAMETERS "模板参数"
#define D_TEMPLATE_NAME "名称"
#define D_BASE_TYPE "基于"
#define D_TEMPLATE_FLAGS "选项"
#define D_ALLOW_ADC0 "ADC0 输入"
#define D_ALLOW_PULLUP "用户上拉选择"

#define D_SAVE_CONFIGURATION "保存设置"
#define D_CONFIGURATION_SAVED "设置已保存"
#define D_CONFIGURATION_RESET "设置已重置"

#define D_PROGRAM_VERSION "固件版本"
#define D_BUILD_DATE_AND_TIME "编译时间"
#define D_CORE_AND_SDK_VERSION "内核和 SDK 版本"
#define D_FLASH_WRITE_COUNT "Flash 写入次数"
#define D_MAC_ADDRESS "MAC 地址"
#define D_MQTT_HOST "MQTT 主机"
#define D_MQTT_PORT "MQTT 端口"
#define D_MQTT_CLIENT "MQTT 客户端"
#define D_MQTT_USER "MQTT 用户名"
#define D_MQTT_TOPIC "MQTT 主题"
#define D_MQTT_GROUP_TOPIC "MQTT 主题组"
#define D_MQTT_FULL_TOPIC "MQTT 完整主题"
#define D_MDNS_DISCOVERY "mDNS 发现"
#define D_MDNS_ADVERTISE "mDNS 广播"
#define D_ESP_CHIP_ID "ESP 芯片 ID"
#define D_FLASH_CHIP_ID "Flash 芯片 ID"
#define D_FLASH_CHIP_SIZE "Flash 大小"
#define D_FREE_PROGRAM_SPACE "空闲程序空间"

#define D_UPGRADE_BY_WEBSERVER "通过 Web 升级"
#define D_OTA_URL "OTA 地址"
#define D_START_UPGRADE "开始升级"
#define D_UPGRADE_BY_FILE_UPLOAD "通过文件升级"
#define D_UPLOAD_STARTED "开始上传"
#define D_UPGRADE_STARTED "开始升级"
#define D_UPLOAD_DONE "上传完成"
#define D_UPLOAD_ERR_1 "没有选择任何文件"
#define D_UPLOAD_ERR_2 "没有足够空间"
#define D_UPLOAD_ERR_3 "固件头不是 0xE9"
#define D_UPLOAD_ERR_4 "固件大小超过 flash 容量"
#define D_UPLOAD_ERR_5 "上传缓冲区不足，请先刷入精简固件再升级"
#define D_UPLOAD_ERR_6 "上传失败。 启用日志级别 3 调试"
#define D_UPLOAD_ERR_7 "上传取消"
#define D_UPLOAD_ERR_8 "错误的固件"
#define D_UPLOAD_ERR_9 "固件太大"
#define D_UPLOAD_ERR_10 "初始化 RF 芯片失败"
#define D_UPLOAD_ERR_11 "擦除 RF 芯片失败"
#define D_UPLOAD_ERR_12 "写入 RF 芯片失败"
#define D_UPLOAD_ERR_13 "解码 RF 固件失败"
#define D_UPLOAD_ERROR_CODE "上传错误代码"

#define D_ENTER_COMMAND "输入命令"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "如果想得到预期响应，请调整日志级别至: 2 信息"
#define D_NEED_USER_AND_PASSWORD "需要 user=<用户名>&password=<密码>"

// xdrv_00_mqtt.ino
#define D_FINGERPRINT "验证 TLS 指纹..."
#define D_TLS_CONNECT_FAILED_TO "TLS 连接失败"
#define D_RETRY_IN "重试倒计时:"
#define D_VERIFIED "验证成功"
#define D_INSECURE "指纹无效导致连接不安全"
#define D_CONNECT_FAILED_TO "连接失败:"

// xdrv_wemohue.ino
#define D_MULTICAST_DISABLED "组播已禁用"
#define D_MULTICAST_REJOINED "组播已(重新)加入"
#define D_MULTICAST_JOIN_FAILED "组播加入失败"
#define D_FAILED_TO_SEND_RESPONSE "请求发送失败"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo 基础事件"
#define D_WEMO_EVENT_SERVICE "WeMo 事件服务"
#define D_WEMO_META_SERVICE "WeMo meta 服务"
#define D_WEMO_SETUP "WeMo 设置"
#define D_RESPONSE_SENT "发送请求"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue 设置"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API 未实现"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST 参数"
#define D_3_RESPONSE_PACKETS_SENT "3 请求包发送"

// xdrv_05_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz 设置"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "开关 idx"
#define D_DOMOTICZ_SENSOR_IDX "传感器 idx"
  #define D_DOMOTICZ_TEMP "温度"
  #define D_DOMOTICZ_TEMP_HUM "温度,湿度"
  #define D_DOMOTICZ_TEMP_HUM_BARO "温度,湿度,气压"
  #define D_DOMOTICZ_POWER_ENERGY "功率,电量"
  #define D_DOMOTICZ_ILLUMINANCE "照度"
  #define D_DOMOTICZ_COUNT "数值/PM1"
  #define D_DOMOTICZ_VOLTAGE "电压/PM2.5"
  #define D_DOMOTICZ_CURRENT "电流/PM10"
  #define D_DOMOTICZ_AIRQUALITY "空气质量"
#define D_DOMOTICZ_UPDATE_TIMER "更新计时器"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "定时器设置"
#define D_TIMER_PARAMETERS "定时器参数"
#define D_TIMER_ENABLE "启用定时器"
#define D_TIMER_ARM "启用"
#define D_TIMER_TIME "时间"
#define D_TIMER_DAYS "天"
#define D_TIMER_REPEAT "重复"
#define D_TIMER_OUTPUT "输出"
#define D_TIMER_ACTION "动作"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "KNX 配置"
#define D_KNX_PARAMETERS "KNX 参数"
#define D_KNX_GENERAL_CONFIG "同用"
#define D_KNX_PHYSICAL_ADDRESS "物理地址"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( 在 KNX 网络上必须是唯一的 )"
#define D_KNX_ENABLE "启用 KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "要发送到组地址的数据"
#define D_ADD "添加"
#define D_DELETE "删除"
#define D_REPLY "回复"
#define D_KNX_GROUP_ADDRESS_TO_READ "用来接收数据的组地址"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "接收自"
#define D_KNX_COMMAND_WRITE "写"
#define D_KNX_COMMAND_READ "读"
#define D_KNX_COMMAND_OTHER "其他"
#define D_SENT_TO "发送到"
#define D_KNX_WARNING "组地址（0/0/0）被保留，不能使用。"
#define D_KNX_ENHANCEMENT "通讯增强"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "今日用电量"
#define D_ENERGY_YESTERDAY "昨日用电量"
#define D_ENERGY_TOTAL "总用电量"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "传感器正忙"
#define D_SENSOR_CRC_ERROR "传感器 CRC 校验错误"
#define D_SENSORS_FOUND "发现传感器"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "等待超时"
#define D_START_SIGNAL_LOW "开始低电平"
#define D_START_SIGNAL_HIGH "开始高电平"
#define D_PULSE "pulse"
#define D_CHECKSUM_FAILURE "校验失败"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "传感器没有确认命令"
#define D_SHT1X_FOUND "发现 SHT1X 传感器"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "颗粒物直径大于"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "加速度计X轴分量"
#define D_AY_AXIS "加速度计Y轴分量"
#define D_AZ_AXIS "加速度计Z轴分量"
#define D_GX_AXIS "绕X轴旋转的角速度"
#define D_GY_AXIS "绕Y轴旋转的角速度"
#define D_GZ_AXIS "绕Z轴旋转的角速度"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "去除重量"
#define D_HX_CAL_REFERENCE "加载参考重量"
#define D_HX_CAL_DONE "已校准"
#define D_HX_CAL_FAIL "校准失败"
#define D_RESET_HX711 "秤重置"
#define D_CONFIGURE_HX711 "秤配置"
#define D_HX711_PARAMETERS "秤参数"
#define D_ITEM_WEIGHT "物品中粮"
#define D_REFERENCE_WEIGHT "参考重量"
#define D_CALIBRATE "校准"
#define D_CALIBRATION "校准"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "风向"
#define D_TX20_WIND_SPEED "风速"
#define D_TX20_WIND_SPEED_AVG "平均风速"
#define D_TX20_WIND_SPEED_MAX "最高风速"
#define D_TX20_NORTH "北"
#define D_TX20_EAST "东"
#define D_TX20_SOUTH "南"
#define D_TX20_WEST "西"

// sonoff_template.h - keep them as short as possible to be able to fit them in GUI drop down box
#define D_SENSOR_NONE          "无"
#define D_SENSOR_USER          "User"
#define D_SENSOR_DHT11         "DHT11"
#define D_SENSOR_AM2301        "AM2301"
#define D_SENSOR_SI7021        "SI7021"
#define D_SENSOR_DS18X20       "DS18x20"
#define D_SENSOR_I2C_SCL       "I2C SCL"
#define D_SENSOR_I2C_SDA       "I2C SDA"
#define D_SENSOR_WS2812        "WS2812"
#define D_SENSOR_DFR562        "MP3 Player"
#define D_SENSOR_IRSEND        "IRsend"
#define D_SENSOR_SWITCH        "Switch"     // Suffix "1"
#define D_SENSOR_BUTTON        "Button"     // Suffix "1"
#define D_SENSOR_RELAY         "Relay"      // Suffix "1i"
#define D_SENSOR_LED           "Led"        // Suffix "1i"
#define D_SENSOR_PWM           "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER       "Counter"    // Suffix "1"
#define D_SENSOR_IRRECV        "IRrecv"
#define D_SENSOR_MHZ_RX        "MHZ Rx"
#define D_SENSOR_MHZ_TX        "MHZ Tx"
#define D_SENSOR_PZEM004_RX    "PZEM004 Rx"
#define D_SENSOR_PZEM016_RX    "PZEM016 Rx"
#define D_SENSOR_PZEM017_RX    "PZEM017 Rx"
#define D_SENSOR_PZEM0XX_TX    "PZEM0XX Tx"
#define D_SENSOR_SAIR_RX       "SAir Rx"
#define D_SENSOR_SAIR_TX       "SAir Tx"
#define D_SENSOR_SPI_CS        "SPI CS"
#define D_SENSOR_SPI_DC        "SPI DC"
#define D_SENSOR_BACKLIGHT     "BkLight"
#define D_SENSOR_PMS5003       "PMS5003"
#define D_SENSOR_SDS0X1_RX     "SDS0X1 Rx"
#define D_SENSOR_SDS0X1_TX     "SDS0X1 Tx"
#define D_SENSOR_SBR_RX        "SerBr Rx"
#define D_SENSOR_SBR_TX        "SerBr Tx"
#define D_SENSOR_SR04_TRIG     "SR04 Tri"
#define D_SENSOR_SR04_ECHO     "SR04 Ech"
#define D_SENSOR_SDM120_TX     "SDMx20 Tx"
#define D_SENSOR_SDM120_RX     "SDMx20 Rx"
#define D_SENSOR_SDM630_TX     "SDM630 Tx"
#define D_SENSOR_SDM630_RX     "SDM630 Rx"
#define D_SENSOR_TM1638_CLK    "TM16 CLK"
#define D_SENSOR_TM1638_DIO    "TM16 DIO"
#define D_SENSOR_TM1638_STB    "TM16 STB"
#define D_SENSOR_HX711_SCK     "HX711 SCK"
#define D_SENSOR_HX711_DAT     "HX711 DAT"
#define D_SENSOR_TX20_TX       "TX20"
#define D_SENSOR_RFSEND        "RFSend"
#define D_SENSOR_RFRECV        "RFrecv"
#define D_SENSOR_TUYA_TX       "Tuya Tx"
#define D_SENSOR_TUYA_RX       "Tuya Rx"
#define D_SENSOR_MGC3130_XFER  "MGC3130 Xfr"
#define D_SENSOR_MGC3130_RESET "MGC3130 Rst"
#define D_SENSOR_SSPI_MISO     "SSPI MISO"
#define D_SENSOR_SSPI_MOSI     "SSPI MOSI"
#define D_SENSOR_SSPI_SCLK     "SSPI SCLK"
#define D_SENSOR_SSPI_CS       "SSPI CS"
#define D_SENSOR_SSPI_DC       "SSPI DC"
#define D_SENSOR_RF_SENSOR     "RF Sensor"
#define D_SENSOR_AZ_RX         "AZ Rx"
#define D_SENSOR_AZ_TX         "AZ Tx"
#define D_SENSOR_MAX31855_CS   "MX31855 CS"
#define D_SENSOR_MAX31855_CLK  "MX31855 CLK"
#define D_SENSOR_MAX31855_DO   "MX31855 DO"
#define D_SENSOR_NRG_SEL       "HLWBL SEL"  // Suffix "i"
#define D_SENSOR_NRG_CF1       "HLWBL CF1"
#define D_SENSOR_HLW_CF        "HLW8012 CF"
#define D_SENSOR_HJL_CF        "BL0937 CF"
#define D_SENSOR_MCP39F5_TX    "MCP39F5 Tx"
#define D_SENSOR_MCP39F5_RX    "MCP39F5 Rx"
#define D_SENSOR_MCP39F5_RST   "MCP39F5 Rst"
#define D_SENSOR_CSE7766_TX    "CSE7766 Tx"
#define D_SENSOR_CSE7766_RX    "CSE7766 Rx"
#define D_SENSOR_PN532_TX      "PN532 Tx"
#define D_SENSOR_PN532_RX      "PN532 Rx"
#define D_SENSOR_SM16716_CLK   "SM16716 CLK"
#define D_SENSOR_SM16716_DAT   "SM16716 DAT"
#define D_SENSOR_SM16716_POWER "SM16716 PWR"
#define D_SENSOR_MY92X1_DI     "MY92x1 DI"
#define D_SENSOR_MY92X1_DCKI   "MY92x1 DCKI"
#define D_SENSOR_ARIRFRCV      "ALux IrRcv"
#define D_SENSOR_TXD           "Serial Tx"
#define D_SENSOR_RXD           "Serial Rx"
#define D_SENSOR_ROTARY        "Rotary"     // Suffix "1A"

// Units
#define D_UNIT_AMPERE "安"
#define D_UNIT_CENTIMETER "厘米"
#define D_UNIT_HOUR "时"
#define D_UNIT_INCREMENTS "inc"
#define D_UNIT_KILOGRAM "千克"
#define D_UNIT_KILOMETER_PER_HOUR "公里/时"  // or "km/h"
#define D_UNIT_KILOOHM "千欧"
#define D_UNIT_KILOWATTHOUR "千瓦时"
#define D_UNIT_LUX "勒克斯"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "微克/立方米"
#define D_UNIT_MICROMETER "微米"
#define D_UNIT_MICROSECOND "微秒"
#define D_UNIT_MILLIAMPERE "毫安"
#define D_UNIT_MILLIMETER "毫米"
#define D_UNIT_MILLIMETER_MERCURY "毫米汞柱"
#define D_UNIT_MILLISECOND "毫秒"
#define D_UNIT_MINUTE "分"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "每分升"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "百帕"
#define D_UNIT_SECOND "秒"
#define D_UNIT_SECTORS "扇区"
#define D_UNIT_VA "伏安"
#define D_UNIT_VAR "无功伏安"
#define D_UNIT_VOLT "伏"
#define D_UNIT_WATT "瓦"
#define D_UNIT_WATTHOUR "瓦时"
#define D_UNIT_HERTZ "赫兹"
#define D_UNIT_WATT_METER_QUADRAT "瓦/平米"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

//SDM220
#define D_PHASE_ANGLE     "相位角"
#define D_IMPORT_ACTIVE   "有功输入"
#define D_EXPORT_ACTIVE   "有功输出"
#define D_IMPORT_REACTIVE "无功输入"
#define D_EXPORT_REACTIVE "无功输出"
#define D_TOTAL_REACTIVE  "总无功功率"
#define D_UNIT_KWARH      "千乏时"
#define D_UNIT_ANGLE      "度"

#define D_MODIFIED "modified"

#endif  // _LANGUAGE_ZH_CN_H_
