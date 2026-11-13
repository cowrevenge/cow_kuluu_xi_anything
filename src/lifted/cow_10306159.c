/* f_0x10306159 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10306159 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10306159(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    CowU8 bVar3;
    CowU8 bVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    CowU32 pbVar13;
    CowU32 puVar14;
    CowU32 uVar15;
    int iVar16;
    int iVar17;
    CowU32 uVar18;
    CowU32 local_1c;
    int local_18;
    iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x1a0));
      iVar6 = (int32_t)rd32((uint32_t)(param_1 + 0x11c));
      uVar7 = rd32((uint32_t)(param_1 + 0x5c));
      iVar8 = (int32_t)rd32((uint32_t)(iVar5 + 8));
      iVar9 = (int32_t)rd32((uint32_t)(iVar5 + 0xc));
      iVar10 = (int32_t)rd32((uint32_t)(iVar5 + 0x10));
      iVar5 = (int32_t)rd32((uint32_t)(iVar5 + 0x14));
      uVar18 = uVar7 & 0xfffffff8;
      if (rd32(COW_IMG(COW_ADDR_LIFT_103CE448)) == '\0') {
        if (-1 < param_5 + -1) {
          param_3 = param_3 << 2;
          local_18 = param_5;
          do {
            piVar1 = (CowU32)(param_3 + rd32((uint32_t)param_2));
            pbVar13 = rd8((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))));
            piVar2 = (CowU32)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
            param_3 = param_3 + 4;
            if (uVar7 != 0) {
              iVar16 = rd32((uint32_t)piVar1) - (int)pbVar13;
              iVar17 = rd32((uint32_t)piVar2) - (int)pbVar13;
              puVar14 = (CowU32)rd32((uint32_t)param_4);
              local_1c = uVar7;
              while( 1 ) {
                bVar3 = rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar17)));
                uVar18 = (CowU32)rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar16)));
                bVar4 = rd8((uint32_t)pbVar13);
                wr8((uint32_t)puVar14, rd8((uint32_t)((int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar8)) + uVar18 + iVar6)));
                wr8((uint32_t)(puVar14 + 1u * (uint32_t)(1)), rd8((uint32_t)(((int32_t)rd32((uint32_t)((CowU32)bVar4 * 4 + iVar5)) + (int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar10))
                               >> 0x10) + uVar18 + iVar6)));
                pbVar13 = pbVar13 + 1;
                local_1c = local_1c - 1;
                wr8((uint32_t)(puVar14 + 1u * (uint32_t)(2)), rd8((uint32_t)((int32_t)rd32((uint32_t)((CowU32)bVar4 * 4 + iVar9)) + uVar18 + iVar6)));
                if (local_1c == 0) break;
                puVar14 = puVar14 + 3;
              }
            }
            local_18 = local_18 + -1;
            param_4 = param_4 + 4u * (uint32_t)(1);
          } while (local_18 != 0);
        }
      }
      else if (-1 < param_5 + -1) {
        param_3 = param_3 << 2;
        local_1c = param_5;
        while( 1 ) {
          iVar16 = (int32_t)rd32((uint32_t)(param_3 + rd32((uint32_t)param_2)));
          iVar17 = (int32_t)rd32((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))));
          iVar11 = (int32_t)rd32((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(2)))));
          param_3 = param_3 + 4;
          iVar12 = rd32((uint32_t)param_4);
          cow_bridge_10305db3(g, COW_IMG(COW_ADDR_LIFT_103061FB), 5u, (const CowU32[]){ uVar18, iVar16, iVar17, iVar11, iVar12 }, g->ecx, g->edx, g->eax, 0u);
          if (uVar18 < uVar7) {
            pbVar13 = (CowU32)(iVar17 + uVar18);
            local_18 = uVar7 - uVar18;
            puVar14 = (CowU32)(iVar12 + uVar18 * 3);
            while( 1 ) {
              bVar3 = rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar11 - iVar17)));
              uVar15 = (CowU32)rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar16 - iVar17)));
              bVar4 = rd8((uint32_t)pbVar13);
              wr8((uint32_t)puVar14, rd8((uint32_t)((int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar8)) + uVar15 + iVar6)));
              wr8((uint32_t)(puVar14 + 1u * (uint32_t)(1)), rd8((uint32_t)(((int32_t)rd32((uint32_t)((CowU32)bVar4 * 4 + iVar5)) + (int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar10)) >>
                             0x10) + uVar15 + iVar6)));
              pbVar13 = pbVar13 + 1;
              local_18 = local_18 + -1;
              wr8((uint32_t)(puVar14 + 1u * (uint32_t)(2)), rd8((uint32_t)((int32_t)rd32((uint32_t)((CowU32)bVar4 * 4 + iVar9)) + uVar15 + iVar6)));
              if (local_18 == 0) break;
              puVar14 = puVar14 + 3;
            }
          }
          local_1c = local_1c + -1;
          if (local_1c == 0) break;
          param_4 = param_4 + 4u * (uint32_t)(1);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10306159(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10306159: push ebp */
    g->ebp = g->esp;                       /* 0x1030615a: mov ebp, esp */
    g->esp -= 0x34u;                      /* 0x1030615c: 52 bytes of locals */
    g->ecx = param_1;   /* 0x1030615f: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x1A0u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10306162: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10306168: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10306169: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x11Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1030616a: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10306170: push edi */
    { uint32_t A = (uint32_t)(g->ecx + 0x5Cu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10306171: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10306174: register ecx, replayed as the entry ran it */
    cow_lift_10306159(g, param_1, param_2, param_3, param_4, param_5);

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
