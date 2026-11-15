/* f_0x1028a170 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028a170 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028a170(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU32 local_4;
    bVar1 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1028A182), 1u, (const CowU32[]){ g->eax }, param_1, g->edx, g->eax, 0u);
      bVar2 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1028A196), 1u, (const CowU32[]){ (int)rd8((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 8u);
      if (bVar1 == bVar2) {
        do {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (bVar1 == 0) {
            g->eax = (CowU32)(0); return;
          }
          bVar1 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1028A1AF), 1u, (const CowU32[]){ (int)rd8((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 0u);
          bVar2 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1028A1BF), 1u, (const CowU32[]){ (int)rd8((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 8u);
        } while (bVar1 == bVar2);
      }
      local_4 = (CowU32)bVar1;
      param_1 = (CowU32)(CowU32)bVar2;
      g->eax = (CowU32)(local_4 - (int)param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028a170(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1028a170: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028a171: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028a172: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1028a173: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028a177: push edi */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x1028a178: register eax, replayed as the entry ran it */
    { { uint32_t a = g->esi; uint32_t r = (uint32_t)(a + 1u); g->esi = (uint32_t)(r); }; }   /* 0x1028a17c: register esi, replayed as the entry ran it */
    cow_lift_1028a170(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
