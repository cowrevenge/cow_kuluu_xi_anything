/* f_0x1009f7c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009f7c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009f7c0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 puVar3;
    switch(rd16((uint32_t)(param_3 + 0x30)) - 1) {
      case 0:
      case 2:
        wr32(COW_IMG(COW_ADDR_LIFT_104888F8), (CowU32)rd16((uint32_t)(param_3 + 4)));
        wr32(COW_IMG(COW_ADDR_LIFT_104888FC), (CowU32)rd16((uint32_t)(param_3 + 6)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488900), (CowU32)rd16((uint32_t)(param_3 + 8)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488904), (CowU32)rd16((uint32_t)(param_3 + 10)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488908), (CowU32)rd16((uint32_t)(param_3 + 0xc)));
        cow_bridge_1009f960(g, COW_IMG(COW_ADDR_LIFT_1009F81C), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1048894C), (CowU32)rd16((uint32_t)(param_3 + 0xe)));
        g->eax = (CowU32)(1); return;
      case 1:
        iVar1 = 0;
        puVar3 = (CowU32)(param_3 + 0x20);
        do {
          iVar2 = iVar1 + 4;
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488800) + iVar1), (CowU32)rd16((uint32_t)(puVar3 + 2u * (uint32_t)(-8))));
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488980) + iVar1), (CowU32)rd16((uint32_t)puVar3));
          iVar1 = iVar2;
          puVar3 = puVar3 + 2u * (uint32_t)(1);
        } while (iVar2 < 0x20);
        wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_104889A0), (CowU32)rd16((uint32_t)(param_3 + 0x32)));
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(1) & 0xffffu)); return;
      case 3:
        wr32(COW_IMG(COW_ADDR_LIFT_104888F8), (CowU32)rd16((uint32_t)(param_3 + 4)));
        wr32(COW_IMG(COW_ADDR_LIFT_104888FC), (CowU32)rd16((uint32_t)(param_3 + 6)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488900), (CowU32)rd16((uint32_t)(param_3 + 8)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488904), (CowU32)rd16((uint32_t)(param_3 + 10)));
        wr32(COW_IMG(COW_ADDR_LIFT_10488908), (CowU32)rd16((uint32_t)(param_3 + 0xc)));
        cow_bridge_1009f8e0(g, COW_IMG(COW_ADDR_LIFT_1009F8B5), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_1048894C), (CowU32)rd16((uint32_t)(param_3 + 0xe)));
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 0);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009f7c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009f7c0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1009f7c1: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1009f7c5: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1009f7c7: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1009f7cb: register eax, replayed as the entry ran it */
    cow_lift_1009f7c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
