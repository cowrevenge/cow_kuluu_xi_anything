/* f_0x1018fdf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018fdf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018fdf0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    int iVar6;
    CowU32 puVar7;
    int local_4;
    iVar4 = 0;
      iVar6 = 0;
      local_4 = 0;
      if (0 < param_3) {
        while( 1 ) {
          uVar2 = cow_bridge_1018fa80(g, COW_IMG(COW_ADDR_LIFT_1018FE1B), 2u, (const CowU32[]){ rd8((uint32_t)(iVar6 + param_1)), 0 }, g->ecx, g->edx, g->eax, 8u);
          if (uVar2 == 0) break;
          iVar1 = uVar2 + iVar6;
          if (iVar1 < param_3) {
            puVar5 = (CowU32)(iVar6 + param_1);
            puVar7 = (CowU32)(iVar6 + param_2);
            for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr32((uint32_t)puVar7, rd32((uint32_t)puVar5));
              puVar5 = puVar5 + 4u * (uint32_t)(1);
              puVar7 = puVar7 + 4u * (uint32_t)(1);
            }
            iVar4 = local_4 + uVar2;
            for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              wr8((uint32_t)puVar7, rd8((uint32_t)puVar5));
              puVar5 = (CowU32)((int)puVar5 + 1);
              puVar7 = (CowU32)((int)puVar7 + 1);
            }
            local_4 = iVar4;
          }
          else {
            wr8((uint32_t)(iVar6 + param_2), 0);
          }
          iVar6 = iVar1;
          if (param_3 <= iVar1) {
            g->eax = (CowU32)(iVar4); return;
          }
        }
        wr8((uint32_t)(iVar6 + param_2), 0);
      }
      g->eax = (CowU32)(iVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018fdf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1018fdf0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1018fdf1: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018fdf5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1018fdf6: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018fdf7: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018fdf8: push edi */
    g->ebp = 0u;   /* 0x1018fdf9: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x1018fdfb: the value the entry loaded and the decompiler dropped */
    cow_lift_1018fdf0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
