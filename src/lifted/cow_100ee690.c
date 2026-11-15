/* f_0x100ee690 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ee690 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ee690(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    uint64_t uVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) == 0) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      if (rd32((uint32_t)param_1) == 0) {
        cow_bridge_100edea0(g, COW_IMG(COW_ADDR_LIFT_100EE6B3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = g->edx;
      }
      else {
        uVar3 = cow_bridge_100edeb0(g, COW_IMG(COW_ADDR_LIFT_100EE6BA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = (int)((uint64_t)uVar3 >> 0x20);
        if ((int)uVar3 != 0) {
          g->eax = (CowU32)(0xffffffff); return;
        }
      }
      switch(rd32((uint32_t)param_1)) {
      case 0:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_100EE6DD), 2u, (const CowU32[]){ 8u, 22u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100f0000(g, COW_IMG(COW_ADDR_LIFT_100EE6E3), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136ac), 0);
        cow_bridge_10115930(g, COW_IMG(COW_ADDR_LIFT_100EE70A), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136dc }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 1:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EE72A), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        }
        iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698));
        goto L_100ee86c;
      case 2:
        cow_bridge_10115a00(g, COW_IMG(COW_ADDR_LIFT_100EE760), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), param_2 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        break;
      case 3:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EE780), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        }
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == -1) {
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 3);
          g->eax = (CowU32)(0); return;
        }
        break;
      case 4:
        cow_bridge_10115970(g, COW_IMG(COW_ADDR_LIFT_100EE7C2), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x136dc }, g->ecx, g->edx, g->eax, 0u);
        goto L_100ee84c;
      case 5:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EE7DA), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)param_1, 10);
        }
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == -1) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        g->eax = (CowU32)(0); return;
      case 6:
        uVar1 = cow_bridge_100ef8f0(g, COW_IMG(COW_ADDR_LIFT_100EE80E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136ac), uVar1);
        cow_bridge_10115820(g, COW_IMG(COW_ADDR_LIFT_100EE82C), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 7:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EE84C), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
    L_100ee84c:
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        }
        iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698));
    L_100ee86c:
        if (iVar2 == -1) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        g->eax = (CowU32)(0); return;
      case 8:
        cow_bridge_10115970(g, COW_IMG(COW_ADDR_LIFT_100EE886), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x136dc }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 9:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EE8A6), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x13690)), iVar2 + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == -1) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        g->eax = (CowU32)(0); return;
      case 10:
        g->eax = (CowU32)(1); return;
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ee690(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_104DF770));   /* 0x100ee690: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ee696: push esi */
    cow_lift_100ee690(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
