/* f_0x10135de0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10135de0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10135de0(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    const CowU32 cow_eax_base = (CowU32)(param_2);   /* what the guest left in the rest of eax when it wrote only the low part */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    if (param_2 == 0) {
        g->eax = (CowU32)((cow_eax_base & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      wr32((uint32_t)((int)param_1 + 0x74), param_2);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10135E09), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1036F8C0), 1, 0 }, 274864184u, g->edx, param_2, 0u);
      iVar3 = 0;
      iVar2 = (int)param_1 + 0x78;
      do {
        cow_bridge_10134e90(g, COW_IMG(COW_ADDR_LIFT_10135E1A), 2u, (const CowU32[]){ iVar2, (int32_t)rd32((uint32_t)((int)param_1 + 0x74)) + iVar3 }, g->ecx, g->edx, param_2, 0u);
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 0x40);
      piVar1 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_10135E2F), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, param_2, 0u);
      wr32((uint32_t)((int)param_1 + 0xb8), rd32((uint32_t)(rd32((uint32_t)piVar1) + 0x6b4)));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10135de0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_2;   /* 0x10135de0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10135de4: push edi */
    cow_lift_10135de0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
