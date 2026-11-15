/* f_0x101cd2d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cd2d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cd2d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = cow_bridge_101ceac0(g, COW_IMG(COW_ADDR_LIFT_101CD2E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x14)) - iVar1;
      iVar2 = cow_bridge_101ceae0(g, COW_IMG(COW_ADDR_LIFT_101CD2ED), 0u, (const CowU32[]){ 0u }, g->ebp, g->edx, g->eax, 0u);
      iVar2 = (int32_t)rd32((uint32_t)((int)param_1 + 0x1c)) - iVar2;
      iVar3 = iVar1;
      switch(param_3) {
      case 0:
      case 2:
        iVar3 = cow_bridge_101ceaf0(g, COW_IMG(COW_ADDR_LIFT_101CD30F), 0u, (const CowU32[]){ 0u }, g->ebp, g->edx, g->eax, 0u);
        iVar3 = iVar3 - iVar2;
        iVar2 = cow_bridge_101ceb40(g, COW_IMG(COW_ADDR_LIFT_101CD31C), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        break;
      case 1:
      case 3:
        iVar3 = cow_bridge_101ceaf0(g, COW_IMG(COW_ADDR_LIFT_101CD32F), 0u, (const CowU32[]){ 0u }, g->ebp, g->edx, g->eax, 0u);
        iVar3 = iVar3 - iVar2;
        iVar2 = cow_bridge_101ceb40(g, COW_IMG(COW_ADDR_LIFT_101CD33C), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        break;
      default:
        goto switchD_101cd2fb_default;
      }
      iVar3 = iVar3 - iVar2;
      iVar2 = iVar1;
    switchD_101cd2fb_default:
      iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + -1;
      wr32((uint32_t)((int)param_1 + 0x20), iVar1);
      if (iVar1 < 0) {
        wr32((uint32_t)((int)param_1 + 0x20), 3);
      }
      iVar1 = cow_bridge_101ceac0(g, COW_IMG(COW_ADDR_LIFT_101CD35B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x14), iVar1 + iVar3);
      iVar3 = cow_bridge_101ceae0(g, COW_IMG(COW_ADDR_LIFT_101CD367), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x1c), iVar3 + iVar2);
      cow_bridge_101cdf50(g, COW_IMG(COW_ADDR_LIFT_101CD377), 1u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x20)) }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101cdd90(g, COW_IMG(COW_ADDR_LIFT_101CD38F), 4u, (const CowU32[]){ (int)(int8_t)rd8((uint32_t)((int)param_1 + 6)), rd32((uint32_t)((int)param_1 + 0x14)), rd32((uint32_t)((int)param_1 + 0x18)), rd32((uint32_t)((int)param_1 + 0x1c)) }, param_1, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101cd2d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101cd2d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101cd2d1: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101cd2d2: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cd2d6: push esi */
    g->esi = g->ecx;   /* 0x101cd2d7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101cd2d9: push edi */
    g->ecx = g->ebp;   /* 0x101cd2da: the value the entry loaded and the decompiler dropped */
    cow_lift_101cd2d0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
