/* f_0x100f3860 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f3860 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f3860(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10, CowU32 param_11, CowU32 param_12, CowU32 param_13)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    if (rd16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x416))) != 0) {
        g->eax = (CowU32)(3); return;
      }
      wr32((uint32_t)param_1, param_2);
      wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x416)), param_3);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x412)), param_13);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x413)), param_12);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x414)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x16)), rd32((uint32_t)param_4));
      uVar2 = rd32((uint32_t)(param_4 + 4u * (uint32_t)(1)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x18)), param_5);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x19)), param_6);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x17)), uVar2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2e)), 9);
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x31)), 0);
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x22)), 0);
      if ((param_7 != (CowU32)0x0) && (rd8((uint32_t)param_7) != '\0')) {
        cow_bridge_100f3010(g, COW_IMG(COW_ADDR_LIFT_100F38F1), 3u, (const CowU32[]){ param_1 + 0x22, param_7, 0x10 }, g->ecx, g->edx, g->eax, 12u);
      }
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b))) != 0) {
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_100F3904), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b))) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b)), 0);
      }
      if (param_10 != 0) {
        if (param_11 == 0) {
          param_11 = param_9;
        }
        iVar1 = cow_bridge_100f3050(g, COW_IMG(COW_ADDR_LIFT_100F3930), 5u, (const CowU32[]){ param_10, param_11, 0, 0, 0x10 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 == 0) {
          wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x416)), 0);
          g->eax = (CowU32)(0x10); return;
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x27))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2a)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x26))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2c)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x28))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x29))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x30)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2f))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x27)), 0);
      }
      iVar1 = cow_bridge_100f3050(g, COW_IMG(COW_ADDR_LIFT_100F3999), 5u, (const CowU32[]){ param_8, param_9, 0, 0, 0x10 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar1 != 0) {
        uVar2 = cow_bridge_100f32b0(g, COW_IMG(COW_ADDR_LIFT_100F39D4), 1u, (const CowU32[]){ 271983128u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(uVar2); return;
      }
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b))) != 0) {
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_100F39AD), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b))) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2b)), 0);
      }
      wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x416)), 0);
      g->eax = (CowU32)(0x10); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 13 parameter(s), cleanup 48 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 48.
   Arguments: 1 register argument(s) [ecx], 12 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f3860(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_11 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    CowU32 param_12 = rd32((uint32_t)(sp0 + 4u + 0x28u));
    CowU32 param_13 = rd32((uint32_t)(sp0 + 4u + 0x2cu));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f3860: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f3861: push esi */
    g->esi = g->ecx;   /* 0x100f3862: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100f3864: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100f3866: push edi */
    cow_lift_100f3860(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 48u);
}
/* COW_ADAPTER END */
