/* f_0x101c5f30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c5f30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c5f30(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    CowU32 uVar5;
    if (param_2 == (CowU32)0x0) {
        pcVar4 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        do {
          cVar1 = rd8((uint32_t)pcVar4);
          wr8((uint32_t)(pcVar4 + 1u * (uint32_t)(param_1 + -0x103d3c72)), cVar1);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        wr32((uint32_t)(param_1 + 0x39c), 0);
        do {
          cVar1 = rd8((uint32_t)pcVar4);
          wr8((uint32_t)(pcVar4 + 1u * (uint32_t)(param_1 + -0x103d38e4)), cVar1);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        wr32((uint32_t)(param_1 + 0x690), 0);
        g->eax = (CowU32)(1); return;
      }
      uVar5 = 0xffffffff;
      pcVar4 = param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = rd8((uint32_t)pcVar4);
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = cow_bridge_101b7280(g, COW_IMG(COW_ADDR_LIFT_101C5F6E), 6u, (const CowU32[]){ param_2, ~uVar5 - 1, param_1 + 0x1d5, (int32_t)rd32((uint32_t)(param_1 + 0x398)) + 1, 0, 0 }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(param_1 + 0x39c), iVar2);
      if (iVar2 < 1) {
        wr8((uint32_t)(param_1 + 0x12), 0);
        wr8((uint32_t)(param_1 + 0x3a0), 0);
        wr32((uint32_t)(param_1 + 0x690), 0);
        g->eax = (CowU32)(1); return;
      }
      pcVar4 = (CowU32)(param_1 + 0x12);
      pcVar3 = param_2;
      do {
        cVar1 = rd8((uint32_t)pcVar3);
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)((int)pcVar4 - (int)param_2)), cVar1);
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar2 = (param_1 + 0x3a0) - (int)pcVar4;
      do {
        cVar1 = rd8((uint32_t)pcVar4);
        wr8((uint32_t)(pcVar4 + 1u * (uint32_t)(iVar2)), cVar1);
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = rd8((uint32_t)param_2);
        param_2 = param_2 + 1;
      } while (cVar1 != '\0');
      wr32((uint32_t)(param_1 + 0x690), ~uVar5 - 1);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c5f30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c5f30: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101c5f31: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101c5f32: register ebp, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x101c5f36: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c5f38: push esi */
    cow_lift_101c5f30(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
