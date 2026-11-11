/* f_0x1024d1a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024d1a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024d1a0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU8 uVar3;
    if ((int)param_2 < 0) {
        param_2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      }
      if (((param_2 == rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)))) && (param_1 + 0x2a != (CowU32)0x0)) && ((rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2a))) & 4) != 0)) {
        if (param_3 == rd32((uint32_t)(param_1 + 4u * (uint32_t)(3)))) {
          g->eax = (CowU32)(param_3); return;
        }
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) | 0x80);
        uVar1 = cow_bridge_1024d5e0(g, COW_IMG(COW_ADDR_LIFT_1024D1DF), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, param_1, 8u);
        g->eax = (CowU32)(uVar1); return;
      }
      wr32((uint32_t)param_1, rd32((uint32_t)param_1) & 0xffffff7f);
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) == 1) {
        cow_bridge_1024d7b0(g, COW_IMG(COW_ADDR_LIFT_1024D213), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, param_1, 4u);
      }
      cow_bridge_102506e0(g, COW_IMG(COW_ADDR_LIFT_1024D21E), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1024d420(g, COW_IMG(COW_ADDR_LIFT_1024D224), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1024d2e0(g, COW_IMG(COW_ADDR_LIFT_1024D22C), 2u, (const CowU32[]){ param_1, 1 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1024d490(g, COW_IMG(COW_ADDR_LIFT_1024D237), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, param_1, 0u);
      if ((rd32((uint32_t)param_1) & 0x20) == 0) {
        uVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10389578) + 4u * (uint32_t)(param_2)));
      }
      else {
        uVar3 = 0xa9;
      }
      cow_bridge_10037960(g, COW_IMG(COW_ADDR_LIFT_1024D255), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, param_1, 4u);
      cow_bridge_1024d4c0(g, COW_IMG(COW_ADDR_LIFT_1024D25F), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, param_1, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), param_2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), param_3);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 1);
      iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10389538) + param_2 * 4));
      if ((rd32((uint32_t)param_1) & 0x20) == 0) {
        iVar2 = iVar2 + 2;
      }
      cow_bridge_10252630(g, COW_IMG(COW_ADDR_LIFT_1024D291), 2u, (const CowU32[]){ param_1 + 0x2a, iVar2 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1024d560(g, COW_IMG(COW_ADDR_LIFT_1024D299), 3u, (const CowU32[]){ param_1, param_2, param_3 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_10252630(g, COW_IMG(COW_ADDR_LIFT_1024D2B1), 2u, (const CowU32[]){ param_1 + 0x33, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10389538) + param_2 * 4)) + 4 + param_3 * 2 }, g->ecx, g->edx, param_1, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0x47c35000);
      wr32((uint32_t)param_1, rd32((uint32_t)param_1) & 0xfffff9ff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1e)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1f)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x20)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x21)), 0);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024d1a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_2;   /* 0x1024d1a0: the value the entry loaded and the decompiler dropped */
    g->eax = param_1;   /* 0x1024d1a4: the value the entry loaded and the decompiler dropped */
    cow_lift_1024d1a0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
