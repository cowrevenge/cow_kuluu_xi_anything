/* f_0x10014ad0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10014ad0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10014ad0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    short sVar2;
    CowU32 pvVar3;
    int iVar4;
    cow_bridge_100db140(g, COW_IMG(COW_ADDR_LIFT_10014AE0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0x90);
      sVar2 = (int16_t)rd16((uint32_t)((int)param_1 + 6));
      if (sVar2 == 0) {
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10014B62), 1u, (const CowU32[]){ 271909684u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_10136870(g, COW_IMG(COW_ADDR_LIFT_10014B8F), 3u, (const CowU32[]){ 0, 0, 0 }, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E2150)) + 0x30)), g->edx, g->eax, 0u);
        cow_bridge_10136870(g, COW_IMG(COW_ADDR_LIFT_10014BA0), 3u, (const CowU32[]){ 0, 0, 0 }, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E2154)) + 0x30)), g->edx, g->eax, 0u);
        iVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10668FF8));
        piVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10668FF8)) + 0x14);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FF8)) + 600), 0);
        if (rd32((uint32_t)piVar1) == 0) {
          wr32((uint32_t)(iVar4 + 0x25c), 0);
          cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_10014BC5), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar4 + 0x14), 0);
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10456900)) < 0) {
          cow_bridge_1023bf40(g, COW_IMG(COW_ADDR_LIFT_10014BD7), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10456900)) }, g->ecx, g->edx, g->eax, 4u);
        }
        cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_10014BF1), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10668FF4)) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10014C03), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10350334), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_10010d10(g, COW_IMG(COW_ADDR_LIFT_10014B69), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      }
      else if (sVar2 == 1) {
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FF8)) + 0x25c)) == 1) {
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10014B7E), 1u, (const CowU32[]){ 271909608u }, 274864184u, g->edx, g->eax, 0u);
          cow_bridge_10010d10(g, COW_IMG(COW_ADDR_LIFT_10014C0A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
      }
      else if (sVar2 == 2) {
        cow_bridge_101ab7d0(g, COW_IMG(COW_ADDR_LIFT_10014B04), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        pvVar3 = rd32(COW_IMG(COW_ADDR_LIFT_106631D4));
        if (rd32(COW_IMG(COW_ADDR_LIFT_106631D4)) != (CowU32)0x0) {
          cow_bridge_101d2f00(g, COW_IMG(COW_ADDR_LIFT_10014B15), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), g->edx, g->eax, 0u);
          cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_10014B1B), 1u, (const CowU32[]){ pvVar3 }, g->ecx, g->edx, g->eax, 4u);
          wr32(COW_IMG(COW_ADDR_LIFT_106631D4), (CowU32)0x0);
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_1045690C)) != (CowU32)0x0) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045690C))))) + 0x18u))), COW_IMG(COW_ADDR_LIFT_10014B35), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_1045690C), (CowU32)0x0);
        }
        g->eax = (CowU32)(1); return;
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10014ad0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10014ad0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10014ad1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10014ad2: push edi */
    g->edi = g->ecx;   /* 0x10014ad3: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_103601BC));   /* 0x10014ad5: the value the entry loaded and the decompiler dropped */
    cow_lift_10014ad0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
