/* f_0x100b2dd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b2dd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b2dd0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    char cVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10488208)) == '\0') {
        wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 1);
        uVar1 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 0x260)) + 0x164));
        if ((uVar1 != 0) && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar1))) != 0)) {
          wr16((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar1))) + 0x14e), 0);
          if (((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(rd32((uint32_t)(param_1 + 0x260)) + 0x164))))) + 0x120)) >> 9
               & 1) != 0) &&
             (rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(rd32((uint32_t)(param_1 + 0x260)) + 0x164))))) + 0xa0)) != 0)) {
            cVar2 = cow_bridge_1002c8f0(g, COW_IMG(COW_ADDR_LIFT_100B2E78), 1u, (const CowU32[]){ 271781564u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar2 != '\0') {
              cow_bridge_100ce160(g, COW_IMG(COW_ADDR_LIFT_100B2E83), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            }
          }
        }
        wr16((uint32_t)(rd32((uint32_t)(param_1 + 0x260)) + 0x164), 0);
      }
      else {
        if (rd32(COW_IMG(COW_ADDR_LIFT_10488208)) == '\x01') {
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10488208)) == '\x02') {
          wr32(COW_IMG(COW_ADDR_LIFT_104804C2), 1);
          wr32(COW_IMG(COW_ADDR_LIFT_104808F0), 1);
          wr32(COW_IMG(COW_ADDR_LIFT_10487034), 1);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b2dd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10488208) + RD); g->eax = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x100b2dd0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b2dd7: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x100b2dd8: register eax, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x100b2ddb: the value the entry loaded and the decompiler dropped */
    cow_lift_100b2dd0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
