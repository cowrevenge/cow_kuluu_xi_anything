/* f_0x10196090 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10196090 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10196090(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    iVar3 = 0x4a4;
      do {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar3;
        if ((int32_t)rd32((uint32_t)(iVar2 + 4)) == 0x43) {
          uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_101960B4), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          uVar1 = rd32((uint32_t)(iVar2 + 0x20));
        }
        wr32((uint32_t)(iVar2 + 8), uVar1);
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x24)) != 0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_101960D2), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 4)), uVar1 }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar3 = iVar3 + 0x2c;
      } while (iVar3 < 0x86d);
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1aa8)) == 0x43) {
        uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_101960F5), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar3 + 0x1aac), uVar1);
      }
      else {
        wr32((uint32_t)(iVar3 + 0x1aac), rd32((uint32_t)(iVar3 + 0x1ac4)));
      }
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1ac8)) != 0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10196117), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x1aa8)), rd32((uint32_t)(iVar3 + 0x1aac)) }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1e44)) == 0x43) {
        uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_1019612F), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar3 + 0x1e48), uVar1);
      }
      else {
        wr32((uint32_t)(iVar3 + 0x1e48), rd32((uint32_t)(iVar3 + 0x1e60)));
      }
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1e64)) != 0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10196151), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x1e44)), rd32((uint32_t)(iVar3 + 0x1e48)) }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1ec8)) == 0x43) {
        uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10196169), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar3 + 0x1ecc), uVar1);
      }
      else {
        wr32((uint32_t)(iVar3 + 0x1ecc), rd32((uint32_t)(iVar3 + 0x1ee4)));
      }
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x1ee8)) != 0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_1019618B), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x1ec8)), rd32((uint32_t)(iVar3 + 0x1ecc)) }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x22e8)) == 0x43) {
        uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_101961A3), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar3 + 0x22ec), uVar1);
      }
      else {
        wr32((uint32_t)(iVar3 + 0x22ec), rd32((uint32_t)(iVar3 + 0x2304)));
      }
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x2308)) != 0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_101961C5), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x22e8)), rd32((uint32_t)(iVar3 + 0x22ec)) }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x2314)) == 0x43) {
        uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_101961DD), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar3 + 0x2318), uVar1);
      }
      else {
        wr32((uint32_t)(iVar3 + 0x2318), rd32((uint32_t)(iVar3 + 0x2330)));
      }
      if ((int32_t)rd32((uint32_t)(iVar3 + 0x2334)) != 0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_101961FF), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x2314)), rd32((uint32_t)(iVar3 + 0x2318)) }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10196090(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10196090: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10196091: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10196092: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10196093: push edi */
    g->ebx = g->ecx;   /* 0x10196094: the value the entry loaded and the decompiler dropped */
    g->edi = 1188u;   /* 0x10196096: the value the entry loaded and the decompiler dropped */
    cow_lift_10196090(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
