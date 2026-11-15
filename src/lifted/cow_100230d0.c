/* f_0x100230d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100230d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100230d0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    int iVar3;
    CowU32 puVar4;
    sVar2 = 0;
      cVar1 = cow_bridge_10022fd0(g, COW_IMG(COW_ADDR_LIFT_100230F6), 2u, (const CowU32[]){ param_3, (CowU32)rd16((uint32_t)param_2) }, param_1, g->edx, 0u, 0u);
      iVar3 = param_3;
      if (cVar1 != '\0') {
        wr32((uint32_t)(param_3 + 0x18), rd32((uint32_t)(param_2 + 2u * (uint32_t)(3))));
        wr32((uint32_t)(param_3 + 0x1c), rd32((uint32_t)(param_2 + 2u * (uint32_t)(5))));
        cVar1 = cow_bridge_10022fd0(g, COW_IMG(COW_ADDR_LIFT_1002311A), 2u, (const CowU32[]){ param_3 + 0x20, (CowU32)rd16((uint32_t)(param_2 + 2u * (uint32_t)(1))) }, g->ecx, (g->esi + 32u), 0u, 0u);
        if (cVar1 != '\0') {
          wr32((uint32_t)(param_3 + 0x38), rd32((uint32_t)(param_2 + 2u * (uint32_t)(7))));
          wr32((uint32_t)(param_3 + 0x3c), rd32((uint32_t)(param_2 + 2u * (uint32_t)(9))));
          cVar1 = cow_bridge_10022fd0(g, COW_IMG(COW_ADDR_LIFT_1002313E), 2u, (const CowU32[]){ param_3 + 0x40, (CowU32)rd16((uint32_t)(param_2 + 2u * (uint32_t)(2))) }, g->ecx, (g->esi + 64u), 0u, 0u);
          if (cVar1 != '\0') {
            iVar3 = param_3 + 0x60;
            wr32((uint32_t)(param_3 + 0x58), rd32((uint32_t)(param_2 + 2u * (uint32_t)(0xb))));
            wr32((uint32_t)(param_3 + 0x5c), rd32((uint32_t)(param_2 + 2u * (uint32_t)(0xd))));
            sVar2 = 3;
          }
        }
      }
      if (1 < param_1) {
        puVar4 = param_2 + 2u * (uint32_t)(0x12);
        param_2 = (CowU32)(param_1 - 1);
        do {
          cVar1 = cow_bridge_10022fd0(g, COW_IMG(COW_ADDR_LIFT_10023180), 2u, (const CowU32[]){ iVar3, (CowU32)rd16((uint32_t)(puVar4 + 2u * (uint32_t)(-3))) }, g->ecx, g->edx, 0u, 0u);
          if (cVar1 != '\0') {
            wr32((uint32_t)(iVar3 + 0x18), rd32((uint32_t)(puVar4 + 2u * (uint32_t)(-2))));
            wr32((uint32_t)(iVar3 + 0x1c), rd32((uint32_t)puVar4));
            iVar3 = iVar3 + 0x20;
            sVar2 = sVar2 + 1;
          }
          puVar4 = puVar4 + 2u * (uint32_t)(5);
          param_2 = (CowU32)((int)param_2 + -1);
        } while (param_2 != (CowU32)0x0);
      }
      g->eax = (CowU32)(sVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100230d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100230d0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100230d1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100230d2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100230d3: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100230d7: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100230d8: register edi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x100230dc: the value the entry loaded and the decompiler dropped */
    cow_lift_100230d0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
