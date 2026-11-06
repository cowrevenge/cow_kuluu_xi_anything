/* f_0x10314dd1 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10314dd1 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10314dd1(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    piVar1 = param_1;
      if (rd32((uint32_t)param_1) < 0) {
        g->eax = (CowU32)((CowU32)0x0); return;
      }
      cow_bridge_1031ffb9(g, COW_IMG(COW_ADDR_LIFT_10314DE9), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      iVar2 = rd32((uint32_t)piVar1);
      if ((0x3f480 < iVar2) && (iVar2 < 0x7ffc0b7f)) {
        param_1 = (CowU32)(iVar2 - rd32(COW_IMG(COW_ADDR_LIFT_103D2D50)));
        piVar1 = (CowU32)cow_bridge_10320591(g, COW_IMG(COW_ADDR_LIFT_10314E0B), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D2D54)) == 0) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        iVar2 = cow_bridge_10320284(g, COW_IMG(COW_ADDR_LIFT_10314E21), 1u, (const CowU32[]){ piVar1 }, 0u, 0u, g->eax, 0u);
        if (iVar2 == 0) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        param_1 = (CowU32)((int)param_1 - rd32(COW_IMG(COW_ADDR_LIFT_103D2D58)));
        piVar1 = (CowU32)cow_bridge_10320591(g, COW_IMG(COW_ADDR_LIFT_10314E3B), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, g->eax, 0u);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(8)), 1);
        g->eax = (CowU32)((CowU32)0x0); return;
      }
      piVar1 = (CowU32)cow_bridge_10320591(g, COW_IMG(COW_ADDR_LIFT_10314E50), 1u, (const CowU32[]){ piVar1 }, 0u, 0u, g->eax, 0u);
      iVar3 = cow_bridge_10320284(g, COW_IMG(COW_ADDR_LIFT_10314E58), 1u, (const CowU32[]){ piVar1 }, 0u, 0u, g->eax, 0u);
      iVar2 = rd32((uint32_t)piVar1);
      if (iVar3 != 0) {
        iVar2 = iVar2 - rd32(COW_IMG(COW_ADDR_LIFT_103D2D58));
      }
      param_1 = (CowU32)(iVar2 - rd32(COW_IMG(COW_ADDR_LIFT_103D2D50)));
      iVar2 = (int)param_1 % 0x3c;
      wr32((uint32_t)piVar1, iVar2);
      if (iVar2 < 0) {
        wr32((uint32_t)piVar1, iVar2 + 0x3c);
        param_1 = (CowU32)((int)param_1 + -0x3c);
      }
      param_1 = (CowU32)((int)param_1 / 0x3c + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))));
      iVar2 = (int)param_1 % 0x3c;
      wr32((uint32_t)(piVar1 + 4u * (uint32_t)(1)), iVar2);
      if (iVar2 < 0) {
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(1)), iVar2 + 0x3c);
        param_1 = (CowU32)((int)param_1 + -0x3c);
      }
      param_1 = (CowU32)((int)param_1 / 0x3c + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))));
      iVar2 = (int)param_1 % 0x18;
      wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), iVar2);
      if (iVar2 < 0) {
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), iVar2 + 0x18);
        param_1 = (CowU32)((int)param_1 + -0x18);
      }
      iVar2 = (int)param_1 / 0x18;
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(6)), (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(6))) + 7 + iVar2) % 7);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) + iVar2);
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) < 1) {
          wr32((uint32_t)(piVar1 + 4u * (uint32_t)(5)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(5))) + -1);
          wr32((uint32_t)(piVar1 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) + 0x1f);
          wr32((uint32_t)(piVar1 + 4u * (uint32_t)(7)), 0x16c);
          wr32((uint32_t)(piVar1 + 4u * (uint32_t)(4)), 0xb);
          g->eax = (CowU32)((CowU32)0x0); return;
        }
      }
      else {
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(6)), (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(6))) + iVar2) % 7);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) + iVar2);
      }
      wr32((uint32_t)(piVar1 + 4u * (uint32_t)(7)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(7))) + iVar2);
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10314dd1(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10314dd1: push ebp */
    g->ebp = g->esp;                       /* 0x10314dd2: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10314dd4: push esi */
    g->esi = param_2;   /* 0x10314dd5: the value the entry loaded and the decompiler dropped */
    cow_lift_10314dd1(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
