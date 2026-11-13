/* f_0x102c0140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c0140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c0140(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU8 bVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    int iVar8;
    bVar3 = rd8((uint32_t)((int)param_1 + 9));
      iVar2 = rd32((uint32_t)param_1);
      if ((7 < bVar3) && (bVar1 = rd8((uint32_t)(param_1 + 4u * (uint32_t)(2))), (bVar1 & 2) == 0)) {
        if (bVar1 == 0) {
          if (bVar3 == 8) {
            puVar4 = (CowU32)(iVar2 + -1 + param_2);
            puVar6 = puVar4 + iVar2 * 2;
            if (iVar2 != 0) {
              iVar8 = iVar2;
              do {
                wr8((uint32_t)puVar6, rd8((uint32_t)puVar4));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar4));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar4));
                puVar6 = puVar6 + -3;
                puVar4 = puVar4 + -1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          else {
            puVar4 = (CowU32)(param_2 + -1 + iVar2 * 2);
            puVar6 = puVar4 + iVar2 * 4;
            if (iVar2 != 0) {
              param_2 = iVar2;
              do {
                wr8((uint32_t)puVar6, rd8((uint32_t)puVar4));
                puVar5 = puVar4 + -1;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar4));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-4)), rd8((uint32_t)puVar4));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-5)), rd8((uint32_t)puVar5));
                puVar6 = puVar6 + -6;
                puVar4 = puVar4 + -2;
                param_2 = param_2 + -1;
              } while (param_2 != 0);
            }
          }
        }
        else if (bVar1 == 4) {
          if (bVar3 == 8) {
            puVar4 = (CowU32)(param_2 + -1 + iVar2 * 2);
            puVar6 = puVar4 + iVar2 * 2;
            if (iVar2 != 0) {
              iVar8 = iVar2;
              do {
                wr8((uint32_t)puVar6, rd8((uint32_t)puVar4));
                puVar5 = puVar4 + -1;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar5));
                puVar6 = puVar6 + -4;
                puVar4 = puVar4 + -2;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          else {
            puVar4 = (CowU32)(param_2 + -1 + iVar2 * 4);
            puVar6 = puVar4 + iVar2 * 4;
            if (iVar2 != 0) {
              param_2 = iVar2;
              do {
                wr8((uint32_t)puVar6, rd8((uint32_t)puVar4));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar4 + 1u * (uint32_t)(-1))));
                puVar7 = puVar4 + -2;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar7));
                puVar5 = puVar4 + -3;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-4)), rd8((uint32_t)puVar7));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-5)), rd8((uint32_t)puVar5));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-6)), rd8((uint32_t)puVar7));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-7)), rd8((uint32_t)puVar5));
                puVar6 = puVar6 + -8;
                puVar4 = puVar4 + -4;
                param_2 = param_2 + -1;
              } while (param_2 != 0);
            }
          }
        }
        wr8((uint32_t)((int)param_1 + 10), (int8_t)rd8((uint32_t)((int)param_1 + 10)) + '\x02');
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd8((uint32_t)(param_1 + 4u * (uint32_t)(2))) | 2);
        bVar3 = (int8_t)rd8((uint32_t)((int)param_1 + 9)) * (int8_t)rd8((uint32_t)((int)param_1 + 10));
        wr8((uint32_t)((int)param_1 + 0xb), bVar3);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (CowU32)bVar3 * iVar2 + 7 >> 3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c0140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c0140: push ebp */
    g->ebp = g->esp;                       /* 0x102c0141: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c0143: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c0144: push edi */
    g->edi = param_2;   /* 0x102c0145: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x9u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c0148: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->esi = (uint32_t)(rd32(A)); }   /* 0x102c014b: register esi, replayed as the entry ran it */
    cow_lift_102c0140(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
