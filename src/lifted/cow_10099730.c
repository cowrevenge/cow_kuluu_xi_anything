/* f_0x10099730 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10099730 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10099730(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    short sVar2;
    int iVar3;
    int iVar4;
    iVar4 = 0;
      do {
        iVar1 = iVar4 + 0x57d8 + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));
        if ((((rd32((uint32_t)(iVar4 + 0x57ec + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)))) != 0) && (rd16((uint32_t)(iVar1 + 0x4c)) != 0)) &&
            (rd8((uint32_t)(iVar1 + 0x50)) == '\0')) &&
           (sVar2 = rd16((uint32_t)(iVar1 + 0x4c)) + 0x7000, sVar2 != 0)) {
          iVar3 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_1009977A), 1u, (const CowU32[]){ sVar2 }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            cow_bridge_100935c0(g, COW_IMG(COW_ADDR_LIFT_10099795), 5u, (const CowU32[]){ iVar1 + 0x50, rd8((uint32_t)(iVar1 + 0x4e)), rd8((uint32_t)(iVar1 + 0x4f)), rd32((uint32_t)(iVar3 + 0x1538)), 0x18 }, g->ecx, g->edx, g->eax, 20u);
          }
        }
        iVar4 = iVar4 + 0x70;
      } while (iVar4 < 0x8c0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10099730(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10099730: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10099731: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10099732: push edi */
    g->ebx = 0u;   /* 0x10099733: the value the entry loaded and the decompiler dropped */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x10099735: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->ebx + g->eax + 0x57D8u)); }   /* 0x1009973a: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + g->eax + 0x57ECu); g->eax = (uint32_t)(rd32(A)); }   /* 0x10099741: register eax, replayed as the entry ran it */
    cow_lift_10099730(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
