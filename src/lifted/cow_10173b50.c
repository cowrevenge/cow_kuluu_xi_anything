/* f_0x10173b50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10173b50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10173b50(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    CowU32 pcVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    int iVar6;
    CowU32 puVar7;
    int iVar8;
    iVar8 = 0;
      for (puVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10621A08)); puVar1 != (CowU32)0x0; puVar1 = (CowU32)rd32((uint32_t)puVar1)) {
        iVar6 = rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2)));
        if (0 < iVar6) {
          pcVar3 = (CowU32)(rd32((uint32_t)(puVar1 + 4u * (uint32_t)(1))) + 100);
          do {
            if (((rd8((uint32_t)pcVar3) == 'Z') || (rd8((uint32_t)pcVar3) == 'z')) && ((int32_t)rd32((uint32_t)(pcVar3 + 4)) != 0)) {
              iVar8 = iVar8 + 1;
            }
            pcVar3 = pcVar3 + 0x40;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      wr32((uint32_t)(param_1 + 0xc), 0);
      wr32((uint32_t)(param_1 + 0x10), iVar8);
      if (iVar8 != 0) {
        puVar4 = (CowU32)cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_10173BAD), 2u, (const CowU32[]){ iVar8 << 6, 4 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0xc), puVar4);
        for (puVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10621A08)); puVar1 != (CowU32)0x0; puVar1 = (CowU32)rd32((uint32_t)puVar1)) {
          iVar8 = 0;
          puVar5 = puVar4;
          puVar2 = (CowU32)rd32((uint32_t)(puVar1 + 4u * (uint32_t)(1)));
          if (0 < (int)rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2)))) {
            do {
              puVar4 = puVar5;
              if ((((int8_t)rd8((uint32_t)(puVar2 + 4u * (uint32_t)(0x19))) == 'Z') || ((int8_t)rd8((uint32_t)(puVar2 + 4u * (uint32_t)(0x19))) == 'z')) &&
                 (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(0x1a))) != 0)) {
                puVar4 = puVar5 + 4u * (uint32_t)(0x10);
                puVar7 = puVar2 + 4u * (uint32_t)(0x10);
                for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                  wr32((uint32_t)puVar5, rd32((uint32_t)puVar7));
                  puVar7 = puVar7 + 4u * (uint32_t)(1);
                  puVar5 = puVar5 + 4u * (uint32_t)(1);
                }
              }
              iVar8 = iVar8 + 1;
              puVar5 = puVar4;
              puVar2 = puVar2 + 4u * (uint32_t)(0x10);
            } while (iVar8 < (int)rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2))));
          }
        }
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
void cow_adapter_10173b50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_10621A08));   /* 0x10173b50: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10173b56: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10173b57: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10173b58: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10173b59: push edi */
    g->edi = 0u;   /* 0x10173b5a: the value the entry loaded and the decompiler dropped */
    cow_lift_10173b50(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
