/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A wrapper for TCP Ports
 */
@interface FBIDBPortsConfiguration : NSObject

#pragma mark Initializers

/**
 Construct a ports object.
 @return a new ports object
 */
- (instancetype)initWithGrpcDomainSocket:(nullable NSString *)grpcDomainSocket grpcPort:(in_port_t)grpcPort debugserverPort:(in_port_t)debugserverPort tlsCertPath:(nullable NSString *)tlsCertPath;

/**
 The GRPC Unix Domain Socket Path. nil if not set.
 */
@property (nonatomic, nullable, copy, readonly) NSString *grpcDomainSocket;

/**
 The GRPC TCP Port.
 */
@property (nonatomic, assign, readonly) in_port_t grpcPort;

/**
 The GRPC TCP Port of swift server.
 */
@property (nonatomic, assign, readonly) in_port_t grpcSwiftPort;

/**
 The debugserver port
 */
@property (nonatomic, assign, readonly) in_port_t debugserverPort;

/**
 The TLS server cert path. If not specified grpcPort will be listening on unencrypted socket
 */
@property (nonatomic, assign, readonly) NSString *tlsCertPath;

@end

NS_ASSUME_NONNULL_END
