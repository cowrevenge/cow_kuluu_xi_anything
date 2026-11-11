/* f_0x101ba6e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ba6e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ba6e0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 pcVar6;
    iVar4 = 0;
      if (0 < param_1) {
        puVar5 = (CowU32)(param_2 + 4);
        do {
          pcVar1 = (CowU32)rd32((uint32_t)puVar5);
          if (pcVar1 == (CowU32)0x0) {
            g->eax = (CowU32)(1); return;
          }
          uVar3 = 0xffffffff;
          pcVar6 = pcVar1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = rd8((uint32_t)pcVar6);
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          cVar2 = cow_bridge_101bc7b0(g, COW_IMG(COW_ADDR_LIFT_101BA71B), 3u, (const CowU32[]){ pcVar1, ~uVar3 - 1, rd32((uint32_t)(puVar5 + 4u * (uint32_t)(-1))) }, g->ecx, g->edx, param_2, 0u);
          if (cVar2 == '\0') {
            g->eax = (CowU32)(0); return;
          }
          puVar5 = puVar5 + 2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ba6e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x101ba6e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101ba6e4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101ba6e5: push ebp */
    g->ebx = 0u;   /* 0x101ba6e6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ba6e8: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101ba6e9: push edi */
    cow_lift_101ba6e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
