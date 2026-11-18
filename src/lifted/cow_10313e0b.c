/* f_0x10313e0b - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10313e0b (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10313e0b(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU8 bVar3;
    CowU32 puVar4;
    CowU32 pcVar5;
    int iVar6;
    CowU32 pcVar7;
    CowU32 pcVar8;
    int iVar9;
    int local_c;
    int local_8;
    puVar4 = (CowU32)param_1;
      uVar1 = rd32((uint32_t)((int)param_1 + 0x10));
      if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) < 0) {
        wr32((uint32_t)((int)param_1 + 4), 0);
      }
      local_8 = cow_bridge_1031f0f0(g, COW_IMG(COW_ADDR_LIFT_10313E30), 3u, (const CowU32[]){ uVar1, 0, 1 }, g->ecx, g->edx, g->eax, 12u);
      if (local_8 < 0) {
    L_10313e99:
        local_c = -1;
      }
      else {
        uVar2 = rd32((uint32_t)((int)param_1 + 0xc));
        if ((uVar2 & 0x108) == 0) {
          g->eax = (CowU32)(local_8 - (int32_t)rd32((uint32_t)((int)param_1 + 4))); return;
        }
        pcVar5 = rd8((uint32_t)param_1);
        pcVar7 = rd8((uint32_t)((int)param_1 + 8));
        local_c = (int)pcVar5 - (int)pcVar7;
        if ((uVar2 & 3) == 0) {
          if ((uVar2 & 0x80) == 0) {
            puVar4 = (CowU32)cow_bridge_10319c89(g, COW_IMG(COW_ADDR_LIFT_10313E93), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)puVar4, 0x16);
            goto L_10313e99;
          }
        }
        else if ((rd8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F82E0) + 4u * (uint32_t)((int)uVar1 >> 5))) + 4 + (uVar1 & 0x1f) * 0x24)) & 0x80) != 0)
        {
          for (pcVar8 = pcVar7; pcVar8 < pcVar5; pcVar8 = pcVar8 + 1) {
            if (rd8((uint32_t)pcVar8) == '\n') {
              local_c = local_c + 1;
            }
          }
        }
        if (local_8 != 0) {
          if ((rd8((uint32_t)((int)param_1 + 0xc)) & 1) != 0) {
            if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) == 0) {
              local_c = 0;
            }
            else {
              pcVar5 = pcVar5 + ((int32_t)rd32((uint32_t)((int)param_1 + 4)) - (int)pcVar7);
              iVar9 = (uVar1 & 0x1f) * 0x24;
              if ((rd8((uint32_t)(iVar9 + 4 + rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F82E0) + 4u * (uint32_t)((int)uVar1 >> 5))))) & 0x80) != 0) {
                iVar6 = cow_bridge_1031f0f0(g, COW_IMG(COW_ADDR_LIFT_10313EFB), 3u, (const CowU32[]){ uVar1, 0, 2 }, g->ecx, g->edx, g->eax, 12u);
                if (iVar6 == local_8) {
                  pcVar7 = rd8((uint32_t)((int)param_1 + 8));
                  pcVar8 = pcVar7 + (int)pcVar5;
                  param_1 = pcVar5;
                  for (; pcVar7 < pcVar8; pcVar7 = pcVar7 + 1) {
                    if (rd8((uint32_t)pcVar7) == '\n') {
                      param_1 = param_1 + 1;
                    }
                  }
                  bVar3 = rd8((uint32_t)((int)puVar4 + 0xd)) & 0x20;
                }
                else {
                  cow_bridge_1031f0f0(g, COW_IMG(COW_ADDR_LIFT_10313F2D), 3u, (const CowU32[]){ uVar1, local_8, 0 }, g->ecx, g->edx, g->eax, 0u);
                  pcVar7 = (CowU32)0x200;
                  if ((((CowU32)0x200 < pcVar5) || ((rd32((uint32_t)((int)param_1 + 0xc)) & 8) == 0)) ||
                     ((rd32((uint32_t)((int)param_1 + 0xc)) & 0x400) != 0)) {
                    pcVar7 = rd8((uint32_t)((int)param_1 + 0x18));
                  }
                  bVar3 = rd8((uint32_t)(iVar9 + 4 + rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F82E0) + 4u * (uint32_t)((int)uVar1 >> 5))))) & 4;
                  param_1 = pcVar7;
                }
                pcVar5 = param_1;
                if (bVar3 != 0) {
                  pcVar5 = param_1 + 1;
                }
              }
              param_1 = pcVar5;
              local_8 = local_8 - (int)param_1;
            }
          }
          local_c = local_c + local_8;
        }
      }
      g->eax = (CowU32)(local_c); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10313e0b(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10313e0b: push ebp */
    g->ebp = g->esp;                       /* 0x10313e0c: mov ebp, esp */
    g->esp -= 0xcu;                      /* 0x10313e0e: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10313e11: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10313e12: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10313e13: push edi */
    g->edi = param_1;   /* 0x10313e14: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x10313e17: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10313e19: register esi, replayed as the entry ran it */
    cow_lift_10313e0b(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
