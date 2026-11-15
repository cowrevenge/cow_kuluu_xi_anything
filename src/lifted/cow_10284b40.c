/* f_0x10284b40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10284b40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10284b40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8), param_1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa24 + iVar2 * 8), param_2);
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) != 0) goto L_10284bd3;
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20)) & 0x4000) == 0) {
        if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20)) & 0x8000) == 0) {
          uVar4 = 1;
          goto L_10284bb9;
        }
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10284BB5), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x16, 2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
      }
      else {
        uVar4 = 3;
    L_10284bb9:
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10284BC9), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x16, uVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
      }
      cow_bridge_10284ed0(g, COW_IMG(COW_ADDR_LIFT_10284BCE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
    L_10284bd3:
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 4), 1);
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      uVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8));
      if (((uVar3 & 0x400000) != 0) || ((uVar3 & 0x8000000) != 0)) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 8);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 1) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 8);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 4) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 4);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 2) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 2);
      }
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 8)) & 0x40) != 0) {
        cow_bridge_10281ca0(g, COW_IMG(COW_ADDR_LIFT_10284CD7), 1u, (const CowU32[]){ 1u }, g->ecx, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        cow_bridge_10281c70(g, COW_IMG(COW_ADDR_LIFT_10284CDE), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 4);
        wr32((uint32_t)puVar1, rd32((uint32_t)puVar1) | 2);
      }
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 8)) & 0x20000000) != 0) {
        cow_bridge_10281ca0(g, COW_IMG(COW_ADDR_LIFT_10284D1F), 1u, (const CowU32[]){ 1u }, g->ecx, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        cow_bridge_10281c70(g, COW_IMG(COW_ADDR_LIFT_10284D26), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 4);
        wr32((uint32_t)puVar1, rd32((uint32_t)puVar1) | 4);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 0x40000000) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 2);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 0x20) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 6);
      }
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 8)) & 8) != 0) {
        cow_bridge_10281c70(g, COW_IMG(COW_ADDR_LIFT_10284DBE), 1u, (const CowU32[]){ 1u }, g->ecx, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        cow_bridge_10281ca0(g, COW_IMG(COW_ADDR_LIFT_10284DC5), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 4);
        wr32((uint32_t)puVar1, rd32((uint32_t)puVar1) | 4);
      }
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 8)) & 0x100000) != 0) {
        cow_bridge_10281ca0(g, COW_IMG(COW_ADDR_LIFT_10284E06), 1u, (const CowU32[]){ 1u }, g->ecx, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) * 4);
        wr32((uint32_t)puVar1, rd32((uint32_t)puVar1) | 0xe);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 0x40000) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 8);
      }
      iVar2 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18));
      if ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa20 + iVar2 * 8)) & 0x10) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34 + iVar2 * 4)) | 0xc);
        cow_bridge_10281c70(g, COW_IMG(COW_ADDR_LIFT_10284E82), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        cow_bridge_10281ca0(g, COW_IMG(COW_ADDR_LIFT_10284E89), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
      }
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)) == 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa30), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34)));
        wr32(COW_IMG(COW_ADDR_LIFT_109A2740), 1);
        return;
      }
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa30), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa38)) | rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34)));
      wr32(COW_IMG(COW_ADDR_LIFT_109A2740), 1);
      return;
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
void cow_adapter_10284b40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D200));   /* 0x10284b40: the value the entry loaded and the decompiler dropped */
    g->edx = param_1;   /* 0x10284b45: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0xB18u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10284b49: register ecx, replayed as the entry ran it */
    cow_lift_10284b40(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
