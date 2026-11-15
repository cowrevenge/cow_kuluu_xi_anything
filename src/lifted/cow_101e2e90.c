/* f_0x101e2e90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2e90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2e90(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 pvVar3;
    int iVar4;
    CowU32 uVar5;
    char cVar6;
    CowU32 psVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    CowU32 uVar10;
    iVar4 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101E2E9E), 0u, (const CowU32[]){ 0u }, g->ecx, param_2, g->eax, 0u);
      if ((char)param_3 != '\0') {
        uVar10 = 2;
        uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101E2EB6), 3u, (const CowU32[]){ 14u, 493u, 2u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101E2EC5), 1u, (const CowU32[]){ uVar10 }, uVar5, g->edx, g->eax, 0u);
      }
      iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0xc));
      if ((((iVar1 != 0) && (-1 < iVar4)) && (iVar4 < (int32_t)rd32((uint32_t)((int)param_1 + 4)))) &&
         (((char)param_3 != '\0' && (iVar2 = (int32_t)rd32((uint32_t)(iVar1 + 0x48 + iVar4 * 0x54)), iVar2 != 0)))) {
        cow_bridge_1013e260(g, COW_IMG(COW_ADDR_LIFT_101E2F03), 4u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar2 + 6))) & 0xffffu)), 0, 0, 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10578204)), g->edx, g->eax, 0u);
      }
      if ((int8_t)rd8((uint32_t)((int)param_1 + 0x10)) != '\0') {
        iVar4 = cow_bridge_101e1b10(g, COW_IMG(COW_ADDR_LIFT_101E2F18), 2u, (const CowU32[]){ 0, iVar4 }, rd32(COW_IMG(COW_ADDR_LIFT_106634B8)), g->edx, g->eax, 0u);
        if (iVar4 != 0) {
          cow_bridge_101e27d0(g, COW_IMG(COW_ADDR_LIFT_101E2F28), 1u, (const CowU32[]){ 275133652u }, g->ecx, g->edx, g->eax, 0u);
          uVar8 = cow_bridge_101e06c0(g, COW_IMG(COW_ADDR_LIFT_101E2F33), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cVar6 = '\x02';
          psVar7 = COW_IMG(COW_ADDR_LIFT_106634E2);
          uVar5 = g->ecx;
          do {
            uVar10 = (((uint32_t)((short)((uint64_t)uVar8 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)psVar7)) & 0xffffu));
            uVar9 = (((uint64_t)((int)((uint64_t)uVar8 >> 0x20)) & 0xffffffffu) << 32 | ((uint64_t)(uVar10) & 0xffffffffu));
            if (rd16((uint32_t)psVar7) != 0) {
              uVar9 = cow_bridge_101e0d90(g, COW_IMG(COW_ADDR_LIFT_101E2F5F), 4u, (const CowU32[]){ (((uint32_t)(((CowU32)uVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(cVar6 + -2) & 0xffu)), (((uint32_t)(((CowU32)uVar10 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)rd16((uint32_t)(psVar7 + 2u * (uint32_t)(-1)))) & 0xffu)), uVar10, (((uint32_t)(((uint64_t)uVar8 >> 0x28)) & 0xffffffu) << 8 | ((uint32_t)((char)rd16((uint32_t)(psVar7 + 2u * (uint32_t)(1)))) & 0xffu)) }, rd32(COW_IMG(COW_ADDR_LIFT_106634AC)), g->edx, g->eax, 0u);
              uVar5 = g->ecx;
            }
            uVar8 = uVar9;
            uVar10 = rd32(COW_IMG(COW_ADDR_LIFT_106634DC));
            pvVar3 = rd32(COW_IMG(COW_ADDR_LIFT_106634AC));
            psVar7 = psVar7 + 2u * (uint32_t)(3);
            cVar6 = cVar6 + '\x01';
          } while ((int)psVar7 < 0x10663512);
          wr8((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) + 0x14), rd32(COW_IMG(COW_ADDR_LIFT_106634DA)));
          wr16((uint32_t)((int)pvVar3 + 0x20), (short)uVar10);
          wr8((uint32_t)((int)param_1 + 0x10), 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2e90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e2e90: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e2e91: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e2e92: push edi */
    g->edi = g->ecx;   /* 0x101e2e93: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101e2e95: register ecx, replayed as the entry ran it */
    cow_lift_101e2e90(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
