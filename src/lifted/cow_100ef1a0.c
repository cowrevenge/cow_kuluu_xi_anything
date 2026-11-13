/* f_0x100ef1a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ef1a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ef1a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_104DF770));
      switch(rd32((uint32_t)param_1)) {
      case 0:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136ac), 0);
        if (rd32(COW_IMG(COW_ADDR_LIFT_104CA430)) == 0) {
          cow_bridge_101152d0(g, COW_IMG(COW_ADDR_LIFT_100EF1D0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10115500(g, COW_IMG(COW_ADDR_LIFT_100EF1E7), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136b4 }, g->ecx, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_104CA430), rd32(COW_IMG(COW_ADDR_LIFT_104CA430)) + 1);
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
          g->eax = (CowU32)(0); return;
        }
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 2);
        g->eax = (CowU32)(0); return;
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:
      case 0xb:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EF398), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        }
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) != -1) {
          g->eax = (CowU32)(0); return;
        }
        break;
      case 2:
        cow_bridge_10115930(g, COW_IMG(COW_ADDR_LIFT_100EF223), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136dc }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 4:
        cow_bridge_101158e0(g, COW_IMG(COW_ADDR_LIFT_100EF241), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 6:
        cow_bridge_101158e0(g, COW_IMG(COW_ADDR_LIFT_100EF25E), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 8:
        cow_bridge_10115970(g, COW_IMG(COW_ADDR_LIFT_100EF282), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136dc }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 10:
        puVar2 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13830 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x1381c)) * 0x8c);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0xb8), rd32((uint32_t)puVar2));
        wr32((uint32_t)(iVar1 + 0xbc), rd32((uint32_t)(puVar2 + 4u * (uint32_t)(1))));
        wr32((uint32_t)(iVar1 + 0xc0), rd32((uint32_t)(puVar2 + 4u * (uint32_t)(2))));
        wr16((uint32_t)(iVar1 + 0xc4), rd16((uint32_t)(puVar2 + 4u * (uint32_t)(3))));
        wr8((uint32_t)(iVar1 + 0xc6), rd8((uint32_t)((int)puVar2 + 0xe)));
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 199), 0);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0xb4), (CowU32)(((uint32_t)(rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x1381c)) * 0x8c + 0x1382f))) & 0xffu) << 16 | ((uint32_t)(rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13828 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x1381c)) * 0x8c))) & 0xffffu)));
        puVar2 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 100);
        for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar2, 0);
          puVar2 = puVar2 + 4u * (uint32_t)(1);
        }
        cow_bridge_101159b0(g, COW_IMG(COW_ADDR_LIFT_100EF33E), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 100 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 0xc:
        cow_bridge_10115870(g, COW_IMG(COW_ADDR_LIFT_100EF35C), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      case 0xd:
        cow_bridge_10115d50(g, COW_IMG(COW_ADDR_LIFT_100EF3D8), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698 }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) == 0) {
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13690), 0);
          wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        }
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x13698)) != -1) {
          g->eax = (CowU32)(0); return;
        }
        break;
      case 0xe:
        cow_bridge_101152e0(g, COW_IMG(COW_ADDR_LIFT_100EF36D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_104CA430), 0);
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) + 1);
        g->eax = (CowU32)(0); return;
      default:
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)(0xffffffff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ef1a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ef1a0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100ef1a1: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x100ef1a5: register eax, replayed as the entry ran it */
    cow_lift_100ef1a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
