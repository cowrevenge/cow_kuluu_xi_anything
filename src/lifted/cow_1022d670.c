/* f_0x1022d670 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022d670 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022d670(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    bVar2 = rd8((uint32_t)param_1);
      if (bVar2 != 0) {
        bVar3 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
        uVar4 = (int)(((((((((((bVar3 >> 6 & 1) - (bVar2 >> 6 & 1)) - (bVar2 >> 5 & 1)) -
                            (bVar2 >> 4 & 1)) - (bVar2 >> 3 & 1)) - (bVar2 >> 2 & 1)) - (bVar2 >> 1 & 1)
                         ) - (CowU32)(bVar2 >> 7)) + (bVar3 >> 5 & 1) + (bVar3 >> 4 & 1) +
                        (bVar3 >> 3 & 1) + (bVar3 >> 2 & 1) + (bVar3 >> 1 & 1)) - (bVar2 & 1)) +
                      (CowU32)(bVar3 >> 7) + (bVar3 & 1)) % 5;
        uVar5 = (int)uVar4 >> 0x1f;
        if (rd8((uint32_t)param_1) != 0) {
          do {
            switch((uVar4 ^ uVar5) - uVar5) {
            case 0:
              bVar3 = rd8((uint32_t)param_1) << 7;
              bVar2 = rd8((uint32_t)param_1) >> 1;
              break;
            case 1:
              bVar3 = rd8((uint32_t)param_1) >> 7;
              bVar2 = rd8((uint32_t)param_1) * '\x02';
              break;
            case 2:
              bVar3 = rd8((uint32_t)param_1) << 6;
              bVar2 = rd8((uint32_t)param_1) >> 2;
              break;
            case 3:
              bVar3 = rd8((uint32_t)param_1) >> 6;
              bVar2 = rd8((uint32_t)param_1) << 2;
              break;
            case 4:
              bVar3 = rd8((uint32_t)param_1) >> 3;
              bVar2 = rd8((uint32_t)param_1) << 5;
              break;
            default:
              goto L_1022d778;
            }
            wr8((uint32_t)param_1, bVar3 | bVar2);
    L_1022d778:
            pbVar1 = param_1 + 1;
            param_1 = param_1 + 1;
          } while (rd8((uint32_t)pbVar1) != 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022d670(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022d670: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022d671: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1022d672: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1022d676: register ecx, replayed as the entry ran it */
    cow_lift_1022d670(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
