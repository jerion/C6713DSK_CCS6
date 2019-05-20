
*Vectors.asm Vector file for non-interrupt driven program       
     .title 	"vectors.asm"
     .ref 		_c_int00		;reference entry address
     .sect 		"vectors"		;in vector section
rst:  mvkl	.s2	 _c_int00,b0	;lower 16 bits --> b0
     mvkh	.s2  _c_int00,b0	;higher 16 bits --> b0
     b		.s2	 b0			    ;branch to entry address
     nop					    ;5 NOPs for rest of fetch packet	 nop
     nop
     nop
     nop
     nop