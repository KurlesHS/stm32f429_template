import qbs
import Stm32F4DiscoveryApplication

Stm32F4DiscoveryApplication {
    type: "postbuild"
    consoleApplication: true
    createAsmDump: true

    halModule: true
    halAdcModule: false
    halCanModule: false
    halCrcModule: false
    halCrypModule: false
    halDacModule: false
    halDcmiModule: false
    halDmaModule: false
    halDma2DModule: false
    halEthModule: false
    halFlashModule: true
    halNandModule: false
    halNorModule: false
    halPcCartModule: false
    halSRamModule: false
    halSDRamModule: false
    halHashModule: false
    halGpioModule: true
    halI2CModule: false
    halI2SModule: false
    halIwdgModule: false
    halLtdcModule: false
    halPwrModule: true
    halRccModule: true
    halRngModule: false
    halRtcModule: false
    halSaiModule: false
    halSDModule: false
    halSpiModule: false
    halTimModule: false
    halUartModule: false
    halUsartModule: false
    halIrdaModule: false
    halSmartCardModule: false
    halWwdgModule: false
    halCortexModule: true
    halPcdModule: false
    halHcdModule: false

    cpp.includePaths: base.concat(["."])
    cpp.defines: base.concat(["PPP"])

    Group {
        name: "sources"

        prefix: "./**/"
        files: [
            "*.c",
            "*.cpp",
            "*.h",
            "*.s"
        ]
        cpp.cxxFlags: [ "-std=c++11" ]
        cpp.cFlags: [ "-std=gnu99" ]

        cpp.warningLevel: "all"
    }
}

