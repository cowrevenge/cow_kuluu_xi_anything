/* f_0x100f7c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f7c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f7c30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    char cVar2;
    CowU8 bVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 pcVar7;
    _Bool bVar3;
      
      bVar3 = 1;
      if ((param_2 < -1) || (7 < param_2)) {
        bVar3 = 0;
      }
      if ((param_3 < 0) || (0x50 < param_3)) {
        bVar3 = 0;
      }
      if (param_4 < 1) {
        bVar3 = 0;
      }
      if (param_5 == (CowU32)0x0) {
        bVar3 = 0;
      }
      uVar6 = 0xffffffff;
      pcVar7 = param_5;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = rd8((uint32_t)pcVar7);
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if ((2 < (int)(~uVar6 - 1)) && ((int)(~uVar6 - 1) < 0x10)) {
        if (!bVar3) {
          g->eax = (CowU32)(bVar3); return;
        }
        iVar5 = cow_bridge_100f7bc0(g, COW_IMG(COW_ADDR_LIFT_100F7C95), 4u, (const CowU32[]){ 2, 2, param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar5 != 0) {
          pbVar1 = (CowU32)(iVar5 + 0x10);
          wr32((uint32_t)pbVar1, rd32((uint32_t)param_5));
          wr32((uint32_t)(iVar5 + 0x14), rd32((uint32_t)(param_5 + 4)));
          wr32((uint32_t)(iVar5 + 0x18), rd32((uint32_t)(param_5 + 8)));
          wr32((uint32_t)(iVar5 + 0x1c), rd32((uint32_t)(param_5 + 0xc)));
          if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
            uVar6 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)((CowU32)rd8((uint32_t)pbVar1) * 2))) & 2;
          }
          else {
            uVar6 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_100F7CCF), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 8u);
          }
          if (uVar6 != 0) {
            bVar4 = cow_bridge_10313bb4(g, COW_IMG(COW_ADDR_LIFT_100F7CF2), 1u, (const CowU32[]){ rd8((uint32_t)pbVar1) }, g->ecx, g->edx, g->eax, 4u);
            wr8((uint32_t)pbVar1, bVar4);
          }
          wr32((uint32_t)(iVar5 + 8), param_4);
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f7c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f7c30: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100f7c31: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100f7c35: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f7c36: push esi */
    cow_lift_100f7c30(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
