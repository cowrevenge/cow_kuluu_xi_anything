/* f_0x1013b9c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013b9c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013b9c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    int iVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    for (pcVar2 = (CowU32)cow_bridge_10315210(g, COW_IMG(COW_ADDR_LIFT_1013B9CD), 2u, (const CowU32[]){ param_1, 0x7b }, g->ecx, g->edx, param_1, 0u); pcVar2 != (CowU32)0x0;
          pcVar2 = (CowU32)cow_bridge_10315210(g, COW_IMG(COW_ADDR_LIFT_1013BBD2), 2u, (const CowU32[]){ pcVar2, 0x7b }, g->ecx, g->edx, param_1, 0u)) {
        iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013B9E7), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE58), 5 }, g->ecx, g->edx, param_1, 12u);
        if (iVar3 == 0) {
          pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD28));
          pcVar5 = pcVar2;
          do {
            cVar1 = rd8((uint32_t)pcVar4);
            pcVar4 = pcVar4 + 1;
            wr8((uint32_t)pcVar5, cVar1);
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar4 = pcVar2 + 5;
          iVar3 = 2 - (int)pcVar4;
          do {
            cVar1 = rd8((uint32_t)pcVar4);
            wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
        }
        else {
          iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BA26), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE50), 5 }, g->ecx, g->edx, param_1, 12u);
          if (iVar3 == 0) {
            pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD2C));
            pcVar5 = pcVar2;
            do {
              cVar1 = rd8((uint32_t)pcVar4);
              pcVar4 = pcVar4 + 1;
              wr8((uint32_t)pcVar5, cVar1);
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            pcVar4 = pcVar2 + 5;
            iVar3 = 2 - (int)pcVar4;
            do {
              cVar1 = rd8((uint32_t)pcVar4);
              wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
          }
          else {
            iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BA65), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE48), 5 }, g->ecx, g->edx, param_1, 12u);
            if (iVar3 == 0) {
              pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD30));
              pcVar5 = pcVar2;
              do {
                cVar1 = rd8((uint32_t)pcVar4);
                pcVar4 = pcVar4 + 1;
                wr8((uint32_t)pcVar5, cVar1);
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              pcVar4 = pcVar2 + 5;
              iVar3 = 2 - (int)pcVar4;
              do {
                cVar1 = rd8((uint32_t)pcVar4);
                wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
            }
            else {
              iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BAA4), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE40), 5 }, g->ecx, g->edx, param_1, 12u);
              if (iVar3 == 0) {
                pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD34));
                pcVar5 = pcVar2;
                do {
                  cVar1 = rd8((uint32_t)pcVar4);
                  pcVar4 = pcVar4 + 1;
                  wr8((uint32_t)pcVar5, cVar1);
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 != '\0');
                pcVar4 = pcVar2 + 5;
                iVar3 = 2 - (int)pcVar4;
                do {
                  cVar1 = rd8((uint32_t)pcVar4);
                  wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                  pcVar4 = pcVar4 + 1;
                } while (cVar1 != '\0');
              }
              else {
                iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BAE3), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE38), 5 }, g->ecx, g->edx, param_1, 12u);
                if (iVar3 == 0) {
                  pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD38));
                  pcVar5 = pcVar2;
                  do {
                    cVar1 = rd8((uint32_t)pcVar4);
                    pcVar4 = pcVar4 + 1;
                    wr8((uint32_t)pcVar5, cVar1);
                    pcVar5 = pcVar5 + 1;
                  } while (cVar1 != '\0');
                  pcVar4 = pcVar2 + 5;
                  iVar3 = 2 - (int)pcVar4;
                  do {
                    cVar1 = rd8((uint32_t)pcVar4);
                    wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                    pcVar4 = pcVar4 + 1;
                  } while (cVar1 != '\0');
                }
                else {
                  iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BB22), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE30), 5 }, g->ecx, g->edx, param_1, 12u);
                  if (iVar3 == 0) {
                    pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD3C));
                    pcVar5 = pcVar2;
                    do {
                      cVar1 = rd8((uint32_t)pcVar4);
                      pcVar4 = pcVar4 + 1;
                      wr8((uint32_t)pcVar5, cVar1);
                      pcVar5 = pcVar5 + 1;
                    } while (cVar1 != '\0');
                    pcVar4 = pcVar2 + 5;
                    iVar3 = 2 - (int)pcVar4;
                    do {
                      cVar1 = rd8((uint32_t)pcVar4);
                      wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                      pcVar4 = pcVar4 + 1;
                    } while (cVar1 != '\0');
                  }
                  else {
                    iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BB5E), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE28), 5 }, g->ecx, g->edx, param_1, 12u);
                    if (iVar3 == 0) {
                      pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD40));
                      pcVar5 = pcVar2;
                      do {
                        cVar1 = rd8((uint32_t)pcVar4);
                        pcVar4 = pcVar4 + 1;
                        wr8((uint32_t)pcVar5, cVar1);
                        pcVar5 = pcVar5 + 1;
                      } while (cVar1 != '\0');
                      pcVar4 = pcVar2 + 5;
                      iVar3 = 2 - (int)pcVar4;
                      do {
                        cVar1 = rd8((uint32_t)pcVar4);
                        wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                        pcVar4 = pcVar4 + 1;
                      } while (cVar1 != '\0');
                    }
                    else {
                      iVar3 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1013BB9A), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_1036FE20), 5 }, g->ecx, g->edx, param_1, 12u);
                      if (iVar3 == 0) {
                        pcVar4 = rd32(COW_IMG(COW_ADDR_LIFT_1036FD44));
                        pcVar5 = pcVar2;
                        do {
                          cVar1 = rd8((uint32_t)pcVar4);
                          pcVar4 = pcVar4 + 1;
                          wr8((uint32_t)pcVar5, cVar1);
                          pcVar5 = pcVar5 + 1;
                        } while (cVar1 != '\0');
                        pcVar4 = pcVar2 + 5;
                        iVar3 = 2 - (int)pcVar4;
                        do {
                          cVar1 = rd8((uint32_t)pcVar4);
                          wr8((uint32_t)(pcVar4 + 1u * (uint32_t)((int)(pcVar2 + iVar3))), cVar1);
                          pcVar4 = pcVar4 + 1;
                        } while (cVar1 != '\0');
                      }
                      else {
                        pcVar2 = pcVar2 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013b9c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1013b9c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013b9c4: push esi */
    cow_lift_1013b9c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
