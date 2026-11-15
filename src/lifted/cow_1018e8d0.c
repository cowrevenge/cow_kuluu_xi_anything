/* f_0x1018e8d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018e8d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018e8d0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this;
    int iVar1;
    CowU8 local_100[256];
    if (rd8((uint32_t)(param_1 + 0x54)) < 0x14) {
        cow_bridge_1018e170(g, COW_IMG(COW_ADDR_LIFT_1018E904), 3u, (const CowU32[]){ local_100, rd32((uint32_t)(param_1 + 0x5c)), ((int32_t)rd32((uint32_t)(param_1 + 0x58)) + (CowU32)rd8((uint32_t)(param_1 + 0x54))) % 0x14 }, g->ecx, g->edx, g->eax, 12u);
        cow_bridge_1018e310(g, COW_IMG(COW_ADDR_LIFT_1018E918), 1u, (const CowU32[]){ local_100 }, param_2, g->edx, g->eax, 0u);
        wr8((uint32_t)(param_1 + 0x54), (int8_t)rd8((uint32_t)(param_1 + 0x54)) + '\x01');
        g->eax = (CowU32)(0); return;
      }
      this = rd32((uint32_t)(param_1 + 4));
      if (this != (CowU32)0x0) {
        cow_bridge_1018e0e0(g, COW_IMG(COW_ADDR_LIFT_1018E93F), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1018E945), 1u, (const CowU32[]){ this }, g->ecx, g->edx, g->eax, 4u);
      }
      cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_1018E954), 3u, (const CowU32[]){ param_1 + 4, param_1 + 8, 0x4c }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x58));
      wr32((uint32_t)(param_1 + 0x50), 0);
      wr32((uint32_t)(param_1 + 0x58), iVar1 + 1);
      cow_bridge_1018e170(g, COW_IMG(COW_ADDR_LIFT_1018E97F), 3u, (const CowU32[]){ local_100, rd32((uint32_t)(param_1 + 0x5c)), (iVar1 + 0x14U) % 0x14 }, g->ecx, g->edx, g->eax, 24u);
      cow_bridge_1018e310(g, COW_IMG(COW_ADDR_LIFT_1018E993), 1u, (const CowU32[]){ local_100 }, param_2, g->edx, g->eax, 0u);
      g->eax = (CowU32)(0x32); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 256 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018e8d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x100u;                      /* 0x1018e8d0: 256 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018e8d6: push esi */
    g->esi = g->ecx;   /* 0x1018e8d7: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x54u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1018e8d9: register ecx, replayed as the entry ran it */
    cow_lift_1018e8d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
