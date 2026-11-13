/* f_0x101091d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101091d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101091d0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    int iVar6;
    CowU32 pcVar7;
    iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((iVar3 == 0) || (pcVar5 = rd8((uint32_t)(iVar3 + 4)), pcVar5 == (CowU32)0x0)) {
        pcVar5 = (CowU32)0x0;
        iVar6 = 0;
      }
      else {
        uVar4 = 0xffffffff;
        pcVar7 = pcVar5;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = rd8((uint32_t)pcVar7);
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar6 = ~uVar4 - 1;
      }
      if (iVar3 == 0) {
        puVar2 = (CowU32)cow_bridge_101085c0(g, COW_IMG(COW_ADDR_LIFT_101091F3), 2u, (const CowU32[]){ 8, 0 }, g->ecx, g->edx, g->eax, 8u);
        if (puVar2 == (CowU32)0x0) {
          puVar2 = (CowU32)0x0;
        }
        else {
          wr32((uint32_t)(puVar2 + 2u * (uint32_t)(2)), 0);
          wr16((uint32_t)puVar2, 0);
          wr16((uint32_t)(puVar2 + 2u * (uint32_t)(1)), 1);
        }
        wr16((uint32_t)(param_1 + 4), puVar2);
        if (puVar2 == (CowU32)0x0) {
          cow_bridge_10109100(g, COW_IMG(COW_ADDR_LIFT_10109230), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
      }
      iVar3 = cow_bridge_10109000(g, COW_IMG(COW_ADDR_LIFT_1010924B), 3u, (const CowU32[]){ iVar6 + 1 + param_2, pcVar5, iVar6 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)(iVar3 + iVar6); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101091d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101091d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101091d1: push ebp */
    g->ebp = g->ecx;   /* 0x101091d2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101091d4: push esi */
    { uint32_t A = (uint32_t)(g->ebp + 0x4u); g->edx = (uint32_t)(rd32(A)); }   /* 0x101091d5: register edx, replayed as the entry ran it */
    cow_lift_101091d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
