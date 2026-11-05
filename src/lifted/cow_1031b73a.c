/* f_0x1031b73a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1031b73a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1031b73a(Guest* g, CowU32 param_1)
{
    int iVar1;
    CowU32 uVar2;
    uVar2 = param_1;
      if (rd32(COW_IMG(COW_ADDR_LIFT_109F8408)) == 3) {
        if (param_1 < 0x3f9) {
          wr32(COW_IMG(COW_ADDR_LIFT_109F8400), param_1);
          g->eax = (CowU32)(1); return;
        }
      }
      else if (rd32(COW_IMG(COW_ADDR_LIFT_109F8408)) == 2) {
        uVar2 = param_1 + 0xf & 0xfffffff0;
        if (uVar2 < 0x781) {
          wr32(COW_IMG(COW_ADDR_LIFT_103D29DC), uVar2);
          g->eax = (CowU32)(1); return;
        }
      }
      else if ((rd32(COW_IMG(COW_ADDR_LIFT_109F8408)) == 1) && (param_1 != 0)) {
        cow_bridge_1031b4a1(g, COW_IMG(COW_ADDR_LIFT_1031B790), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_109F8408)), 0u);
        if ((CowU8)param_1 < 6) {
          uVar2 = uVar2 + 0xf & 0xfffffff0;
          if ((uVar2 < 0x781) && (iVar1 = cow_bridge_1031c756(g, COW_IMG(COW_ADDR_LIFT_1031B7CF), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_109F8408)), 0u), iVar1 != 0)) {
            wr32(COW_IMG(COW_ADDR_LIFT_103D29DC), uVar2);
            wr32(COW_IMG(COW_ADDR_LIFT_109F8408), 2);
            g->eax = (CowU32)(1); return;
          }
        }
        else if ((uVar2 < 0x3f9) && (iVar1 = cow_bridge_1031b7ed(g, COW_IMG(COW_ADDR_LIFT_1031B7A5), 1u, (const CowU32[]){ uVar2 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_109F8408)), 0u), iVar1 != 0)) {
          wr32(COW_IMG(COW_ADDR_LIFT_109F8400), uVar2);
          wr32(COW_IMG(COW_ADDR_LIFT_109F8408), 3);
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)(1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1031b73a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1031b73a: push ebp */
    g->ebp = g->esp;                       /* 0x1031b73b: mov ebp, esp */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_109F8408));   /* 0x1031b73d: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1031b742: push esi */
    cow_lift_1031b73a(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
