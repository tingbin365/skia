

/**************************************************************************************************
 *** This file was autogenerated from GrChildProcessorSampleMatrixSingleUniform.fp; do not modify.
 **************************************************************************************************/
#include "GrChildProcessorSampleMatrixSingleUniform.h"

#include "src/core/SkUtils.h"
#include "src/gpu/GrTexture.h"
#include "src/gpu/glsl/GrGLSLFragmentProcessor.h"
#include "src/gpu/glsl/GrGLSLFragmentShaderBuilder.h"
#include "src/gpu/glsl/GrGLSLProgramBuilder.h"
#include "src/sksl/SkSLCPP.h"
#include "src/sksl/SkSLUtil.h"
class GrGLSLChildProcessorSampleMatrixSingleUniform : public GrGLSLFragmentProcessor {
public:
    GrGLSLChildProcessorSampleMatrixSingleUniform() {}
    void emitCode(EmitArgs& args) override {
        GrGLSLFPFragmentBuilder* fragBuilder = args.fFragBuilder;
        const GrChildProcessorSampleMatrixSingleUniform& _outer = args.fFp.cast<GrChildProcessorSampleMatrixSingleUniform>();
        (void) _outer;
        matrixVar = args.fUniformHandler->addUniform(&_outer, kFragment_GrShaderFlag, kFloat3x3_GrSLType, "matrix");
        SkString _sample0 = this->invokeChildWithMatrix(0, args);
        fragBuilder->codeAppendf(
R"SkSL(return %s;
)SkSL"
, _sample0.c_str());
    }
private:
    void onSetData(const GrGLSLProgramDataManager& pdman, const GrFragmentProcessor& _proc) override {
    }
    UniformHandle matrixVar;
};
std::unique_ptr<GrGLSLFragmentProcessor> GrChildProcessorSampleMatrixSingleUniform::onMakeProgramImpl() const {
    return std::make_unique<GrGLSLChildProcessorSampleMatrixSingleUniform>();
}
void GrChildProcessorSampleMatrixSingleUniform::onGetGLSLProcessorKey(const GrShaderCaps& caps, GrProcessorKeyBuilder* b) const {
}
bool GrChildProcessorSampleMatrixSingleUniform::onIsEqual(const GrFragmentProcessor& other) const {
    const GrChildProcessorSampleMatrixSingleUniform& that = other.cast<GrChildProcessorSampleMatrixSingleUniform>();
    (void) that;
    return true;
}
GrChildProcessorSampleMatrixSingleUniform::GrChildProcessorSampleMatrixSingleUniform(const GrChildProcessorSampleMatrixSingleUniform& src)
: INHERITED(kGrChildProcessorSampleMatrixSingleUniform_ClassID, src.optimizationFlags()) {
        this->cloneAndRegisterAllChildProcessors(src);
}
std::unique_ptr<GrFragmentProcessor> GrChildProcessorSampleMatrixSingleUniform::clone() const {
    return std::make_unique<GrChildProcessorSampleMatrixSingleUniform>(*this);
}
#if GR_TEST_UTILS
SkString GrChildProcessorSampleMatrixSingleUniform::onDumpInfo() const {
    return SkString();
}
#endif
