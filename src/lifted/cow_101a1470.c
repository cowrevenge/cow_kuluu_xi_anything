/* f_0x101a1470 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a1470 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a1470(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_101A148A), 3u, (const CowU32[]){ (int)param_1 + 0x9b, (CowU32)((int)param_1 + 4), 0x54f }, param_1, g->edx, (g->ebx + 155u), 0u);
      cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_101A149F), 3u, (const CowU32[]){ (int)param_1 + 0x5f0, (CowU32)((int)param_1 + 0x5ec), 0x24 }, (g->ebx + 1520u), g->edx, g->eax, 0u);
      if (0x96 < (int)param_3) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      puVar2 = (CowU32)((int)param_1 + 4);
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr32((uint32_t)puVar2, rd32((uint32_t)param_2));
        param_2 = param_2 + 4u * (uint32_t)(1);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr8((uint32_t)puVar2, rd8((uint32_t)param_2));
        param_2 = (CowU32)((int)param_2 + 1);
        puVar2 = (CowU32)((int)puVar2 + 1);
      }
      wr8((uint32_t)(param_3 + 4 + (int)param_1), 0);
      wr32((uint32_t)((int)param_1 + 0x5ec), param_3);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x614)) < 9) {
        wr32((uint32_t)((int)param_1 + 0x614), (int32_t)rd32((uint32_t)((int)param_1 + 0x614)) + 1);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a1470(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101a1470: push ebx */
    g->ebx = g->ecx;   /* 0x101a1471: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101a1473: push ebp */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101a1474: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->ebx + 0x4u)); }   /* 0x101a1475: register edi, replayed as the entry ran it */
    cow_lift_101a1470(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
