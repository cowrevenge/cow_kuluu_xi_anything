/* f_0x102c2c58 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c2c58 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c2c58(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    if (((((param_1 == 0) || (param_2 == (CowU32)0x0)) || (param_3 == (CowU32)0x0)) ||
          ((param_4 == (CowU32)0x0 || (param_5 == (CowU32)0x0)))) || (param_6 == (CowU32)0x0)) {
        uVar3 = 0;
      }
      else {
        wr32((uint32_t)param_3, rd32((uint32_t)param_2));
        wr32((uint32_t)param_4, rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
        wr32((uint32_t)param_5, (CowU32)(CowU8)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))));
        if (((CowU8)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) == 0) || (0x10 < (CowU8)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))))) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C2CC5), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C80F0) }, g->ecx, g->edx, g->eax, 0u);
        }
        wr32((uint32_t)param_6, (CowU32)rd8((uint32_t)((int)param_2 + 0x19)));
        if (6 < rd8((uint32_t)((int)param_2 + 0x19))) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C2CE3), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C80DC) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (param_8 != (CowU32)0x0) {
          wr32((uint32_t)param_8, (CowU32)rd8((uint32_t)((int)param_2 + 0x1a)));
        }
        if (param_9 != (CowU32)0x0) {
          wr32((uint32_t)param_9, (CowU32)rd8((uint32_t)((int)param_2 + 0x1b)));
        }
        if (param_7 != (CowU32)0x0) {
          wr32((uint32_t)param_7, (CowU32)(CowU8)rd32((uint32_t)(param_2 + 4u * (uint32_t)(7))));
        }
        uVar1 = rd32((uint32_t)param_6);
        if (uVar1 == 3) {
          uVar2 = 1;
        }
        else {
          uVar2 = (CowU32)((CowU8)uVar1 & 2 | 1);
        }
        if ((uVar1 & 4) != 0) {
          uVar2 = uVar2 + 1;
        }
        uVar1 = rd32((uint32_t)param_5);
        if (0x7fffffff < rd32((uint32_t)param_3)) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C2D4A), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C80C8) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (0x7fffffff < rd32((uint32_t)param_4)) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C2D60), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C80B0) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((int)(0x7fffffff / (uint64_t)(CowU32)((int)(uVar1 * uVar2 + 7) >> 3)) - 0x40U < rd32((uint32_t)param_3)) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C2D7C), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C807C) }, g->ecx, 0u, g->eax, 0u);
        }
        uVar3 = 1;
      }
      g->eax = (CowU32)(uVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 9 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c2c58(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c2c58: push ebp */
    g->ebp = g->esp;                       /* 0x102c2c59: mov ebp, esp */
    cow_lift_102c2c58(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
