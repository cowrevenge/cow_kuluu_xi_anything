/* f_0x10205890 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10205890 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10205890(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 piVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU16 extraout_var;
    piVar2 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_1020589C), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_102058A5), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x138));
        wr8((uint32_t)(param_1 + 0x2c), 0);
      }
      else {
        uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x404));
        wr8((uint32_t)(param_1 + 0x2c), 1);
      }
      cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_102058D2), 2u, (const CowU32[]){ 1, uVar3 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)(param_1 + 0x2e)) == '\0') {
        cVar1 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_102058EC), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x768));
          wr8((uint32_t)(param_1 + 0x2d), 0);
        }
        else {
          uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x790));
          wr8((uint32_t)(param_1 + 0x2d), 1);
        }
      }
      else {
        uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x794));
        wr8((uint32_t)(param_1 + 0x2d), 1);
      }
      cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10205917), 2u, (const CowU32[]){ 3, uVar3 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
      cVar1 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_1020591E), 1u, (const CowU32[]){ 11u }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0xc28));
        wr8((uint32_t)(param_1 + 0x2f), 0);
      }
      else {
        uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0xc30));
        wr8((uint32_t)(param_1 + 0x2f), 1);
      }
      cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10205949), 2u, (const CowU32[]){ 5, uVar3 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
        uVar4 = cow_bridge_101070f0(g, COW_IMG(COW_ADDR_LIFT_1020595F), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 4u);
        if ((uVar4 & 8) == 0) {
          iVar5 = cow_bridge_10118bc0(g, COW_IMG(COW_ADDR_LIFT_10205970), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar5 != 5) {
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10205981), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr8((uint32_t)(param_1 + 0x2e), 1);
          return;
        }
      }
      wr8((uint32_t)(param_1 + 0x2e), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10205890(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10205890: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10205891: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10205892: push edi */
    cow_lift_10205890(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
