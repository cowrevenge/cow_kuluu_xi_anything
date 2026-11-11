/* f_0x10112e20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10112e20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10112e20(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    uVar5 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23e))) - rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23f)));
      if ((int)uVar5 < 1) {
        g->eax = (CowU32)(2); return;
      }
      if (0x800 < uVar5) {
        uVar5 = 0x800;
      }
      uVar4 = param_3 & 0xffff;
      if ((int)uVar4 < (int)uVar5) {
        uVar5 = uVar4;
      }
      pcVar1 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x240)));
      if (param_2 != '\0') {
        if ((pcVar1 == (CowU32)0x0) || (rd8((uint32_t)pcVar1) == '\0')) {
          cVar2 = cow_bridge_101c4a10(g, COW_IMG(COW_ADDR_LIFT_10112EE1), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23d))), 0, 0 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 != '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
          }
        }
        else {
          cVar2 = cow_bridge_101c4a40(g, COW_IMG(COW_ADDR_LIFT_10112E88), 2u, (const CowU32[]){ pcVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 != '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
          }
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x201)), uVar5);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x23f)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23f))) + uVar5);
        puVar6 = COW_IMG(COW_ADDR_LIFT_104E0F08);
        for (uVar4 = uVar4 >> 2; param_1 = param_1 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
          wr32((uint32_t)param_1, rd32((uint32_t)puVar6));
          puVar6 = puVar6 + 1;
        }
        for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
          wr8((uint32_t)param_1, rd8((uint32_t)puVar6));
          puVar6 = (CowU32)((int)puVar6 + 1);
          param_1 = (CowU32)((int)param_1 + 1);
        }
        g->eax = (CowU32)(1); return;
      }
      if ((pcVar1 == (CowU32)0x0) || (rd8((uint32_t)pcVar1) == '\0')) {
        cVar2 = cow_bridge_101c4a10(g, COW_IMG(COW_ADDR_LIFT_10112F57), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23d))), 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          g->eax = (CowU32)(3); return;
        }
        iVar3 = cow_bridge_101c46d0(g, COW_IMG(COW_ADDR_LIFT_10112F0F), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23d))), COW_IMG(COW_ADDR_LIFT_104E0F08), uVar5, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23f))) }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 < 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(3) & 0xffu)); return;
        }
      }
      else {
        cVar2 = cow_bridge_101c4a40(g, COW_IMG(COW_ADDR_LIFT_10112F35), 2u, (const CowU32[]){ pcVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          g->eax = (CowU32)(3); return;
        }
        iVar3 = cow_bridge_101c46f0(g, COW_IMG(COW_ADDR_LIFT_10112EB8), 5u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x240))), COW_IMG(COW_ADDR_LIFT_104E0F08), uVar5, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23f))), 0 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 < 0) {
          g->eax = (CowU32)(3); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10112e20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10112e20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10112e21: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10112e22: push edi */
    g->edi = g->ecx;   /* 0x10112e23: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x8F8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10112e25: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x8FCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10112e2b: register ecx, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a - b); g->esi = (uint32_t)(r); }   /* 0x10112e31: register esi, replayed as the entry ran it */
    cow_lift_10112e20(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
