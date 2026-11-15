/* f_0x10198480 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10198480 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10198480(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    cVar1 = cow_bridge_10193960(g, COW_IMG(COW_ADDR_LIFT_1019849B), 2u, (const CowU32[]){ g->ecx, g->eax }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        uVar2 = cow_bridge_10193980(g, COW_IMG(COW_ADDR_LIFT_101984B7), 3u, (const CowU32[]){ (CowU32)(CowU8)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10379B08) + 4u * (uint32_t)(param_2 * 4))), rd32((uint32_t)((int)param_1 + 0x30)), 1 }, g->ecx, g->edx, g->eax, 12u);
        wr32((uint32_t)((int)param_1 + 0x30), uVar2);
        return;
      }
      uVar2 = cow_bridge_10193980(g, COW_IMG(COW_ADDR_LIFT_101984D7), 3u, (const CowU32[]){ (CowU32)(CowU8)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10379B08) + 4u * (uint32_t)(param_2 * 4))), rd32((uint32_t)((int)param_1 + 0x30)), 0 }, g->ecx, g->edx, g->eax, 12u)
      ;
      wr32((uint32_t)((int)param_1 + 0x30), uVar2);
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
void cow_adapter_10198480(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10198480: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10198481: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10198482: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10198486: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x10198488: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1019848a: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi * 4 + COW_IMG(COW_ADDR_LIFT_10379B08) + RD); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1019848d: register ecx, replayed as the entry ran it */
    cow_lift_10198480(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
