/* f_0x102d0cd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d0cd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d0cd0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    CowU32 piVar4;
    CowU32 piVar5;
    int iVar6;
    iVar2 = rd32((uint32_t)(param_3 + param_1 * 4));
      iVar6 = rd32((uint32_t)(param_3 + 0x80 + param_1 * 4)) - rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344C10) + iVar2 * 4));
      piVar4 = (CowU32)(param_2 + ((int)rd32((uint32_t)(COW_ADDR_LIFT_10344DC8 + 4u * (uint32_t)(param_1))) >> 2) * 4);
      piVar1 = piVar4 + ((int)rd32((uint32_t)(COW_ADDR_LIFT_10344AC0 + 4u * (uint32_t)(param_1))) >> 2);
      iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344BF4) + iVar2 * 4)) * rd32((uint32_t)(COW_ADDR_LIFT_10344AC0 + 4u * (uint32_t)(param_1))) + 0x3c;
      do {
        piVar5 = piVar4 + 1;
        if (rd32((uint32_t)piVar4) < iVar6) {
          iVar3 = iVar3 - rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344BD8) + iVar2 * 4));
        }
        piVar4 = piVar4 + 2;
        if (rd32((uint32_t)piVar5) < iVar6) {
          iVar3 = iVar3 - rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344BD8) + iVar2 * 4));
        }
      } while (piVar4 < piVar1);
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d0cd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_1;   /* 0x102d0cd0: the value the entry loaded and the decompiler dropped */
    g->ecx = param_3;   /* 0x102d0cd4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102d0cd8: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102d0cd9: push esi */
    { uint32_t A = (uint32_t)(g->ecx + g->eax * 4); g->edx = (uint32_t)(rd32(A)); }   /* 0x102d0cda: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax * 4 + 0x80u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102d0cdd: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10344DC8) + RD); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102d0ce4: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102d0ceb: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102d0cec: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx * 4 + COW_IMG(COW_ADDR_LIFT_10344C10) + RD); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102d0cf0: register ebx, replayed as the entry ran it */
    cow_lift_102d0cd0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
