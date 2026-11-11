/* f_0x100f42d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f42d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f42d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU16 uVar2;
    CowU32 uVar3;
    int iVar4;
    switch(param_2) {
      case 0:
        wr32((uint32_t)(param_1 + 0x210), 0);
        wr32((uint32_t)(param_1 + 0x214), 0);
        wr32((uint32_t)(param_1 + 0x218), 0);
        wr16((uint32_t)(param_1 + 0x10), 0);
        break;
      case 1:
        iVar4 = rd32((uint32_t)(param_1 + 0x218));
        piVar1 = (CowU32)(param_1 + 0x218);
        if (0 < iVar4) {
          if (((int32_t)(rd32((uint32_t)(param_1 + 0x214))) < (int32_t)(iVar4))) {
            wr32((uint32_t)param_3, param_1 + 0x224 + rd32((uint32_t)(param_1 + 0x214)) * 0x208);
            wr32((uint32_t)(param_1 + 0x214), rd32((uint32_t)(param_1 + 0x214)) + 1);
            g->eax = (CowU32)(0x18); return;
          }
          if (iVar4 < 5) {
            g->eax = (CowU32)(0x17); return;
          }
          wr32((uint32_t)piVar1, 0);
          wr32((uint32_t)(param_1 + 0x214), 0);
          wr32((uint32_t)(param_1 + 0x210), rd32((uint32_t)(param_1 + 0x210)) + iVar4);
          wr16((uint32_t)(param_1 + 0x10), 0);
        }
        if (((int32_t)(-1) < (int32_t)(rd32((uint32_t)(param_1 + 0x208))))) {
          iVar4 = cow_bridge_10310f22(g, COW_IMG(COW_ADDR_LIFT_100F43FB), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x208)), piVar1 }, g->ecx, g->edx, param_2, 8u);
          if (iVar4 == 0) {
            wr32((uint32_t)piVar1, 0);
            g->eax = (CowU32)(0x16); return;
          }
          if (-1 < iVar4) {
            cow_bridge_10310ed5(g, COW_IMG(COW_ADDR_LIFT_100F4427), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x208)) }, g->ecx, g->edx, param_2, 4u);
            wr32((uint32_t)(param_1 + 0x208), 0xffffffff);
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((rd32((uint32_t)piVar1) < 1) + 0x16) & 0xffu)); return;
          }
          if (param_4 != (CowU32)0x0) {
            wr32((uint32_t)param_4, iVar4);
          }
          cow_bridge_10310ed5(g, COW_IMG(COW_ADDR_LIFT_100F444B), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x208)) }, g->ecx, g->edx, param_2, 0u);
          wr32((uint32_t)(param_1 + 0x208), 0xffffffff);
          g->eax = (CowU32)(0x14); return;
        }
        uVar2 = rd16((uint32_t)(param_1 + 0x10));
        wr16((uint32_t)(param_1 + 0x10), uVar2 + 1);
        if (10 < uVar2) {
          if (param_4 != (CowU32)0x0) {
            wr32((uint32_t)param_4, rd32((uint32_t)(param_1 + 0x208)));
          }
          g->eax = (CowU32)(0x14); return;
        }
        break;
      case 2:
        if (((int32_t)(-1) < (int32_t)(rd32((uint32_t)(param_1 + 0x208))))) {
          cow_bridge_10310ed5(g, COW_IMG(COW_ADDR_LIFT_100F447A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x208)) }, g->ecx, g->edx, param_2, 4u);
          wr32((uint32_t)(param_1 + 0x208), 0xffffffff);
        }
        g->eax = (CowU32)(6); return;
      case 3:
        g->eax = (CowU32)((((int32_t)(rd32((uint32_t)(param_1 + 0x208))) < (int32_t)(0))) - 1U & 3); return;
      default:
        g->eax = (CowU32)(0x15); return;
      }
      uVar3 = cow_bridge_10310f2d(g, COW_IMG(COW_ADDR_LIFT_100F4334), 4u, (const CowU32[]){ param_1 + 0xc48, param_1 + 0x21c, rd32((uint32_t)(param_1 + 0x210)), 5 }, g->ecx, g->edx, param_2, 16u);
      wr32((uint32_t)(param_1 + 0x208), uVar3);
      g->eax = (CowU32)(0x16); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f42d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x100f42d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f42d4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f42d5: push esi */
    cow_lift_100f42d0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
