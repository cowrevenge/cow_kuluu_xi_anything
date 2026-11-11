/* f_0x1012ff30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012ff30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012ff30(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar2;
    int iVar3;
    int iVar4;
    int local_4;
    _Bool bVar1;
      
      iVar3 = 0x2c7d8;
      wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
      local_4 = 0;
      bVar1 = 0;
      iVar4 = 0;
      do {
        if ((rd32((uint32_t)(iVar3 + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)))) == 1) || (rd32((uint32_t)(iVar3 + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)))) == 0x10)) {
          cVar2 = cow_bridge_100f7e70(g, COW_IMG(COW_ADDR_LIFT_1012FF6B), 3u, (const CowU32[]){ 2, iVar4, 0xffffffff }, g->ecx, g->edx, g->eax, 12u);
          if (cVar2 == '\0') {
            bVar1 = 1;
          }
          else {
            local_4 = local_4 + 1;
          }
        }
        iVar3 = iVar3 + 0x48;
        iVar4 = iVar4 + 1;
      } while (iVar3 < 0x2ca18);
      if (local_4 != 0) {
        wr32((uint32_t)(param_1 + 0x1c0), 300);
        wr16((uint32_t)(param_1 + 0x1b4), 0x17);
        return;
      }
      if ((bVar1) && (rd32(COW_IMG(COW_ADDR_LIFT_10578158)) != 0)) {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1012FFC7), 1u, (const CowU32[]){ 133u }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x1c0), 0xffffffff);
      wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x5d), 0);
      wr16((uint32_t)(param_1 + 0x1b4), rd16((uint32_t)(param_1 + 0x1b6)));
      wr16((uint32_t)(param_1 + 0x1b6), 0x18);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012ff30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x1012ff30: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1012ff33: push ebp */
    g->ebp = g->ecx;   /* 0x1012ff34: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012ff36: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1012ff37: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1012ff38: register eax, replayed as the entry ran it */
    g->esi = 182232u;   /* 0x1012ff3b: the value the entry loaded and the decompiler dropped */
    cow_lift_1012ff30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
