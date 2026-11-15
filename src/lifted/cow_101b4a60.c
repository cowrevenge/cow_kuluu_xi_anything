/* f_0x101b4a60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b4a60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b4a60(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    if (param_2 == (CowU32)0x0) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x21e0));
      if (cVar1 != '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 4)) == (int32_t)rd32((uint32_t)(param_1 + 0x21d4))) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        if (cVar1 != '\0') goto L_101b4aa2;
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 4)) == 0x3c) {
        g->eax = (CowU32)(0xffffffff); return;
      }
    L_101b4aa2:
      uVar3 = param_3 + 1;
      if (cVar1 == '\0') {
        puVar5 = (CowU32)(param_1 + 0x3c8 + (int32_t)rd32((uint32_t)(param_1 + 0x21cc)));
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)param_2));
          param_2 = param_2 + 4u * (uint32_t)(1);
          puVar5 = puVar5 + 4u * (uint32_t)(1);
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          wr8((uint32_t)puVar5, rd8((uint32_t)param_2));
          param_2 = (CowU32)((int)param_2 + 1);
          puVar5 = (CowU32)((int)puVar5 + 1);
        }
        iVar4 = param_1 + 0x3c8 + (int32_t)rd32((uint32_t)(param_1 + 0x21cc));
      }
      else {
        puVar5 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x21d8)) + (int32_t)rd32((uint32_t)(param_1 + 0x21cc)));
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)param_2));
          param_2 = param_2 + 4u * (uint32_t)(1);
          puVar5 = puVar5 + 4u * (uint32_t)(1);
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          wr8((uint32_t)puVar5, rd8((uint32_t)param_2));
          param_2 = (CowU32)((int)param_2 + 1);
          puVar5 = (CowU32)((int)puVar5 + 1);
        }
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 0x21d8)) + (int32_t)rd32((uint32_t)(param_1 + 0x21cc));
      }
      cow_bridge_101b46a0(g, COW_IMG(COW_ADDR_LIFT_101B4B31), 1u, (const CowU32[]){ 0 }, iVar4, param_3, 0u, 0u);
      wr32((uint32_t)(param_1 + 0x21cc), (int32_t)rd32((uint32_t)(param_1 + 0x21cc)) + param_3 + 1);
      wr32((uint32_t)(param_1 + 4), (int32_t)rd32((uint32_t)(param_1 + 4)) + 1);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b4a60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101b4a60: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b4a61: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x101b4a62: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101b4a66: the value the entry loaded and the decompiler dropped */
    cow_lift_101b4a60(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
