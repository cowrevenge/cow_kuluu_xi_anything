/* f_0x101fd220 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fd220 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fd220(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10663AA8)) <= (int)((param_2 & 0xffff) - 0x7080)) {
        g->eax = (CowU32)(0); return;
      }
      wr16((uint32_t)(param_1 + 0x32), (short)param_2);
      wr8((uint32_t)(param_1 + 0x1e), (char)param_3);
      wr16((uint32_t)(param_1 + 0x1c), 0x60);
      wr8((uint32_t)(param_1 + 0x1f), 8);
      cVar1 = cow_bridge_101fdaf0(g, COW_IMG(COW_ADDR_LIFT_101FD26B), 2u, (const CowU32[]){ param_2, param_3 == 2 }, g->ecx, g->edx, param_2, 0u);
      if (cVar1 == '\0') {
        wr8((uint32_t)(param_1 + 0x36), 0);
        wr32((uint32_t)(param_1 + 0x38), COW_IMG(COW_ADDR_LIFT_1065C828) + (param_2 & 0xffff));
      }
      cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FD286), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, param_2, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fd220(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x101fd220: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fd224: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101fd225: push edi */
    g->edi = g->eax;   /* 0x101fd226: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->edi = (uint32_t)(r); }   /* 0x101fd228: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x101fd22e: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10663AA8));   /* 0x101fd230: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0x7080u; uint32_t r = (uint32_t)(a - b); g->edi = (uint32_t)(r); }   /* 0x101fd236: register edi, replayed as the entry ran it */
    cow_lift_101fd220(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
