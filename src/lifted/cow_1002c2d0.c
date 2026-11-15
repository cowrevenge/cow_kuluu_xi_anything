/* f_0x1002c2d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1002c2d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1002c2d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 piVar2;
    CowU32 this_00;
    CowU32 piVar3;
    piVar2 = (CowU32)cow_bridge_1002b5a0(g, COW_IMG(COW_ADDR_LIFT_1002C2DA), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      this_00 = (CowU32)rd32((uint32_t)piVar2);
      piVar3 = piVar2;
      if (this_00 != (CowU32)0x0) {
        while (piVar2 = (CowU32)cow_bridge_1002a140(g, COW_IMG(COW_ADDR_LIFT_1002C2FF), 5u, (const CowU32[]){ param_2, param_3, param_4, param_5, rd32((uint32_t)((int)param_1 + 0x30)) }, this_00, g->edx, g->eax, 0u), (char)piVar2 != '\0') {
          this_00 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 4));
          piVar3 = (CowU32)(rd32((uint32_t)piVar3) + 4);
          if (this_00 == (CowU32)0x0) {
            uVar1 = rd32((uint32_t)((int)param_1 + 0x30));
            wr32((uint32_t)((int)param_1 + 0x30), uVar1 | 0x12);
            g->eax = (CowU32)((((uint32_t)((uVar1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
          }
        }
      }
      g->eax = (CowU32)((CowU32)piVar2 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1002c2d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1002c2d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1002c2d1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1002c2d2: push edi */
    g->edi = g->ecx;   /* 0x1002c2d3: the value the entry loaded and the decompiler dropped */
    cow_lift_1002c2d0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
