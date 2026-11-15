/* f_0x1025ee00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1025ee00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1025ee00(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    iVar1 = cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x14u)), COW_IMG(COW_ADDR_LIFT_1025EE1B), 3u, (const CowU32[]){ g->ebp, g->edi, g->esi }, param_1, g->edx, g->eax, 0u);
      if (-1 < iVar1) {
        if (((int)rd32((uint32_t)(param_4 + 4u * (uint32_t)(1))) <= (int)rd32((uint32_t)(param_3 + 4u * (uint32_t)(1)))) &&
           (((int)rd32((uint32_t)(param_4 + 4u * (uint32_t)(1))) < (int)rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))) || (rd32((uint32_t)param_4) < rd32((uint32_t)param_3))))) {
          g->eax = (CowU32)(0x80040228); return;
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) != 0) {
          uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x5cu))), COW_IMG(COW_ADDR_LIFT_1025EE50), 3u, (const CowU32[]){ param_2, param_3, param_4 }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar2); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1025ee00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1025ee00: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1025ee01: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1025ee02: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1025ee06: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1025ee07: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1025ee0b: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1025ee0c: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebp); g->eax = (uint32_t)(rd32(A)); }   /* 0x1025ee10: register eax, replayed as the entry ran it */
    g->ebx = g->ecx;   /* 0x1025ee16: the value the entry loaded and the decompiler dropped */
    cow_lift_1025ee00(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
