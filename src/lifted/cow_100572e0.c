/* f_0x100572e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100572e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100572e0(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    CowU32 puVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    cow_bridge_10074740(g, COW_IMG(COW_ADDR_LIFT_100572EB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      this_00 = (CowU32)((int)param_1 + 0x34);
      cow_bridge_1003b540(g, COW_IMG(COW_ADDR_LIFT_100572F5), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
      cow_bridge_10055640(g, COW_IMG(COW_ADDR_LIFT_10057300), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0xb4), g->edx, g->eax, 0u);
      puVar1 = (CowU32)((int)param_1 + 0xc0);
      iVar4 = 0x10;
      do {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 4u * (uint32_t)(2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032B860));
      wr32((uint32_t)this_00, COW_IMG(COW_ADDR_LIFT_1032B844));
      cow_bridge_100573b0(g, COW_IMG(COW_ADDR_LIFT_1005732A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (rd32((uint32_t)(param_2 + 0x80)) == (CowU32)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = rd32((uint32_t)rd32((uint32_t)((param_2 + 0x80))));
      }
      cow_bridge_100573e0(g, COW_IMG(COW_ADDR_LIFT_1005734F), 3u, (const CowU32[]){ uVar2, 0, rd32((uint32_t)(param_2 + 0x90)) }, param_1, g->edx, g->eax, 0u);
      uVar2 = cow_bridge_100627d0(g, COW_IMG(COW_ADDR_LIFT_10057356), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_10062770(g, COW_IMG(COW_ADDR_LIFT_1005735F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1003b7b0(g, COW_IMG(COW_ADDR_LIFT_10057367), 1u, (const CowU32[]){ uVar3 }, this_00, g->edx, g->eax, 0u);
      cow_bridge_1003b830(g, COW_IMG(COW_ADDR_LIFT_1005736F), 1u, (const CowU32[]){ uVar2 }, this_00, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0x144), rd8((uint32_t)(param_2 + 0x144)));
      if ((int8_t)rd8((uint32_t)(param_2 + 0x142)) != '\0') {
        wr32((uint32_t)((int)param_1 + 0x9c), rd32((uint32_t)(param_2 + 0x9c)));
        wr8((uint32_t)((int)param_1 + 0x142), 1);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100572e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100572e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100572e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100572e2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100572e3: push edi */
    g->esi = g->ecx;   /* 0x100572e4: the value the entry loaded and the decompiler dropped */
    cow_lift_100572e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
