/* f_0x100fe030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100fe030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100fe030(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    short sVar2;
    CowU32 uVar3;
    CowU8 bVar4;
    CowU8 bVar5;
    sVar2 = 0;
      bVar1 = 0;
      bVar4 = 0;
      bVar5 = 0;
      while (param_3 != 0) {
        if (sVar2 == 0) {
          bVar1 = rd8((uint32_t)param_1);
          if ((bVar1 < 0x30) || (0x39 < bVar1)) {
            if ((bVar1 < 0x41) || (0x5a < bVar1)) {
              if ((bVar1 < 0x61) || (0x7a < bVar1)) {
                bVar1 = 0;
              }
              else {
                bVar1 = bVar1 - 0x3c;
              }
            }
            else {
              bVar1 = bVar1 - 0x36;
            }
          }
          else {
            bVar1 = bVar1 - 0x2f;
          }
          param_1 = param_1 + 1;
          sVar2 = 6;
          if (((bVar1 == 0) || (param_3 < 2)) || ((param_3 == 2 && (4 < bVar5)))) break;
        }
        sVar2 = sVar2 + -1;
        bVar4 = bVar4 * '\x02' | bVar1 >> ((CowU8)sVar2 & 0x1f) & 1;
        bVar5 = bVar5 + 1;
        if (7 < bVar5) {
          wr8((uint32_t)param_2, bVar4);
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          bVar4 = 0;
          bVar5 = 0;
        }
      }
      sVar2 = 6;
      while ((param_3 != 0 && (sVar2 != 0))) {
        sVar2 = sVar2 + -1;
        bVar4 = bVar4 * '\x02' | 0U >> ((CowU8)sVar2 & 0x1f) & 1;
        bVar5 = bVar5 + 1;
        if (7 < bVar5) {
          wr8((uint32_t)param_2, bVar4);
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          bVar4 = 0;
          bVar5 = 0;
        }
      }
      if ((bVar5 != 0) && (param_3 != 0)) {
        if (bVar5 < 8) {
          uVar3 = (CowU32)(CowU8)(8 - bVar5);
          do {
            bVar4 = bVar4 | 0U >> ((CowU8)sVar2 & 0x1f) & 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        wr8((uint32_t)param_2, bVar4);
        bVar5 = 0;
      }
      g->eax = (CowU32)(bVar5 == 0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100fe030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100fe030: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100fe031: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100fe032: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100fe036: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100fe037: register esi, replayed as the entry ran it */
    g->ecx = 0u;   /* 0x100fe03b: the value the entry loaded and the decompiler dropped */
    { uint8_t a = (uint8_t)g->eax; uint8_t b = (uint8_t)(uint8_t)g->eax; uint8_t r = (uint8_t)(a ^ b); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x100fe03d: register eax, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->edx; uint8_t b = (uint8_t)(uint8_t)g->edx; uint8_t r = (uint8_t)(a ^ b); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x100fe03f: register edx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x100fe041: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100fe043: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100fe044: register edi, replayed as the entry ran it */
    cow_lift_100fe030(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
