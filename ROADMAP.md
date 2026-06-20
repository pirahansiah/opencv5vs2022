# OpenCV 5 — Development Roadmap

## 12-Month Vision

Evolve the OpenCV 5 VS2022 distribution into a comprehensive cross-platform SDK with automated builds, hardware-optimized variants, and production deployment tooling for edge AI applications.

### Q1: Build Automation & Distribution
- Implement automated build pipeline (GitHub Actions) for OpenCV 5 static/dynamic libraries
- Add NuGet package generation for Visual Studio package manager integration
- Create Conan/vcpkg package recipes for C++ package manager ecosystem
- Add debug build variants alongside existing release builds
- Implement versioned releases with semantic versioning

### Q2: Multi-Platform Expansion
- Add Linux (Ubuntu 24.04) prebuilt libraries (GCC 14, Clang 18)
- Add macOS (Apple Silicon) prebuilt frameworks
- Implement cross-compilation toolchain for ARM64 Windows (Snapdragon X Elite)
- Add dynamic library (.dll/.so) distribution alongside static (.lib/.a)
- Create Docker images for reproducible build environments

### Q3: Hardware Optimization
- Implement CUDA 12.x backend build variant for NVIDIA GPUs
- Add OpenVINO 2025 integration for Intel CPU/iGPU/VPU
- Create AVX-512 optimized build for Intel Xeon and AMD EPYC
- Add Raspberry Pi 5 (ARM64) optimized build with NEON intrinsics
- Implement TensorRT 10.x backend for production NVIDIA inference

### Q4: Developer Experience & Production
- Create comprehensive API reference documentation (Doxygen + MDX)
- Add CMake Presets for one-command builds across all platforms
- Implement model zoo with pre-quantized ONNX models
- Create VS Code extension for OpenCV project scaffolding
- Release SDK v2.0 with full CI/CD, automated testing, and changelog

## Technical Debt

| Item | Priority | Impact | Effort |
|------|----------|--------|--------|
| Static-only distribution (no .dll) | High | Limits runtime loading | Medium |
| No automated build pipeline | High | Manual releases | Medium |
| Missing debug build variants | Medium | Debugging difficulty | Low |
| No package manager integration | Medium | Adoption friction | Medium |
| VS2022-only (no VS2019 compat) | Low | Broader audience | Low |
| No Linux/macOS builds | High | Cross-platform gap | High |
| Hardcoded paths in sample project | Medium | Portability issues | Low |
| Missing CI/CD testing | Medium | Regression risk | Medium |

## Future Features

| Feature | Description | Priority |
|---------|-------------|----------|
| NuGet Package | Visual Studio native package manager distribution | High |
| CUDA Build Variant | GPU-accelerated OpenCV 5 with TensorRT support | High |
| Linux/macOS Prebuilts | Cross-platform static and dynamic libraries | High |
| Conan/vcpkg Recipes | C++ package manager integration | Medium |
| Model Zoo | Pre-quantized ONNX models for common tasks | Medium |
| Docker Build Images | Reproducible build environments | Medium |
| ARM64 Build | Windows on ARM and Raspberry Pi support | Medium |
| VS Code Extension | Project scaffolding and configuration | Low |
| WebAssembly Build | Browser-based OpenCV 5 inference | Low |
| Benchmark Suite | Automated performance testing across hardware | Low |
