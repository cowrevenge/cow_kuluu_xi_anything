/* f_0x101f3c60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f3c60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f3c60(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    int iVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0) {
        return;
      }
      cVar1 = cow_bridge_100ec470(g, COW_IMG(COW_ADDR_LIFT_101F3C75), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3C85), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3C92), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E44))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3CA5), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      iVar3 = cow_bridge_100f97a0(g, COW_IMG(COW_ADDR_LIFT_101F3CB1), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (iVar3 == 0) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3CC4), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3CD1), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E50))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3CE4), 2u, (const CowU32[]){ 5u, 10u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3CF1), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E54))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3D04), 2u, (const CowU32[]){ 5u, 11u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3D11), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E58))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3D24), 2u, (const CowU32[]){ 5u, 12u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3D31), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E5C))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3D44), 2u, (const CowU32[]){ 5u, 13u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3D51), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E60))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3D64), 2u, (const CowU32[]){ 5u, 14u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3D71), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E64))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3D84), 2u, (const CowU32[]){ 5u, 15u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F3D91), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E68))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3DA4), 2u, (const CowU32[]){ 5u, 16u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cVar1 = cow_bridge_101cc470(g, COW_IMG(COW_ADDR_LIFT_101F3DAB), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3DBE), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663468)) + 0x70)) == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3DD6), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3DE2), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3DEE), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      else if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663468)) + 0x71)) != '\x01') goto L_101f3e02;
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3E02), 2u, (const CowU32[]){ 5u, 4u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
    L_101f3e02:
      sVar2 = cow_bridge_101f4060(g, COW_IMG(COW_ADDR_LIFT_101F3E14), 1u, (const CowU32[]){ rd32((uint32_t)rd32((uint32_t)((rd32(COW_IMG(COW_ADDR_LIFT_10663468)) + 0x5c)))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      if (sVar2 != 0x11) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3E28), 2u, (const CowU32[]){ 5, (int)sVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      sVar2 = cow_bridge_101f4060(g, COW_IMG(COW_ADDR_LIFT_101F3E38), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 100)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      if (sVar2 != 0x11) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F3E4C), 2u, (const CowU32[]){ 5, (int)sVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f3c60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x101f3c60: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f3c65: push esi */
    cow_lift_101f3c60(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
