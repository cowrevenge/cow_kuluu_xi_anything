/* f_0x101e2720 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2720 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2720(Guest* g)
{
    int iVar1;
    CowU32 puVar2;
    CowU8 uStack_78;
    CowU8 auStack_77[11];
    CowU16 uStack_6c;
    CowU16 auStack_6a[10];
    CowU8 auStack_56[22];
    CowU32 puStack_40;
    CowU32 uStack_3c;
    CowU32 uStack_38;
    CowU32 uStack_34;
    CowU32 uStack_30;
    CowU32 uStack_2c;
    CowU32 uStack_28;
    CowU32 uStack_24;
    CowU32 uStack_20;
    CowU32 uStack_1c;
    CowU32 uStack_18;
    CowU32 uStack_14;
    CowU32 uStack_10;
    CowU16 uStack_c;
    CowU32 uStack_a;
    CowU32 uStack_6;
    CowU16 uStack_2;
    uStack_78 = 0;
      uStack_6c = 0;
      iVar1 = 0;
      puVar2 = auStack_6a;
      do {
        auStack_77[iVar1] = 0;
        wr16((uint32_t)puVar2, 0);
        auStack_56[iVar1] = 0;
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < 10);
      uStack_3c = 0;
      uStack_28 = 0;
      uStack_38 = 0;
      uStack_24 = 0;
      uStack_34 = 0;
      puStack_40 = &uStack_78;
      uStack_30 = 0;
      uStack_20 = 0;
      uStack_2c = 0;
      uStack_1c = 0;
      uStack_a = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_6 = 0;
      uStack_10 = 0;
      uStack_2 = 0;
      uStack_c = 0;
      iVar1 = cow_bridge_101e26b0(g, COW_IMG(COW_ADDR_LIFT_101E27A8), 1u, (const CowU32[]){ &puStack_40 }, 0u, 0u, g->eax, 0u);
      if (iVar1 == 0) {
        iVar1 = cow_bridge_101e2700(g, COW_IMG(COW_ADDR_LIFT_101E27B8), 1u, (const CowU32[]){ &puStack_40 }, 0u, 0u, g->eax, 0u);
        if (iVar1 == 0) {
          cow_bridge_101e2300(g, COW_IMG(COW_ADDR_LIFT_101E27C5), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        }
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 120 locals, pops [-], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2720(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 0x78u;                      /* 0x101e2720: 120 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e2723: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e2724: push esi */
    g->ebx = 0u;   /* 0x101e2725: the value the entry loaded and the decompiler dropped */
    cow_lift_101e2720(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
