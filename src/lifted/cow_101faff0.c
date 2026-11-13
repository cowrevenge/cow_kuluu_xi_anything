/* f_0x101faff0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101faff0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101faff0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    short sVar3;
    cVar1 = rd8((uint32_t)param_2);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663888)) != 0) {
        sVar2 = (int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663888)) + 0x110));
        sVar3 = (int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663888)) + 0x112));
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663888)) + 0x110), 0xffff);
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663888)) + 0x112), 0xffff);
        if ((rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28))) == 0x60) && (-1 < sVar2)) {
          cow_bridge_101f79e0(g, COW_IMG(COW_ADDR_LIFT_101FB04C), 4u, (const CowU32[]){ (int)(int16_t)rd16((uint32_t)(param_2 + 2)), (int)sVar2, (int)sVar3, (int)(int16_t)rd16((uint32_t)(param_2 + 4)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663888)), 16u);
          return;
        }
      }
      if (cVar1 != '\0') {
        cow_bridge_1015e530(g, COW_IMG(COW_ADDR_LIFT_101FB06A), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)) }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663888)), 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101faff0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->edx = param_2;   /* 0x101faff0: the value the entry loaded and the decompiler dropped */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10663888));   /* 0x101faff4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101faff9: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101faffa: push esi */
    { uint32_t A = (uint32_t)(g->edx); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101faffb: register ebx, replayed as the entry ran it */
    cow_lift_101faff0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
