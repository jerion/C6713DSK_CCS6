################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Vectors_11.obj: ../Vectors_11.asm $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv6/tools/compiler/c6000_7.4.14/bin/cl6x" -mv6700 --abi=coffabi -g --include_path="C:/ti/ccsv6/tools/compiler/c6000_7.4.14/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/CSL/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/BSL/include" --define=c6713 --define=CHIP_6713 --display_error_number --diag_warning=225 --diag_wrap=off --mem_model:const=far --mem_model:data=far --preproc_with_compile --preproc_dependency="Vectors_11.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

c6713dskinit.obj: ../c6713dskinit.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv6/tools/compiler/c6000_7.4.14/bin/cl6x" -mv6700 --abi=coffabi -g --include_path="C:/ti/ccsv6/tools/compiler/c6000_7.4.14/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/CSL/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/BSL/include" --define=c6713 --define=CHIP_6713 --display_error_number --diag_warning=225 --diag_wrap=off --mem_model:const=far --mem_model:data=far --preproc_with_compile --preproc_dependency="c6713dskinit.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

echo.obj: ../echo.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv6/tools/compiler/c6000_7.4.14/bin/cl6x" -mv6700 --abi=coffabi -g --include_path="C:/ti/ccsv6/tools/compiler/c6000_7.4.14/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/CSL/include" --include_path="C:/ti/C6713DSK_CCS6/dsk6713libs/BSL/include" --define=c6713 --define=CHIP_6713 --display_error_number --diag_warning=225 --diag_wrap=off --mem_model:const=far --mem_model:data=far --preproc_with_compile --preproc_dependency="echo.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


