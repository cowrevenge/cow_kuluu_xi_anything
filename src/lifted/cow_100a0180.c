/* f_0x100a0180 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a0180 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a0180(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    int64_t lVar9;
    CowU32 puStack_4;
    uVar4 = 0;
      puStack_4 = (CowU32)(param_3 + 0x10);
      puVar6 = (CowU32)(param_3 + 0x70);
      puVar5 = (CowU32)(param_3 + 8);
      do {
        cVar1 = (int8_t)rd8((uint32_t)(param_3 + 4 + uVar4));
        if (cVar1 == -2) {
          lVar9 = cow_bridge_10093b50(g, COW_IMG(COW_ADDR_LIFT_100A01A5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          lVar9 = (uint64_t)uVar4 << 0x20;
          if ((-1 < cVar1) && (lVar9 = (uint64_t)uVar4 << 0x20, cVar1 < '\x10')) {
            iVar2 = (int)cVar1;
            lVar9 = (((uint64_t)(uVar4) & 0xffffffffu) << 32 | ((uint64_t)(iVar2 * 0x20) & 0xffffffffu));
            wr16((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488B08) + iVar2 * 8), rd16((uint32_t)puVar5));
            puVar7 = puStack_4;
            puVar8 = COW_IMG(COW_ADDR_LIFT_10488B0C) + iVar2 * 8;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              wr32((uint32_t)puVar8, rd32((uint32_t)puVar7));
              puVar7 = puVar7 + 4u * (uint32_t)(1);
              puVar8 = puVar8 + 4u * (uint32_t)(1);
            }
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488B24) + iVar2 * 0x20), rd32((uint32_t)puVar6));
          }
        }
        uVar4 = (int)((uint64_t)lVar9 >> 0x20) + 1;
        puVar5 = puVar5 + 2u * (uint32_t)(1);
        puVar6 = puVar6 + 4u * (uint32_t)(1);
        puStack_4 = puStack_4 + 4u * (uint32_t)(6);
      } while ((int)uVar4 < 4);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a0180(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100a0180: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a0181: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100a0182: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a0183: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x100a0184: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a0188: push edi */
    g->edx = 0u;   /* 0x100a0189: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0x10u)); }   /* 0x100a018b: register eax, replayed as the entry ran it */
    { g->ebp = (uint32_t)((uint32_t)(g->esi + 0x70u)); }   /* 0x100a018e: register ebp, replayed as the entry ran it */
    cow_lift_100a0180(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
