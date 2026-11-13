/* f_0x1003cb30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1003cb30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1003cb30(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)param_2));
      wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
      wr32((uint32_t)(param_1 + 0x2c), rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
      wr32((uint32_t)(param_1 + 0x34), rd32((uint32_t)(param_2 + 4u * (uint32_t)(4))));
      wr32((uint32_t)(param_1 + 0x38), rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))));
      wr32((uint32_t)(param_1 + 0x3c), rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))));
      wr32((uint32_t)(param_1 + 0x40), rd32((uint32_t)(param_2 + 4u * (uint32_t)(7))));
      puVar2 = param_2 + 4u * (uint32_t)(8);
      puVar3 = (CowU32)(param_1 + 0x70);
      for (iVar1 = (((CowU32)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) >> 7 & 0x7ffff) - 2 & 0xfffffff) << 2; iVar1 != 0;
          iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 4u * (uint32_t)(1);
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr8((uint32_t)puVar3, rd8((uint32_t)puVar2));
        puVar2 = (CowU32)((int)puVar2 + 1);
        puVar3 = (CowU32)((int)puVar3 + 1);
      }
      cow_bridge_1003b640(g, COW_IMG(COW_ADDR_LIFT_1003CB9E), 0u, (const CowU32[]){ 0u }, (g->eax + 48u), g->edx, g->ecx, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1003cb30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = param_2;   /* 0x1003cb30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1003cb34: push esi */
    g->eax = g->ecx;   /* 0x1003cb35: the value the entry loaded and the decompiler dropped */
    g->esi = g->edx;   /* 0x1003cb37: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1003cb39: push edi */
    { uint32_t A = (uint32_t)(g->esi); g->edi = (uint32_t)(rd32(A)); }   /* 0x1003cb3a: register edi, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + 0x20u)); }   /* 0x1003cb3c: register ecx, replayed as the entry ran it */
    cow_lift_1003cb30(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
