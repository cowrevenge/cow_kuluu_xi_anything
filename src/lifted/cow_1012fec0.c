/* f_0x1012fec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012fec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012fec0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 pcVar3;
    iVar2 = 8;
      pcVar3 = (CowU32)(param_1 + 0x14);
      do {
        if (rd8((uint32_t)pcVar3) != '\0') {
          cow_bridge_10130360(g, COW_IMG(COW_ADDR_LIFT_1012FEDA), 1u, (const CowU32[]){ pcVar3 }, g->ecx, g->edx, g->eax, 0u);
        }
        pcVar3 = pcVar3 + 0x34;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1012FEE9), 2u, (const CowU32[]){ 9u, 46u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1014f7d0(g, COW_IMG(COW_ADDR_LIFT_1012FEF8), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578470)) + 0x15c), 0);
      cow_bridge_1014f250(g, COW_IMG(COW_ADDR_LIFT_1012FF13), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578470)) + 0x18), 0);
      wr16((uint32_t)(param_1 + 0x1b4), 0x16);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012fec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1012fec0: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012fec1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1012fec2: push edi */
    g->edi = g->ecx;   /* 0x1012fec3: the value the entry loaded and the decompiler dropped */
    g->ebp = 8u;   /* 0x1012fec5: the value the entry loaded and the decompiler dropped */
    cow_lift_1012fec0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
