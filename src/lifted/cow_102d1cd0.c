/* f_0x102d1cd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d1cd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d1cd0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    iVar1 = (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CC308) + param_1 * 4));
      iVar2 = 0;
      piVar3 = (CowU32)(param_6 + 0xc80 + param_2 * 4);
      do {
        if ((CowU32)(iVar1 * 2) <= (CowU32)(rd32((uint32_t)piVar3) * 2)) {
          if (iVar2 == param_4) {
            g->eax = (CowU32)(-1); return;
          }
          wr32((uint32_t)(param_5 + iVar2 * 4), param_2);
          iVar2 = iVar2 + 1;
          param_2 = param_2 + 3;
          piVar3 = piVar3 + 4u * (uint32_t)(3);
        }
        param_2 = param_2 + 1;
        piVar3 = piVar3 + 4u * (uint32_t)(1);
      } while (param_2 < param_3);
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d1cd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = param_1;   /* 0x102d1cd0: the value the entry loaded and the decompiler dropped */
    g->edx = param_6;   /* 0x102d1cd4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102d1cd8: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102d1cd9: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102d1cdd: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102d1cde: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102d1cdf: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102d1ce3: push edi */
    { uint32_t A = (uint32_t)(g->ecx * 4 + COW_IMG(COW_ADDR_LIFT_103CC308) + RD); g->edi = (uint32_t)(rd32(A)); }   /* 0x102d1ce4: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102d1ceb: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x102d1cef: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a + b); g->edi = (uint32_t)(r); }   /* 0x102d1cf1: register edi, replayed as the entry ran it */
    cow_lift_102d1cd0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
