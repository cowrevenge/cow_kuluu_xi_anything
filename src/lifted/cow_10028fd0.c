/* f_0x10028fd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10028fd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10028fd0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    wr32(COW_IMG(COW_ADDR_LIFT_104570DC), rd32(COW_IMG(COW_ADDR_LIFT_104570DC)) + param_1);
      switch(param_2) {
      case 0:
        puVar1 = (CowU32)cow_bridge_10028850(g, COW_IMG(COW_ADDR_LIFT_10029038), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570B4)), rd32(COW_IMG(COW_ADDR_LIFT_104570B8)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A664));
          g->eax = (CowU32)(puVar1 + 8); return;
        }
        break;
      case 1:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_1002900D), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570B4)), rd32(COW_IMG(COW_ADDR_LIFT_104570B8)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A67C));
          g->eax = (CowU32)(puVar1 + 8); return;
        }
        break;
      case 2:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_10029063), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570BC)), rd32(COW_IMG(COW_ADDR_LIFT_104570C0)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 == (CowU32)0x0) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A64C));
        g->eax = (CowU32)(puVar1 + 8); return;
      case 3:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_1002908F), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570BC)), rd32(COW_IMG(COW_ADDR_LIFT_104570C0)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 == (CowU32)0x0) {
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A634));
        g->eax = (CowU32)(puVar1 + 8); return;
      default:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_100290BA), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570C4)), rd32(COW_IMG(COW_ADDR_LIFT_104570C8)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A5EC));
          g->eax = (CowU32)(puVar1 + 8); return;
        }
        break;
      case 5:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_100290E1), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570CC)), rd32(COW_IMG(COW_ADDR_LIFT_104570D0)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A61C));
          g->eax = (CowU32)(puVar1 + 8); return;
        }
        break;
      case 6:
        puVar1 = (CowU32)cow_bridge_10028930(g, COW_IMG(COW_ADDR_LIFT_10029109), 4u, (const CowU32[]){ 0x20, rd32(COW_IMG(COW_ADDR_LIFT_104570D4)), rd32(COW_IMG(COW_ADDR_LIFT_104570D8)), 0 }, g->ecx, g->edx, param_2, 16u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, COW_IMG(COW_ADDR_LIFT_1032A604));
          g->eax = (CowU32)(puVar1 + 8); return;
        }
      }
      cow_bridge_100182e0(g, COW_IMG(COW_ADDR_LIFT_10029124), 1u, (const CowU32[]){ 2002u }, g->ecx, g->edx, param_2, 4u);
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10028fd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_1;   /* 0x10028fd0: the value the entry loaded and the decompiler dropped */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_104570DC));   /* 0x10028fd4: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x10028fda: register edx, replayed as the entry ran it */
    g->eax = param_2;   /* 0x10028fdc: the value the entry loaded and the decompiler dropped */
    cow_lift_10028fd0(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
