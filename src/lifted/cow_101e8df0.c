/* f_0x101e8df0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e8df0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e8df0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    short asStack_8[4];
    if (rd32(COW_IMG(COW_ADDR_LIFT_10663648)) != 0) {
        asStack_8[0] = 0;
        asStack_8[1] = 0;
        asStack_8[2] = 0;
        asStack_8[3] = 0;
        cow_bridge_10118f70(g, COW_IMG(COW_ADDR_LIFT_101E8E28), 1u, (const CowU32[]){ asStack_8 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663648)), 0u);
        iVar1 = (int)(short)((short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4)));
        if ((int)(short)((short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) / 2 <
            (int)(int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663648)) + 0x1c))) {
          if (iVar1 / 2 < (int)asStack_8[0]) {
            cow_bridge_101e8d20(g, COW_IMG(COW_ADDR_LIFT_101E8E6B), 2u, (const CowU32[]){ 16u, g->ebx }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663648)), 0u);
            return;
          }
        }
        else if ((int)asStack_8[0] <= iVar1 / 2) {
          cow_bridge_101e8d20(g, COW_IMG(COW_ADDR_LIFT_101E8E96), 2u, (const CowU32[]){ 496u, 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663648)), 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e8df0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10663648));   /* 0x101e8df0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x101e8df5: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e8df8: push ebx */
    g->ebx = 0u;   /* 0x101e8df9: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e8dfb: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e8dfc: push edi */
    cow_lift_101e8df0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
