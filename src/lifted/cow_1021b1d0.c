/* f_0x1021b1d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021b1d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021b1d0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    iVar2 = (int)param_2;
      if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x36c))) < (int32_t)(0))) {
        if (iVar2 == 1) {
          if ((int16_t)rd16((uint32_t)(param_1 + 0x14)) + 1 < (int)(CowU32)rd16((uint32_t)(param_1 + 0x34a))) {
            wr16((uint32_t)(param_1 + 0x14), (int16_t)rd16((uint32_t)(param_1 + 0x14)) + 1);
            return;
          }
          return;
        }
        if (iVar2 != 2) {
          if (iVar2 == 5) {
            wr32((uint32_t)(param_1 + 0x36c), rd32((uint32_t)(param_1 + 0x34c + (int16_t)rd16((uint32_t)(param_1 + 0x14)) * 4)));
            wr32((uint32_t)(param_1 + 0x370), 0);
            wr32((uint32_t)(param_1 + 0x374), 0);
            cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1021B21F), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x378)) }, g->ecx, g->edx, g->eax, 4u);
            wr32((uint32_t)(param_1 + 0x378), 0);
            wr16((uint32_t)(param_1 + 0x14), 0);
            return;
          }
          return;
        }
    switchD_1021b266_caseD_2:
        if (((int16_t)(0) < (int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x14))))) {
          wr16((uint32_t)(param_1 + 0x14), (int16_t)rd16((uint32_t)(param_1 + 0x14)) + -1);
          return;
        }
      }
      else {
        switch(iVar2) {
        case 1:
          if ((int16_t)rd16((uint32_t)(param_1 + 0x14)) + ((int32_t)(1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x370))))) {
            wr16((uint32_t)(param_1 + 0x14), (int16_t)rd16((uint32_t)(param_1 + 0x14)) + 1);
            return;
          }
          break;
        case 2:
          goto switchD_1021b266_caseD_2;
        case 7:
        case 0xf:
          wr32((uint32_t)(param_1 + 0x370), 0);
          wr32((uint32_t)(param_1 + 0x374), 0);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1021B2B8), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x378)) }, g->ecx, g->edx, g->eax, 0u);
          sVar1 = (int16_t)rd16((uint32_t)(param_1 + 0x34a)) + -1;
          wr32((uint32_t)(param_1 + 0x378), 0);
          wr16((uint32_t)(param_1 + 0x14), sVar1);
          if (0 < sVar1) {
            do {
              if ((int32_t)rd32((uint32_t)(param_1 + 0x36c)) ==
                  (int32_t)rd32((uint32_t)(param_1 + 0x34c + (int16_t)rd16((uint32_t)(param_1 + 0x14)) * 4))) break;
              sVar1 = (int16_t)rd16((uint32_t)(param_1 + 0x14)) + -1;
              wr16((uint32_t)(param_1 + 0x14), sVar1);
            } while (0 < sVar1);
          }
          wr32((uint32_t)(param_1 + 0x36c), 0xffffffff);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021b1d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1021b1d0: push esi */
    g->esi = g->ecx;   /* 0x1021b1d1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1021b1d3: push edi */
    g->edi = 0u;   /* 0x1021b1d4: the value the entry loaded and the decompiler dropped */
    cow_lift_1021b1d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
