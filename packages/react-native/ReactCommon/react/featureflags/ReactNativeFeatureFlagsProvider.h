/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<760ad06ff565102e3ba42d671f45a470>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#pragma once

namespace facebook::react {

class ReactNativeFeatureFlagsProvider {
 public:
  virtual ~ReactNativeFeatureFlagsProvider() = default;

  virtual bool commonTestFlag() = 0;
  virtual bool allowCollapsableChildren() = 0;
  virtual bool allowRecursiveCommitsWithSynchronousMountOnAndroid() = 0;
  virtual bool batchRenderingUpdatesInEventLoop() = 0;
  virtual bool destroyFabricSurfacesInReactInstanceManager() = 0;
  virtual bool enableAlignItemsBaselineOnFabricIOS() = 0;
  virtual bool enableCleanTextInputYogaNode() = 0;
  virtual bool enableGranularShadowTreeStateReconciliation() = 0;
  virtual bool enableMicrotasks() = 0;
  virtual bool enableSynchronousStateUpdates() = 0;
  virtual bool enableUIConsistency() = 0;
  virtual bool fetchImagesInViewPreallocation() = 0;
  virtual bool fixIncorrectScrollViewStateUpdateOnAndroid() = 0;
  virtual bool fixMappingOfEventPrioritiesBetweenFabricAndReact() = 0;
  virtual bool fixMissedFabricStateUpdatesOnAndroid() = 0;
  virtual bool fixStoppedSurfaceRemoveDeleteTreeUIFrameCallbackLeak() = 0;
  virtual bool forceBatchingMountItemsOnAndroid() = 0;
  virtual bool fuseboxEnabledDebug() = 0;
  virtual bool fuseboxEnabledRelease() = 0;
  virtual bool lazyAnimationCallbacks() = 0;
  virtual bool setAndroidLayoutDirection() = 0;
  virtual bool useImmediateExecutorInAndroidBridgeless() = 0;
  virtual bool useModernRuntimeScheduler() = 0;
  virtual bool useNativeViewConfigsInBridgelessMode() = 0;
  virtual bool useNewReactImageViewBackgroundDrawing() = 0;
  virtual bool useRuntimeShadowNodeReferenceUpdate() = 0;
  virtual bool useRuntimeShadowNodeReferenceUpdateOnLayout() = 0;
  virtual bool useStateAlignmentMechanism() = 0;
};

} // namespace facebook::react
