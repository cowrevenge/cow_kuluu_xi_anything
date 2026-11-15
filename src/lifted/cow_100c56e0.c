/* f_0x100c56e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100c56e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100c56e0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    cow_bridge_100a4c20(g, COW_IMG(COW_ADDR_LIFT_100C56EB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_1002b4b0(g, COW_IMG(COW_ADDR_LIFT_100C56F6), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x674), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x734), 0);
      wr32((uint32_t)((int)param_1 + 0x750), 0);
      wr32((uint32_t)((int)param_1 + 0x744), 0x3dcccccd);
      wr32((uint32_t)((int)param_1 + 0x740), 0);
      wr32((uint32_t)((int)param_1 + 0x73c), 0);
      wr32((uint32_t)((int)param_1 + 0x74c), 0);
      wr32((uint32_t)((int)param_1 + 0x730), 0x48);
      wr32((uint32_t)((int)param_1 + 0x738), 0);
      cow_bridge_100814a0(g, COW_IMG(COW_ADDR_LIFT_100C573B), 0u, (const CowU32[]){ 0u }, (g->esi + 1960u), g->edx, 0u, 0u);
      cow_bridge_10022230(g, COW_IMG(COW_ADDR_LIFT_100C5746), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x878), g->edx, g->eax, 0u);
      cow_bridge_10055240(g, COW_IMG(COW_ADDR_LIFT_100C5751), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x8c8), g->edx, g->eax, 0u);
      cow_bridge_1006c260(g, COW_IMG(COW_ADDR_LIFT_100C575C), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x8f0), g->edx, g->eax, 0u);
      cow_bridge_10027990(g, COW_IMG(COW_ADDR_LIFT_100C5767), 0u, (const CowU32[]){ 0u }, (g->esi + 2456u), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10330F40));
      wr32((uint32_t)(param_3 + 0xa0), param_1);
      cow_bridge_100c5d60(g, COW_IMG(COW_ADDR_LIFT_100C577E), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((param_4 == 0x706f7073) && ((int8_t)rd8((uint32_t)(param_3 + 0xee)) != '\0')) {
        wr32((uint32_t)((int)param_1 + 0x660), 0x808080);
      }
      wr32((uint32_t)((int)param_1 + 0x8c4), param_4);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C57B4), 2u, (const CowU32[]){ (int)param_1 + 0x5fc, param_2 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x608), 0x3f800000);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C57CB), 2u, (const CowU32[]){ (int)param_1 + 0x9d8, param_2 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x9e4), 0x3f800000);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_100C57E2), 2u, (const CowU32[]){ (int)param_1 + 0x678, (int)param_1 + 0x5fc }, g->ecx, g->edx, g->eax, 24u);
      wr32((uint32_t)((int)param_1 + 0x70), param_3);
      cow_bridge_100d4330(g, COW_IMG(COW_ADDR_LIFT_100C57F1), 1u, (const CowU32[]){ 0xffffffff }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C57FD), 2u, (const CowU32[]){ 1u, 269243408u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C5809), 2u, (const CowU32[]){ 0u, 269243456u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10159400(g, COW_IMG(COW_ADDR_LIFT_100C5815), 2u, (const CowU32[]){ 4u, 269243584u }, g->ecx, g->edx, g->eax, 24u);
      iVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100C581F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 1) {
        iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C582B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C5836), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 6) goto L_100c583b;
        }
      }
      else {
    L_100c583b:
        iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C5842), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 2) {
          iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100C584E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 7) goto L_100c5865;
        }
        cVar1 = cow_bridge_10084140(g, COW_IMG(COW_ADDR_LIFT_100C585A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (cVar1 != '\x01') goto L_100c5865;
      }
      wr8((uint32_t)((int)param_1 + 0x83c), 1);
    L_100c5865:
      cow_bridge_100749b0(g, COW_IMG(COW_ADDR_LIFT_100C586E), 1u, (const CowU32[]){ 4u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10093db0(g, COW_IMG(COW_ADDR_LIFT_100C5873), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100c56e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100c56e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100c56e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100c56e2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100c56e3: push edi */
    g->esi = g->ecx;   /* 0x100c56e4: the value the entry loaded and the decompiler dropped */
    cow_lift_100c56e0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
