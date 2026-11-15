/* f_0x101581e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101581e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101581e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101581F1), 4u, (const CowU32[]){ 0x3e, 0x30, 1, 0xffffffff }, param_1, g->edx, g->eax, 16u);
      if (cVar1 == '\x01') {
        cow_bridge_10157660(g, COW_IMG(COW_ADDR_LIFT_1015820D), 1u, (const CowU32[]){ (CowU32)((rd8((uint32_t)((int)param_1 + 0x5c)) & 3) == 0) }, param_1, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1015821A), 4u, (const CowU32[]){ 0x3e, 0x45, 1, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
      if (cVar1 == '\x01') {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0x50)) == '\0') {
          cow_bridge_10159420(g, COW_IMG(COW_ADDR_LIFT_10158230), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)((int)param_1 + 0x50), 1);
        }
        else {
          cow_bridge_10159420(g, COW_IMG(COW_ADDR_LIFT_1015823D), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)((int)param_1 + 0x50), 0);
        }
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) != 0) {
        cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_10158252), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar2 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1015825C), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (int32_t)rd32((uint32_t)(iVar2 + 0x70));
      }
      if ((((int32_t)rd32((uint32_t)((int)param_1 + 0xb8)) != 0) && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0xb8))))) != 0)) &&
         ((int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0xb8))))) + 0xa0)) == 0)) {
        wr8((uint32_t)((int)param_1 + 0x9c), 0);
        wr32((uint32_t)((int)param_1 + 0xb8), 0);
        wr32((uint32_t)((int)param_1 + 0xbc), 0);
        wr32((uint32_t)((int)param_1 + 0xc0), 0);
      }
      if (((iVar3 != 0) && ((int32_t)rd32((uint32_t)(iVar3 + 0x170)) == 1)) &&
         ((iVar3 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_101582BD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar3 == 0 && (iVar3 = cow_bridge_10157d60(g, COW_IMG(COW_ADDR_LIFT_101582C8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar3 != 0)))) {
        cow_bridge_10157c60(g, COW_IMG(COW_ADDR_LIFT_101582E1), 4u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x74)), rd32((uint32_t)(iVar3 + 0x78)), 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101581e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101581e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101581e1: push esi */
    cow_lift_101581e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
