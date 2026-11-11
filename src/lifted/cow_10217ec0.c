/* f_0x10217ec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10217ec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10217ec0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    short sVar2;
    int iVar3;
    sVar2 = rd16((uint32_t)(param_1 + 0x14));
      if (sVar2 < 0) {
        if ((int)(short)(rd16((uint32_t)(param_1 + 0x5c)) + rd16((uint32_t)(param_1 + 0x54))) <
            (int)((int)(short)(rd16((uint32_t)(param_1 + 0x254)) + rd16((uint32_t)(param_1 + 0x24c))) +
                 (CowU32)rd16((uint32_t)(param_1 + 0x38)))) {
          wr16((uint32_t)(param_1 + 0x50), rd16((uint32_t)(param_1 + 0x50)) +
               ((((rd16((uint32_t)(param_1 + 0x5c)) - rd16((uint32_t)(param_1 + 0x254))) -
                 rd16((uint32_t)(param_1 + 0x24c))) + rd16((uint32_t)(param_1 + 0x54))) -
               rd16((uint32_t)(param_1 + 0x38))));
          return;
        }
      }
      else if (sVar2 == 0) {
        if ((int)(short)(rd16((uint32_t)(param_1 + 0x5c)) + rd16((uint32_t)(param_1 + 0x54))) <
            (int)((int)(short)(rd16((uint32_t)(param_1 + 0x238)) + rd16((uint32_t)(param_1 + 0x230))) +
                 (CowU32)rd16((uint32_t)(param_1 + 0x38)))) {
          wr16((uint32_t)(param_1 + 0x50), rd16((uint32_t)(param_1 + 0x50)) +
               ((((rd16((uint32_t)(param_1 + 0x5c)) - rd16((uint32_t)(param_1 + 0x238))) -
                 rd16((uint32_t)(param_1 + 0x230))) + rd16((uint32_t)(param_1 + 0x54))) -
               rd16((uint32_t)(param_1 + 0x38))));
          return;
        }
      }
      else {
        if (sVar2 == 1) {
          wr16((uint32_t)(param_1 + 0x50), 0);
          return;
        }
        iVar3 = (int)sVar2;
        iVar1 = param_1 + 0x6e + iVar3 * 0xe;
        if ((int)(short)(rd16((uint32_t)(param_1 + 0x5c)) + rd16((uint32_t)(param_1 + 0x54))) <=
            (int)((int)(short)(rd16((uint32_t)(param_1 + 0x78 + iVar3 * 0xe)) + rd16((uint32_t)(iVar1 + 2))) +
                 (CowU32)rd16((uint32_t)(param_1 + 0x38)))) {
          wr16((uint32_t)(param_1 + 0x50), rd16((uint32_t)(param_1 + 0x50)) +
               ((((rd16((uint32_t)(param_1 + 0x5c)) - rd16((uint32_t)(iVar1 + 10))) - rd16((uint32_t)(iVar1 + 2))) +
                rd16((uint32_t)(param_1 + 0x54))) - rd16((uint32_t)(param_1 + 0x38))));
          return;
        }
        sVar2 = rd16((uint32_t)(param_1 + (iVar3 + 8) * 0xe));
        if ((int)sVar2 < (int)((CowU32)rd16((uint32_t)(param_1 + 0x26)) + (int)rd16((uint32_t)(param_1 + 0x54)))) {
          wr16((uint32_t)(param_1 + 0x50), rd16((uint32_t)(param_1 + 0x50)) +
               (rd16((uint32_t)(param_1 + 0x26)) - sVar2) + rd16((uint32_t)(param_1 + 0x54)));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10217ec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0x14u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10217ec0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10217ec4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10217ec5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10217ec6: push edi */
    cow_lift_10217ec0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
