/* f_0x100c5560 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100c5560 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100c5560(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    cow_bridge_100a4c20(g, COW_IMG(COW_ADDR_LIFT_100C556B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_1002b4b0(g, COW_IMG(COW_ADDR_LIFT_100C5576), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x674), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x734), 0);
      wr32((uint32_t)((int)param_1 + 0x750), 0);
      wr32((uint32_t)((int)param_1 + 0x744), 0x3dcccccd);
      wr32((uint32_t)((int)param_1 + 0x740), 0);
      wr32((uint32_t)((int)param_1 + 0x73c), 0);
      wr32((uint32_t)((int)param_1 + 0x74c), 0);
      wr32((uint32_t)((int)param_1 + 0x730), 0x48);
      wr32((uint32_t)((int)param_1 + 0x738), 0);
      cow_bridge_100814a0(g, COW_IMG(COW_ADDR_LIFT_100C55BB), 0u, (const CowU32[]){ 0u }, (g->esi + 1960u), g->edx, g->eax, 0u);
      cow_bridge_10022230(g, COW_IMG(COW_ADDR_LIFT_100C55C6), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x878), g->edx, g->eax, 0u);
      cow_bridge_10055240(g, COW_IMG(COW_ADDR_LIFT_100C55D1), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x8c8), g->edx, g->eax, 0u);
      cow_bridge_1006c260(g, COW_IMG(COW_ADDR_LIFT_100C55DC), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x8f0), g->edx, g->eax, 0u);
      cow_bridge_10027990(g, COW_IMG(COW_ADDR_LIFT_100C55E7), 0u, (const CowU32[]){ 0u }, (g->esi + 2456u), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10330F40));
      cow_bridge_100c5d60(g, COW_IMG(COW_ADDR_LIFT_100C55F4), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x8c4), param_3);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C560F), 2u, (const CowU32[]){ (int)param_1 + 0x5fc, param_2 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x608), 0x3f800000);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C5626), 2u, (const CowU32[]){ (int)param_1 + 0x9d8, param_2 }, (g->esi + 2520u), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x9e4), 0x3f800000);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C563D), 2u, (const CowU32[]){ (g->esi + 1656u), (g->esi + 1532u) }, g->ecx, (g->esi + 1656u), g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C5649), 2u, (const CowU32[]){ 1u, 269243408u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C5654), 2u, (const CowU32[]){ 0u, 269243456u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C5660), 2u, (const CowU32[]){ 4u, 269243584u }, g->ecx, g->edx, g->eax, 48u);
      iVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100C566A), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      if (iVar2 == 1) {
        iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C5676), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C5681), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
          if (iVar2 != 6) goto L_100c5686;
        }
      }
      else {
    L_100c5686:
        iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C568D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 2) {
          iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C5699), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 7) goto L_100c56b0;
        }
        cVar1 = cow_bridge_10084140(g, COW_IMG(COW_ADDR_LIFT_100C56A5), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (cVar1 != '\x01') goto L_100c56b0;
      }
      wr8((uint32_t)((int)param_1 + 0x83c), 1);
    L_100c56b0:
      cow_bridge_100749b0(g, COW_IMG(COW_ADDR_LIFT_100C56B9), 1u, (const CowU32[]){ 4u }, param_1, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_10093db0(g, COW_IMG(COW_ADDR_LIFT_100C56BE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        cow_bridge_100d4330(g, COW_IMG(COW_ADDR_LIFT_100C56CB), 1u, (const CowU32[]){ 0xffffffff }, param_1, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(param_1); return;
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
void cow_adapter_100c5560(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100c5560: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100c5561: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100c5562: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100c5563: push edi */
    g->esi = g->ecx;   /* 0x100c5564: the value the entry loaded and the decompiler dropped */
    cow_lift_100c5560(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
