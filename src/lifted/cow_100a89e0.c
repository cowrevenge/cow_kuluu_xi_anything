/* f_0x100a89e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a89e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a89e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 pvVar2;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 puVar6;
    cow_bridge_10081cf0(g, COW_IMG(COW_ADDR_LIFT_100A89EA), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032E3C8));
      cow_bridge_100814a0(g, COW_IMG(COW_ADDR_LIFT_100A89FD), 0u, (const CowU32[]){ 0u }, (g->esi + 1440u), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032DFC8));
      wr32((uint32_t)((int)param_1 + 0xf4), 0);
      wr32((uint32_t)((int)param_1 + 0xe0), 0x3f800000);
      wr8((uint32_t)((int)param_1 + 0xf8), 0);
      wr8((uint32_t)((int)param_1 + 0xf9), 1);
      wr8((uint32_t)((int)param_1 + 0xfb), 0);
      wr8((uint32_t)((int)param_1 + 0x103), 0);
      wr8((uint32_t)((int)param_1 + 0x104), 0);
      wr8((uint32_t)((int)param_1 + 0x102), 0);
      wr32((uint32_t)((int)param_1 + 0xfc), 0);
      wr8((uint32_t)((int)param_1 + 0x100), 0);
      wr32((uint32_t)((int)param_1 + 0x594), 0);
      wr32((uint32_t)((int)param_1 + 0x598), 0);
      wr32((uint32_t)((int)param_1 + 0x174), 0);
      wr32((uint32_t)((int)param_1 + 0x178), 0);
      wr8((uint32_t)((int)param_1 + 0x17c), 0);
      wr32((uint32_t)((int)param_1 + 0x160), 0);
      wr32((uint32_t)((int)param_1 + 0x164), 0xbf800000);
      wr32((uint32_t)((int)param_1 + 0x168), 0);
      wr32((uint32_t)((int)param_1 + 0x16c), 0x3f800000);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) != 0) {
        cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100A8A95), 2u, (const CowU32[]){ 3u, 269126688u }, g->ecx, g->edx, 1065353216u, 0u);
        cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100A8AA1), 2u, (const CowU32[]){ 2u, 269126720u }, g->ecx, g->edx, g->eax, 0u);
        if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x50)) == '\x01') {
          wr8((uint32_t)((int)param_1 + 0xfa), 1);
        }
        else {
          wr8((uint32_t)((int)param_1 + 0xfa), 0);
        }
      }
      cow_bridge_100814f0(g, COW_IMG(COW_ADDR_LIFT_100A8AC6), 1u, (const CowU32[]){ 0 }, (CowU32)((int)param_1 + 0x5a0), g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x5ac), 0);
      wr16((uint32_t)((int)param_1 + 0x5ae), 0);
      wr8((uint32_t)((int)param_1 + 0x5b0), 0);
      wr32((uint32_t)((int)param_1 + 0x108), 0);
      wr32((uint32_t)((int)param_1 + 0x10c), 0);
      wr32((uint32_t)((int)param_1 + 0x110), 0);
      wr32((uint32_t)((int)param_1 + 0x114), 0);
      wr32((uint32_t)((int)param_1 + 0x130), rd32(COW_IMG(COW_ADDR_LIFT_1035BC0C)));
      wr32((uint32_t)((int)param_1 + 0x134), rd32(COW_IMG(COW_ADDR_LIFT_1035BC10)));
      wr32((uint32_t)((int)param_1 + 0x138), rd32(COW_IMG(COW_ADDR_LIFT_1035BC14)));
      wr32((uint32_t)((int)param_1 + 0x13c), rd32(COW_IMG(COW_ADDR_LIFT_1035BC18)));
      wr32((uint32_t)((int)param_1 + 0x140), 0x3e000000);
      wr32((uint32_t)((int)param_1 + 0x148), 0);
      wr32((uint32_t)((int)param_1 + 0x144), 0);
      wr32((uint32_t)((int)param_1 + 0x150), rd32(COW_IMG(COW_ADDR_LIFT_1035BC1C)));
      wr32((uint32_t)((int)param_1 + 0x154), rd32(COW_IMG(COW_ADDR_LIFT_1035BC20)));
      wr32((uint32_t)((int)param_1 + 0x158), rd32(COW_IMG(COW_ADDR_LIFT_1035BC24)));
      wr32((uint32_t)((int)param_1 + 0x15c), rd32(COW_IMG(COW_ADDR_LIFT_1035BC28)));
      wr32((uint32_t)((int)param_1 + 0x14c), 0);
      wr8((uint32_t)((int)param_1 + 0x101), 0);
      wr32((uint32_t)((int)param_1 + 0x118), 0);
      wr32((uint32_t)((int)param_1 + 0x11c), 0);
      wr32((uint32_t)((int)param_1 + 0x120), rd32(COW_IMG(COW_ADDR_LIFT_1035BC2C)));
      wr32((uint32_t)((int)param_1 + 0x124), rd32(COW_IMG(COW_ADDR_LIFT_1035BC30)));
      wr32((uint32_t)((int)param_1 + 0x128), rd32(COW_IMG(COW_ADDR_LIFT_1035BC34)));
      uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1035BC38));
      wr8((uint32_t)((int)param_1 + 0x5b1), 0);
      wr32((uint32_t)((int)param_1 + 300), uVar1);
      iVar5 = 5;
      puVar4 = (CowU32)((int)param_1 + 0x388);
      do {
        puVar6 = puVar4 + 4u * (uint32_t)(-0x82);
        for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
          wr32((uint32_t)puVar6, 0);
          puVar6 = puVar6 + 4u * (uint32_t)(1);
        }
        iVar5 = iVar5 + -1;
        puVar6 = puVar4;
        for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
          wr32((uint32_t)puVar6, 0);
          puVar6 = puVar6 + 4u * (uint32_t)(1);
        }
        puVar4 = puVar4 + 4u * (uint32_t)(0x1a);
      } while (iVar5 != 0);
      pvVar2 = (CowU32)cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_100A8BE5), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, 0u, 0u);
      if (pvVar2 == param_1) {
        cow_bridge_100a5770(g, COW_IMG(COW_ADDR_LIFT_100A8BFA), 1u, (const CowU32[]){ (int)param_1 + 0xd4 }, COW_IMG(COW_ADDR_LIFT_10487F1C), g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a89e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a89e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a89e1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a89e2: push edi */
    g->esi = g->ecx;   /* 0x100a89e3: the value the entry loaded and the decompiler dropped */
    cow_lift_100a89e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
