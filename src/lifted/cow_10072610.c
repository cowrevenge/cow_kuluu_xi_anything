/* f_0x10072610 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10072610 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10072610(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, int32_t param_6, CowU32 param_7)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    int64_t lVar5;
    uint64_t uVar6;
    lVar5 = (((uint64_t)(param_1) & 0xffffffffu) << 32 | ((uint64_t)(param_1) & 0xffffffffu));
      wr32(COW_IMG(COW_ADDR_LIFT_1047D134), (char)param_7);
      uVar2 = rd32((uint32_t)(param_1 + 0x24)) & 0x7f;
      if (uVar2 != 1) {
        lVar5 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_1007263C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      do {
        uVar4 = (CowU32)((uint64_t)lVar5 >> 0x20);
        uVar6 = (((uint64_t)(uVar4) & 0xffffffffu) << 32 | ((uint64_t)(uVar4) & 0xffffffffu));
        iVar3 = (int)lVar5;
        if (iVar3 == 0) {
          if (uVar2 != 1) {
            uVar6 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_100726DE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)((int)uVar6 + 0x38), param_6);
          piVar1 = rd32((uint32_t)((int)uVar6 + 0x28));
          iVar3 = (int)((uint64_t)uVar6 >> 0x20);
          if (piVar1 != (CowU32)0x0) {
            if ((rd32((uint32_t)piVar1) != 0) &&
               (uVar6 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_100726F7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (int)uVar6 != (int)((uint64_t)uVar6 >> 0x20))) {
              cow_bridge_10072610(g, COW_IMG(COW_ADDR_LIFT_10072710), 6u, (const CowU32[]){ param_2, param_3, param_4, param_5, param_6, param_7 }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)(param_2); return;
            }
            iVar3 = param_1;
          }
          if ((rd32(COW_IMG(COW_ADDR_LIFT_1047D134)) == '\0') && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047D128)) + 0x40008)) != (int32_t)rd32((uint32_t)(iVar3 + 0x14)))) {
            cow_bridge_10072610(g, COW_IMG(COW_ADDR_LIFT_1007274E), 6u, (const CowU32[]){ param_2, param_3, param_4, param_5, param_6, 0 }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(param_2); return;
          }
          wr32((uint32_t)param_2, 0);
          g->eax = (CowU32)(param_2); return;
        }
        if ((((CowU8)rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == 1) && ((int32_t)rd32((uint32_t)(iVar3 + 0x38)) == param_6))
        {
          if (rd32((uint32_t)(iVar3 + 0x3c)) == (CowU32)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = rd32((uint32_t)rd32((uint32_t)((iVar3 + 0x3c))));
          }
        }
        if (param_3 == 0) {
          if ((rd32((uint32_t)(iVar3 + 0x20)) & param_5) == param_4) {
    L_1007267e:
            wr32((uint32_t)param_2, rd32((uint32_t)(iVar3 + 0x14)));
            g->eax = (CowU32)(param_2); return;
          }
        }
        else if ((rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == param_3) {
          if (param_4 == 0) goto L_1007267e;
          if ((rd32((uint32_t)(iVar3 + 0x20)) & param_5) == param_4) {
            wr32((uint32_t)param_2, rd32((uint32_t)(iVar3 + 0x14)));
            g->eax = (CowU32)(param_2); return;
          }
        }
        if (rd32((uint32_t)(iVar3 + 8)) == (CowU32)0x0) {
          lVar5 = (uint64_t)uVar4 << 0x20;
        }
        else {
          lVar5 = (((uint64_t)(uVar4) & 0xffffffffu) << 32 | ((uint64_t)(rd32((uint32_t)rd32((uint32_t)((iVar3 + 8))))) & 0xffffffffu));
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 7 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [ebx], ret 24.
   Arguments: 1 register argument(s) [ecx], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10072610(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->esp -= 0x8u;                      /* 0x10072610: 8 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10072613: register eax, replayed as the entry ran it */
    g->edx = g->ecx;   /* 0x10072617: the value the entry loaded and the decompiler dropped */
    cow_lift_10072610(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
