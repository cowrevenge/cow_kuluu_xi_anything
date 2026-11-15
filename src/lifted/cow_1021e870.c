/* f_0x1021e870 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021e870 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021e870(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    CowU8 bVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    bVar4 = rd8((uint32_t)(param_1 + 0xb));
      bVar2 = rd8((uint32_t)(param_1 + 2));
      bVar1 = rd8((uint32_t)(param_1 + 0xc));
      uVar5 = (int)((((((((((((bVar2 >> 6 & 1) - (bVar4 >> 6 & 1)) - (bVar4 >> 5 & 1)) -
                           (bVar4 >> 4 & 1)) - (bVar4 >> 3 & 1)) - (bVar4 >> 2 & 1)) - (bVar4 >> 1 & 1))
                        + (bVar2 >> 5 & 1) + (bVar2 >> 4 & 1) + (bVar2 >> 3 & 1) + (bVar2 >> 2 & 1) +
                       (bVar2 >> 1 & 1)) - (CowU32)(bVar4 >> 7)) + (bVar1 >> 6 & 1) + (bVar1 >> 5 & 1) +
                      (bVar1 >> 4 & 1) + (bVar1 >> 3 & 1) + (bVar1 >> 2 & 1) + (bVar1 >> 1 & 1) +
                     (CowU32)(bVar2 >> 7)) - (bVar4 & 1)) + (CowU32)(bVar1 >> 7) + (bVar2 & 1) + (bVar1 & 1)
                   ) % 5;
      iVar3 = 0;
      uVar6 = (int)uVar5 >> 0x1f;
      if (0 < param_2) {
        do {
          if (((iVar3 != 2) && (iVar3 != 0xb)) && (iVar3 != 0xc)) {
            switch((uVar5 ^ uVar6) - uVar6) {
            case 0:
              bVar2 = rd8((uint32_t)(iVar3 + param_1)) >> 7;
              bVar4 = rd8((uint32_t)(iVar3 + param_1)) * '\x02';
              break;
            case 1:
              bVar2 = rd8((uint32_t)(iVar3 + param_1)) << 7;
              bVar4 = rd8((uint32_t)(iVar3 + param_1)) >> 1;
              break;
            case 2:
              bVar2 = rd8((uint32_t)(iVar3 + param_1)) >> 6;
              bVar4 = rd8((uint32_t)(iVar3 + param_1)) << 2;
              break;
            case 3:
              bVar2 = rd8((uint32_t)(iVar3 + param_1)) << 6;
              bVar4 = rd8((uint32_t)(iVar3 + param_1)) >> 2;
              break;
            case 4:
              bVar2 = rd8((uint32_t)(iVar3 + param_1)) >> 5;
              bVar4 = rd8((uint32_t)(iVar3 + param_1)) << 3;
              break;
            default:
              goto switchD_1021e989_default;
            }
            wr8((uint32_t)(iVar3 + param_1), bVar2 | bVar4);
          }
    switchD_1021e989_default:
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021e870(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1021e870: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1021e871: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1021e872: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1021e873: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1021e874: register edi, replayed as the entry ran it */
    g->edx = 0u;   /* 0x1021e878: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x1021e87a: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x1021e87c: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0xBu); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1021e87e: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x2u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1021e881: register eax, replayed as the entry ran it */
    g->ebx = g->edx;   /* 0x1021e884: the value the entry loaded and the decompiler dropped */
    g->esi = g->eax;   /* 0x1021e886: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->ebx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ebx = (uint32_t)(r); } }; }   /* 0x1021e888: register ebx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x1021e88b: register eax, replayed as the entry ran it */
    { uint32_t a = g->ebx; uint32_t b = (uint32_t)0x1u; uint32_t r = (uint32_t)(a & b); g->ebx = (uint32_t)(r); }   /* 0x1021e88e: register ebx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x1u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1021e891: register eax, replayed as the entry ran it */
    cow_lift_1021e870(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
