/* f_0x100df7c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100df7c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100df7c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    uVar2 = 0;
      uVar4 = 0;
      uVar3 = uVar2;
      if (param_2 != 0) {
        do {
          iVar1 = rd32((uint32_t)(param_5 + 0x600 + rd8((uint32_t)(uVar4 + (int)param_1)) * 4));
          uVar2 = iVar1 + uVar3;
          if ((param_4 - 1) * 8 <= uVar2) {
            if (param_4 < param_2 + 1) {
              g->eax = (CowU32)(-1); return;
            }
            puVar5 = param_3;
            for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              wr32((uint32_t)puVar5, 0);
              puVar5 = puVar5 + 1;
            }
            for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
              wr8((uint32_t)puVar5, 0);
              puVar5 = (CowU32)((int)puVar5 + 1);
            }
            puVar5 = (CowU32)((int)param_3 + 1);
            for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              wr32((uint32_t)puVar5, rd32((uint32_t)param_1));
              param_1 = param_1 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              wr8((uint32_t)puVar5, rd8((uint32_t)param_1));
              param_1 = (CowU32)((int)param_1 + 1);
              puVar5 = (CowU32)((int)puVar5 + 1);
            }
            wr8((uint32_t)param_3, 0);
            g->eax = (CowU32)((param_2 + 1) * 8); return;
          }
          cow_bridge_100df6e0(g, COW_IMG(COW_ADDR_LIFT_100DF81E), 7u, (const CowU32[]){ (CowU32)((int)param_3 + 1), param_4 - 1, uVar3, param_5 + 0x200 + rd8((uint32_t)(uVar4 + (int)param_1)) * 4, 4, 0, iVar1 }, g->ecx, g->edx, 0u, 28u);
          uVar4 = uVar4 + 1;
          uVar3 = uVar2;
        } while (uVar4 < param_2);
      }
      wr8((uint32_t)param_3, 1);
      g->eax = (CowU32)(uVar2 + 8); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100df7c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100df7c0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100df7c1: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100df7c5: push ebx */
    g->eax = 0u;   /* 0x100df7c6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100df7c8: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100df7c9: register ebp, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x100df7cd: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100df7ce: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100df7cf: push edi */
    { g->edx = (uint32_t)((uint32_t)(g->ecx * 8)); }   /* 0x100df7d0: register edx, replayed as the entry ran it */
    g->edi = 0u;   /* 0x100df7d7: the value the entry loaded and the decompiler dropped */
    cow_lift_100df7c0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
