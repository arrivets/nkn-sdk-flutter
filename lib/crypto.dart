import 'dart:async';
import 'dart:typed_data';

import 'package:flutter/services.dart';

/// Crypto
class Crypto {
  static const MethodChannel _methodChannel =
      MethodChannel('org.nkn.sdk/crypto');

  /// [getPublicKeyFromPrivateKey]
  static Future<Uint8List> getPublicKeyFromPrivateKey(
      Uint8List privateKey) async {
    try {
      return await _methodChannel.invokeMethod('getPublicKeyFromPrivateKey', {
        'privateKey': privateKey,
      });
    } catch (e) {
      rethrow;
    }
  }

  /// [getPublicKeyFromPrivateKey]
  static Future<Uint8List> getPrivateKeyFromSeed(Uint8List seed) async {
    try {
      return await _methodChannel.invokeMethod('getPrivateKeyFromSeed', {
        'seed': seed,
      });
    } catch (e) {
      rethrow;
    }
  }

  /// [getSeedFromPrivateKey]
  static Future<Uint8List> getSeedFromPrivateKey(Uint8List privateKey) async {
    try {
      return await _methodChannel.invokeMethod('getSeedFromPrivateKey', {
        'privateKey': privateKey,
      });
    } catch (e) {
      rethrow;
    }
  }

  /// [sign] signs the given message with priv
  static Future<Uint8List> sign(Uint8List privateKey, Uint8List data) async {
    try {
      return await _methodChannel.invokeMethod('sign', {
        'privateKey': privateKey,
        'data': data,
      });
    } catch (e) {
      rethrow;
    }
  }

  /// [verify] reports whether sig is a valid signature of message by publicKey.
  static Future<bool> verify(
      Uint8List publicKey, Uint8List data, Uint8List signature) async {
    try {
      return await _methodChannel.invokeMethod('verify', {
        'publicKey': publicKey,
        'data': data,
        'signature': signature,
      });
    } catch (e) {
      rethrow;
    }
  }
}
