/* f_0x10102050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10102050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10102050(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, int32_t param_7, int32_t param_8, CowU32 param_9, CowU32 param_10)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU8 bVar4;
    int iVar5;
    _Bool bVar2;
      _Bool bVar3;
      
      bVar4 = 0;
      bVar2 = 0;
      bVar3 = 0;
      iVar5 = 0;
      do {
        uVar1 = rd16((uint32_t)(param_8 + iVar5 * 2));
        if (uVar1 < 0x192) {
          if (uVar1 == 0x191) {
            bVar3 = 1;
          }
          else if (uVar1 == 0x4f) {
            bVar4 = bVar4 | 8;
          }
          else if (uVar1 == 0x179) {
            bVar4 = bVar4 | 4;
          }
        }
        else if (uVar1 == 0x192) {
          bVar2 = 1;
        }
        else if (uVar1 == 0x1a0) {
          bVar2 = 1;
          bVar3 = 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      uVar1 = rd16((uint32_t)(param_7 + (CowU32)param_1 * 2));
      if (uVar1 <= param_2) {
        if ((param_6 & 0x20) != 0) {
          g->eax = (CowU32)(param_1 == 0x15); return;
        }
        if ((param_1 == 0x14) && ((param_6 & 8) != 0)) {
          g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((_Bool)(bVar4 >> 2 & 1)) & 0xffffu)); return;
        }
        if ((param_6 & 0x10) != 0) {
          if (param_1 == 0x17) {
            g->eax = (CowU32)(1); return;
          }
          g->eax = (CowU32)((_Bool)(bVar4 >> 3)); return;
        }
        if (param_1 != 0x14) {
          g->eax = (CowU32)(1); return;
        }
        if ((param_6 & 4) == 0) {
          g->eax = (CowU32)(1); return;
        }
        if (param_5 == '\x01') {
          if (bVar3) {
            g->eax = (CowU32)(1); return;
          }
        }
        else if ((param_5 == '\x02') && (bVar2)) {
          g->eax = (CowU32)(1); return;
        }
      }
      if (rd16((uint32_t)(param_7 + (CowU32)param_3 * 2)) <= (CowU16)param_4) {
        if ((param_6 & 0x20) != 0) {
          g->eax = (CowU32)(0); return;
        }
        if (param_3 != 0x14) {
          g->eax = (CowU32)(1); return;
        }
        if ((param_6 & 8) != 0) {
          g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((_Bool)(bVar4 >> 2 & 1)) & 0xffffu)); return;
        }
        if ((param_6 & 4) == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        if (param_5 == '\x01') {
          if (bVar3) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
        }
        else if ((param_5 == '\x02') && (bVar2)) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
      }
      if ((((1 << (param_1 & 0x1f) & param_9) == 0) || (param_2 < 99)) || (param_10 < uVar1)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 10 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10102050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10102050: push ecx */
    { uint8_t a = (uint8_t)g->ecx; uint8_t b = (uint8_t)(uint8_t)g->ecx; uint8_t r = (uint8_t)(a ^ b); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10102051: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10102053: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10102054: register esi, replayed as the entry ran it */
    cow_lift_10102050(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
