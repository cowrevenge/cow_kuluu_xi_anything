/* f_0x1010d350 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010d350 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010d350(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    piVar2 = rd32((uint32_t)(param_2 + 0x18));
      do {
        if ((rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) == 0) || (rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) == 0)) {
          return;
        }
        piVar1 = rd32((uint32_t)(param_1 + 0x14));
        while( 1 ) {
          if ((rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) == 0) || ((CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) == (CowU32)0x0)) goto L_1010d3bf;
          if (rd32((uint32_t)piVar1) == rd32((uint32_t)piVar2)) break;
          piVar1 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
        }
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) != 0) {
          wr32((uint32_t)(rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) + 8), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))));
        }
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) != 0) {
          wr32((uint32_t)(rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) + 4), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))));
        }
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), 0);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(1)), 0);
        if ((int8_t)rd8((uint32_t)(param_1 + 8)) == '\0') {
          wr32((uint32_t)piVar1, 0);
        }
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010D3B2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010D3B8), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, param_2, 4u);
        wr16((uint32_t)(param_1 + 10), (int16_t)rd16((uint32_t)(param_1 + 10)) + -1);
    L_1010d3bf:
        if ((CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) != (CowU32)0x0) {
          piVar2 = (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010d350(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_2;   /* 0x1010d350: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010d354: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010d355: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010d356: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010d357: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1010d358: register edi, replayed as the entry ran it */
    g->ebp = g->ecx;   /* 0x1010d35b: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1010d35d: the value the entry loaded and the decompiler dropped */
    cow_lift_1010d350(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
