/* f_0x1021c2e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021c2e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021c2e0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 extraout_var;
    if ((int16_t)rd16((uint32_t)(param_1 + 0x80 + (param_3 & 0xff) * 0x18)) != 0) {
        cow_bridge_1021d270(g, COW_IMG(COW_ADDR_LIFT_1021C30A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c680(g, COW_IMG(COW_ADDR_LIFT_1021C312), 1u, (const CowU32[]){ g->esi }, g->edi, g->edx, g->eax, 0u);
      }
      cow_bridge_1021c5b0(g, COW_IMG(COW_ADDR_LIFT_1021C321), 3u, (const CowU32[]){ param_2, param_3, 0 }, g->ecx, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_1021d380(g, COW_IMG(COW_ADDR_LIFT_1021C32F), 2u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)param_2)) & 0xffffu)), param_3 }, g->ecx, g->edx, g->eax, 0u);
      if ((cVar1 != '\x01') && ((int16_t)rd16((uint32_t)(param_1 + (param_3 & 0xff) * 0x18 + 0x80)) == 0)) {
        cow_bridge_1021c680(g, COW_IMG(COW_ADDR_LIFT_1021C345), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021c2e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1021c2e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1021c2e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1021c2e2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1021c2e3: register esi, replayed as the entry ran it */
    g->eax = g->esi;   /* 0x1021c2e7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1021c2e9: push edi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1021c2ea: register eax, replayed as the entry ran it */
    g->edi = g->ecx;   /* 0x1021c2ef: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x1021c2f1: register eax, replayed as the entry ran it */
    cow_lift_1021c2e0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
