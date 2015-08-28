.global mbinImgSipp

!;#####################################################
.section ".data"
.align 4
mbinImgSipp:
 .incbin "output/svuSippImg.shvdlib"

!;#####################################################
.section ".shv0.S.init"
cmxInits:
 .fill (8*131072), 1, 0xCD