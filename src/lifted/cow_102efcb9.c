/* f_0x102efcb9 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102efcb9 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102efcb9(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int local_c;
    int local_8;
    iVar1 = 0;
      local_8 = 0;
      local_c = 0;
      if (param_1 != (CowU32)0x0) {
        local_8 = rd32((uint32_t)param_1);
      }
      if (param_2 != (CowU32)0x0) {
        iVar1 = rd32((uint32_t)param_2);
      }
      if (param_3 != (CowU32)0x0) {
        local_c = rd32((uint32_t)param_3);
      }
      if (local_8 != 0) {
        cow_bridge_102efb87(g, COW_IMG(COW_ADDR_LIFT_102EFCFD), 3u, (const CowU32[]){ local_8, iVar1, local_c }, g->ecx, g->edx, param_2, 12u);
      }
      if (iVar1 != 0) {
        cow_bridge_102f762a(g, COW_IMG(COW_ADDR_LIFT_102EFD0A), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, param_2, 0u);
        wr32((uint32_t)param_2, 0);
      }
      if (local_c != 0) {
        cow_bridge_102f762a(g, COW_IMG(COW_ADDR_LIFT_102EFD1C), 1u, (const CowU32[]){ local_c }, g->ecx, g->edx, param_2, 0u);
        wr32((uint32_t)param_3, 0);
      }
      if (local_8 != 0) {
        cow_bridge_102f762a(g, COW_IMG(COW_ADDR_LIFT_102EFD31), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, param_2, 0u);
        wr32((uint32_t)param_1, 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102efcb9(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102efcb9: push ebp */
    g->ebp = g->esp;                       /* 0x102efcba: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102efcbc: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102efcbd: push ecx */
    g->eax = param_2;   /* 0x102efcbe: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102efcc1: push ebx */
    g->ecx = 0u;   /* 0x102efcc2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102efcc4: push esi */
    g->esi = 0u;   /* 0x102efcc5: the value the entry loaded and the decompiler dropped */
    cow_lift_102efcb9(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
