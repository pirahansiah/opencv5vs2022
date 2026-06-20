# OpenCV 5 — Visual Studio 2022

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![OpenCV](https://img.shields.io/badge/OpenCV-5.x-blue.svg)](https://opencv.org)
[![Visual Studio](https://img.shields.io/badge/Visual%20Studio-2022-purple.svg)](https://visualstudio.microsoft.com)
[![Platform](https://img.shields.io/badge/Platform-Windows%20x64-lightgrey.svg)](#)
[![YouTube](https://img.shields.io/badge/YouTube-Tutorials-red.svg)](https://www.youtube.com/tiziran)

OpenCV 5 static libraries prebuilt for Visual Studio 2022 (v143 toolset). Includes complete headers and static `.lib` files ready for C++ development.

> **Project by Dr. Farshid Pirahansiah** — [www.tiziran.com](https://www.tiziran.com) | [YouTube](https://www.youtube.com/tiziran)

## Contents

```
opencv5vs2022/
├── LICENSE                 # MIT License
├── opencv5/
│   ├── lib/               # Static libraries (VS19/VS22)
│   └── opencv2/           # Complete header files
│       ├── core/          # Core functionality
│       ├── dnn/           # Deep Neural Network module
│       ├── imgproc/       # Image processing
│       ├── objdetect/     # Object detection
│       ├── features2d/    # Feature detection
│       ├── calib3d/       # Camera calibration & 3D
│       ├── video/         # Video analysis
│       ├── gapi/          # Graph API (pipeline optimization)
│       ├── photo/         # Computational photography
│       ├── ml/            # Machine learning
│       ├── flann/         # Fast library for approximate nearest neighbors
│       ├── stitching/     # Image stitching
│       └── ...
└── farshid/               # Sample VS2022 project
    ├── Source.cpp
    ├── farshid.sln
    └── farshid.vcxproj
```

## Quick Start

1. Clone this repository
2. Open `farshid/farshid.sln` in Visual Studio 2022
3. Configure include path to `opencv5/opencv2/`
4. Configure library path to `opencv5/lib/`
5. Build (Release x64) and run

## What's New in OpenCV 5

- **Improved DNN module** — Better ONNX support, new layer types
- **G-API enhancements** — Graph-based pipeline optimization for real-time processing
- **Stereo vision improvements** — Enhanced stereo matching and depth estimation
- **3D module** — New dedicated module for 3D reconstruction (KinFu, point clouds)
- **Performance gains** — SIMD optimizations (AVX2, AVX-512, NEON)
- **Modern C++ API** — Improved type safety and usability
- **Vulkan backend** — GPU acceleration without CUDA dependency

## Module Overview

| Module | Functionality |
|--------|--------------|
| `core` | Basic structures, math, I/O, parallel processing |
| `imgproc` | Filtering, geometry, color, histograms, thresholds |
| `dnn` | Deep learning inference (ONNX, TensorFlow, Darknet) |
| `objdetect` | Haar cascades, HOG, DNN-based detection |
| `features2d` | ORB, AKAZE, BRISK, feature matching |
| `calib3d` | Camera calibration, stereo vision, pose estimation |
| `video` | Optical flow, motion estimation, background subtraction |
| `gapi` | Parallel graph execution, streaming pipelines |
| `photo` | HDR, inpainting, denoising, non-photorealistic rendering |
| `ml` | SVM, random forest, k-NN, neural networks, boosting |
| `stitching` | Panorama creation, image composition |

## Modern Deployment (2025-2026)

### Inference Acceleration

| Backend | Hardware | Speedup | Use Case |
|---------|----------|---------|----------|
| ONNX Runtime | CPU | 1-3x | Cross-platform |
| TensorRT | NVIDIA GPU | 5-20x | Production edge AI |
| OpenVINO | Intel CPU/GPU | 2-4x | Intel-optimized |
| DirectML | Windows GPU | 2-5x | Windows-native |
| Vulkan | Any GPU | 2-4x | Cross-vendor GPU |

### Edge AI Deployment Stack

```
Model Training (PyTorch/TF)
    ↓ Export
ONNX Format
    ↓ Quantize (QDQ INT8)
Optimized ONNX
    ↓ Deploy
┌─────────────────────────────────┐
│ NVIDIA Jetson  → TensorRT       │
│ Intel CPU      → OpenVINO       │
│ Raspberry Pi   → NCNN           │
│ Qualcomm       → QNN/SNPE      │
│ Windows        → ONNX Runtime   │
└─────────────────────────────────┘
```

## Related Projects

- [OpenCV 3.x (VS2015)](https://github.com/pirahansiah/opencv)
- [OpenCV 4 (VS2017)](https://github.com/pirahansiah/opencv4)
- [OpenCV Python Workshop](https://github.com/pirahansiah/opencv_python)

## Resources

- [OpenCV 5 Documentation](https://docs.opencv.org/5.x/)
- [OpenCV GitHub](https://github.com/opencv/opencv)
- [ONNX Runtime](https://onnxruntime.ai)
- [TensorRT](https://developer.nvidia.com/tensorrt)
- [OpenVINO](https://docs.openvino.ai)
- [YouTube Channel](https://www.youtube.com/tiziran)

## License

[MIT](LICENSE) — Copyright (c) 2022 Farshid PirahanSiah, PhD.
