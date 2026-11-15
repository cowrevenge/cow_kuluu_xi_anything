/* f_0x10222e20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10222e20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10222e20(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 puVar6;
    int iVar7;
    int iVar8;
    CowU32 local_c;
    CowU32 local_8;
    int local_4;
    puVar6 = (CowU32)0x0;
      local_c = 0xffffffff;
      local_8 = (CowU32)0x0;
      if (((param_1 != (CowU32)0x0) && (rd8((uint32_t)param_1) != '\0')) && (rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) != 0)) {
        local_4 = 0x200;
        iVar7 = 0x6000;
        do {
          puVar6 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) + iVar7);
          if (((param_4 == '\0') || ((char)rd16((uint32_t)(puVar6 + 2u * (uint32_t)(7))) == '\0')) &&
             ((uVar1 = rd16((uint32_t)puVar6), uVar1 != 0 && ((param_5 == '\0' || (param_5 == (char)rd16((uint32_t)(puVar6 + 2u * (uint32_t)(1))))))))) {
            iVar5 = local_4;
            cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10222E99), 1u, (const CowU32[]){ local_4 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = cow_bridge_10223a90(g, COW_IMG(COW_ADDR_LIFT_10222EA0), 0u, (const CowU32[]){ 0u }, iVar5, g->edx, g->eax, 0u);
            iVar5 = local_4;
            cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10222EA7), 2u, (const CowU32[]){ local_4, uVar3 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = cow_bridge_10223b10(g, COW_IMG(COW_ADDR_LIFT_10222EAE), 0u, (const CowU32[]){ 0u }, iVar5, g->edx, g->eax, 0u);
            cVar2 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_10222EBA), 2u, (const CowU32[]){ param_1, uVar3 }, g->ecx, g->edx, g->eax, 12u);
            if (cVar2 != '\0') {
              local_c = (CowU32)uVar1;
              local_8 = puVar6;
              break;
            }
          }
          iVar7 = iVar7 + 0x30;
          local_4 = local_4 + 1;
        } while (iVar7 < 0xc000);
        iVar7 = 0xc000;
        local_4 = 0x400;
        do {
          uVar1 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) + iVar7));
          puVar6 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) + iVar7);
          if ((uVar1 != 0) && ((param_5 == '\0' || (param_5 == (char)rd16((uint32_t)(puVar6 + 2u * (uint32_t)(1))))))) {
            iVar5 = local_4;
            cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10222F13), 1u, (const CowU32[]){ local_4 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = cow_bridge_10223a90(g, COW_IMG(COW_ADDR_LIFT_10222F1A), 0u, (const CowU32[]){ 0u }, iVar5, g->edx, g->eax, 0u);
            iVar5 = local_4;
            cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10222F21), 2u, (const CowU32[]){ local_4, uVar3 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = cow_bridge_10223b10(g, COW_IMG(COW_ADDR_LIFT_10222F28), 0u, (const CowU32[]){ 0u }, iVar5, g->edx, g->eax, 0u);
            cVar2 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_10222F34), 2u, (const CowU32[]){ param_1, uVar3 }, g->ecx, g->edx, g->eax, 12u);
            if (cVar2 != '\0') {
              local_c = (CowU32)uVar1;
              local_8 = puVar6;
              break;
            }
          }
          iVar7 = iVar7 + 0x30;
          local_4 = local_4 + 1;
        } while (iVar7 < 0x12000);
        puVar6 = local_8;
        if (local_c == 0) {
          local_c = 0xffffffff;
        }
      }
      if (((param_2 != '\0') && (puVar6 != (CowU32)0x0)) &&
         (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10386158) + 4u * (uint32_t)((CowU32)(CowU8)rd16((uint32_t)(puVar6 + 2u * (uint32_t)(1))) * 3))) == '\0')) {
        local_c = 0xffffffff;
        puVar6 = (CowU32)0x0;
      }
      if (param_3 == '\0') {
        g->eax = (CowU32)(local_c); return;
      }
      if (puVar6 == (CowU32)0x0) {
        g->eax = (CowU32)(local_c); return;
      }
      iVar5 = 0;
      cow_bridge_10223c90(g, COW_IMG(COW_ADDR_LIFT_10222FBE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar8 = 0;
      iVar7 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x1760));
      if (0 < iVar7) {
        puVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x160);
        do {
          if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10386158) + 4u * (uint32_t)((CowU32)(CowU8)rd16((uint32_t)(puVar6 + 2u * (uint32_t)(1))) * 3))) != '\0') {
            iVar5 = iVar5 + 1;
          }
          if (rd16((uint32_t)puVar4) == local_c) break;
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2u * (uint32_t)(1);
        } while (iVar8 < iVar7);
        if (iVar5 != 0) goto L_10223026;
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) != 0) && (iVar5 = cow_bridge_101cc510(g, COW_IMG(COW_ADDR_LIFT_1022300F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar5 != 0)) {
        cow_bridge_100fc9c0(g, COW_IMG(COW_ADDR_LIFT_10223023), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)), 1, 0 }, g->ecx, g->edx, g->eax, 12u);
      }
    L_10223026:
      if (iVar8 < iVar7) {
        g->eax = (CowU32)(local_c); return;
      }
      g->eax = (CowU32)(0xfffffffe); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10222e20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 0xcu;                      /* 0x10222e20: 12 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10222e23: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10222e27: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10222e28: push ebp */
    g->ebp = 0u;   /* 0x10222e29: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10222e2b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10222e2c: push edi */
    cow_lift_10222e20(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
