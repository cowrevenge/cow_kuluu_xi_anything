/* f_0x101c8950 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c8950 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c8950(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    puVar1 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101C8959), 2u, (const CowU32[]){ 12u, 91u }, g->ecx, param_1, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10662F64), rd8((uint32_t)puVar1));
      iVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar3 == 2 || (iVar3 == 3)))) || (iVar3 == 1)) {
        wr32(COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_101C8B80));
      }
      else if ((iVar3 < 2) || (3 < iVar3)) {
        wr32(COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_101C8B30));
      }
      else {
        wr32(COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_101C8BC0));
      }
      puVar4 = COW_IMG(COW_ADDR_LIFT_10662E50);
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar4, 0);
        puVar4 = puVar4 + 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10662E50), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C89C9), 2u, (const CowU32[]){ 272027420u, 275131984u }, 273554424u, g->edx, 0u, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E54), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C89DD), 1u, (const CowU32[]){ 272039860u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E58), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C89F1), 1u, (const CowU32[]){ 272039880u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E5C), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A05), 1u, (const CowU32[]){ 272094376u }, 273554424u, g->edx, g->eax, 0u));
      uVar2 = cow_bridge_1025b5c0(g, COW_IMG(COW_ADDR_LIFT_101C8A11), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
      wr32(COW_IMG(COW_ADDR_LIFT_10662E60), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A1F), 1u, (const CowU32[]){ uVar2 }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E64), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A33), 1u, (const CowU32[]){ 272094356u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E68), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A47), 1u, (const CowU32[]){ 272094336u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E6C), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A5B), 1u, (const CowU32[]){ 272094316u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E74), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A6F), 1u, (const CowU32[]){ 272094296u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E78), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A83), 1u, (const CowU32[]){ 272094276u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E7C), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8A97), 1u, (const CowU32[]){ 272094256u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E80), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8AAB), 1u, (const CowU32[]){ 272094236u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E84), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8ABF), 1u, (const CowU32[]){ 272094216u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E70), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8AD3), 1u, (const CowU32[]){ 272094196u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E88), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8AE7), 1u, (const CowU32[]){ 272025996u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E8C), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8AFB), 1u, (const CowU32[]){ 272071868u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E90), cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101C8B0F), 1u, (const CowU32[]){ 272094176u }, 273554424u, g->edx, g->eax, 0u));
      wr32(COW_IMG(COW_ADDR_LIFT_10662E94), cow_bridge_101cc620(g, COW_IMG(COW_ADDR_LIFT_101C8B20), 2u, (const CowU32[]){ 92u, 275132184u }, g->ecx, g->edx, g->eax, 8u));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c8950(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */

    cow_lift_101c8950(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
