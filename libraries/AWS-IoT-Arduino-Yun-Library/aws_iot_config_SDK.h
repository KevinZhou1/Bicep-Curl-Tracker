/*
 * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


//===============================================================
#define AWS_IOT_MQTT_HOST "data.iot.us-east-1.amazonaws.com"    // your endpoint
#define AWS_IOT_MQTT_PORT 8883                                  // your port
#define AWS_IOT_CLIENT_ID   "My_ClientID"                       // your client ID
#define AWS_IOT_MY_THING_NAME "My_Board"                        // your thing name
#define AWS_IOT_ROOT_CA_FILENAME "aws-iot-rootCA.crt"           // your root-CA filename
#define AWS_IOT_CERTIFICATE_FILENAME "cert.pem"                 // your certificate filename
#define AWS_IOT_PRIVATE_KEY_FILENAME "privkey.pem"              // your private key filename
//===============================================================

#ifndef config_h
#define config_h

#define MAX_BUF_SIZE 256										// maximum number of bytes to publish/receive
#define MAX_SUB 15 												// maximum number of subscribe
#define CMD_TIME_OUT 100										// maximum time to wait for feedback from AR9331, 100 = 10 sec

#endif
