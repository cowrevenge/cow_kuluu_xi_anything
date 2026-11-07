/* f_0x10146240 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10146240 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10146240(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    iVar2 = -1;
      pcVar3 = (CowU32)(param_1 + 0x94);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = rd8((uint32_t)pcVar3);
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_10146272), 5u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x114)), rd32((uint32_t)(param_1 + 0x118)), (CowU32)(param_1 + 0x94), 0, 0x80808080 }, g->ecx, g->edx, 0u, 20u);
      }
      iVar2 = -1;
      pcVar3 = (CowU32)(param_1 + 0x11c);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = rd8((uint32_t)pcVar3);
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_101462A3), 5u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x13c)), rd32((uint32_t)(param_1 + 0x140)), (CowU32)(param_1 + 0x11c), 0, 0x80808080 }, g->ecx, g->edx, 0u, 20u);
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
void cow_adapter_10146240(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10146240: push esi */
    g->esi = g->ecx;   /* 0x10146241: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10146243: push edi */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x10146244: register ecx, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->esi + 0x94u)); }   /* 0x10146247: register edx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1014624d: the value the entry loaded and the decompiler dropped */
    g->edi = g->edx;   /* 0x1014624f: the value the entry loaded and the decompiler dropped */
    cow_lift_10146240(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
