;--------------------------------------------------------------
;automatically generated from PC app (sippDbgDumpAsmOffsets)   
;--------------------------------------------------------------

.ifndef SIPP_SHAVE_ASM_DEFS
.set    SIPP_SHAVE_ASM_DEFS

;offsets within SippFilter struct
.set F_O_SVU_RUN        108 ; fptr->funcSvuRun      
.set F_O_PAR_INFO        64 ; fptr->parInfo         
.set F_O_LINES_I        172 ; fptr->dbLinesIn[0]    
.set F_O_LINES_O        204 ; fptr->dbLineOut[0]    
.set F_O_EXENO           16 ; fptr->exeNo           
.set F_O_H_PADDING        8 ; fptr->hPadding        
.set F_O_BPP             12 ; fptr->bpp             
.set F_O_COMM_INFO      292 ; fptr->gi              
.set F_O_OUT_LPTR       240 ; fptr->outLinePtr      
.set F_O_FIRST_O_SLC    280 ; fptr->firstOutSlc     
.set F_O_LN_TO_PAD        0 ; fptr->lnToPad         
.set F_O_OUT_OFFS       224 ; fptr->outOff          
.set F_O_LINES_USED     124 ; fptr->nLinesUsed[]    

;offsets within CommInfo struct
.set G_O_FIRST_S          0 ; gi->sliceFirst 
.set G_O_LAST_S           4 ; gi->sliceLast  
.set G_O_SLC_SZ           8 ; gi->sliceSize  
.set G_O_CUR_F           12 ; gi->curFrame   

;offsets within SippPipeline struct
.set P_O_SVU_CMD          64 ; pl->svuCmd     
.set P_O_SVU_SYNC_MTX     68 ; pl->svuSyncMtx 
.set P_O_SVU_SYNC_SEM     76 ; pl->svuSyncSem 
.set P_O_SVU_LIST        728 ; pl->filtersSvu 
.set P_O_N_PAD_FILTS      36 ; pl->nPadFilters
.set P_O_N_SVU_FILTS     856 ; pl->nFiltersSvu
.set P_O_ITER           1472 ; pl->iteration  
.set P_O_SCHED_NFO      1448 ; pl->schedInfo  
.set P_O_GLOBAL_NFO        0 ; pl->gi         
.set P_O_PAD_LIST        216 ; pl->padList    

;offsets within SchedInfo struct
.set S_O_SVU_MASK         8 ; schedInfo[0].shaveMask
.set SZ_SCH_INFO         20 ; sizeof(pl->schedInfo[0])

.endif
